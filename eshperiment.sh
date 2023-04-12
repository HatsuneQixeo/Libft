# Compile flags
cc="gcc"
extra="-Wextra"
error="-Werror"
cflags="-Wall $extra $error"
unused="-Wno-unused"
unused_set="$unused-parameter $unused-function $unused-variable"
san="-fsanitize=address -g3 -D SAN"

# Files
src="$1"
libft="libft.a -Iinclude -I../include"
prg="${1//.c/.miku}"
compile="$cc $cflags $src $libft -o $prg"

function esh_echo()
{
	echo "exp: $@"
}

if [ $# -eq 0 ]
then
	esh_echo 'Please provide a source file with main for testing'
	exit 1
elif ! [ -e "$src" ]
then
	esh_echo "File not found: $src"
	exit 1
elif [ -d "$src" ]
then
	esh_echo "Is a directory: $src"
	exit 1
fi

messages=()
for arg in "${@:2}"
do
	case "$arg" in
	'nocom')
		esh_echo 'Skipped compilation'
		compile=""
		break
	;;
	"san")
		if ! [[ "$cflags" =~ "$san" ]]
		then
			messages+=('Sanitizer: ON')
			cflags+=" $san"
		fi
	;;
	'noextra')
		if [[ "$cflags" =~ "$extra" ]]
		then
			messages+=("Excluding $extra flag")
			cflags="${cflags//"$extra"/}"
		fi
	;;
	'noerror')
		if [[ "$cflags" =~ "$error" ]]
		then
			messages+=("Excluding $error flag")
			cflags="${cflags//"$error"/}"
		fi
	;;
	'nounused')
		if ! [[ "$cflags" =~ "$unused_set" ]]
		then
			messages+=('Ignoring unused parameter')
			cflags+=" $unused_set"
		fi
	;;
	*)
		esh_echo "Unknown flag: $arg"
		<< EOF cat
Available flag are:
	nocom:		Skip compilation
	san:		Compile with $san
	noextra:	Compile without $extra
	noerror:	Compile without $error
	nounused:	Compile with $unused_set
EOF
		exit 1
	;;
	esac
done

if [ -n "$compile" ]
then
	compile="$cc $cflags $src $libft -o $prg"
	for msg in "${messages[@]}"
	do
		echo $msg
	done
	make &&
	esh_echo $compile &&
	$compile &&
	esh_echo "Compiled: $prg"'\n' &&
	mv "$prg" .
fi

[ $? -ne 0 ] && exit 1

./"$(basename "$prg")"

# BUG: make is executed in the current working directory, where the bash script is ran
# so it could be running another make if not executed it's own directory
#  && rm "$prg"
