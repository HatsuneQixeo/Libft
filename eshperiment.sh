cc="gcc"
extra="-Wextra"
error="-Werror"
cflags="-Wall $extra $error"
unused="-Wno-unused"
unused_set="$unused-parameter $unused-function"
san="-fsanitize=address -g3"
src="experiment/$1.c"
libft="libft.a -Iinclude"
prg="$1.miku"
compile="$cc $cflags $src $libft -o $prg"

if [ $# -eq 0 ]
then
	echo 'Please provide a {name of the source file (without the .c) within the experiment directory} as argument'
	exit 1
fi

messages=()
for arg in "${@:2}"
do
	case "$arg" in
	'nocom')
		echo 'Skipped compilation'
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
		echo 'Unknown flag:' $arg
		echo 'Available flag are:'
		echo '	nocom:		Skip compilation'
		echo "	san:		Compile with $san"
		echo "	noextra:	Compile without $extra"
		echo "	noerror:	Compile without $error"
		echo "	nounused:	Compile with $unused_set"
		exit 1
	;;
	esac
done

if [ -z "$compile" ]
then
	exit 1
fi

for msg in "${messages[@]}"
do	
	echo $msg
done
compile="$cc $cflags $src $libft -o $prg"
echo 'Compiling with:' $compile
make && $compile || exit 1 &&
echo 'Compiled' || exit 1
./$prg
