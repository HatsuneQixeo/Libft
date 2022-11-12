#!/bin/zsh

CC="gcc"
SAN="-fsanitize=address -g3"
SRCS="experiment/$1.c"
LIBFT="libft.a -Iinclude"
PRG="$1.miku"
COMPILE="$CC $SRCS $LIBFT -o $PRG"

if [[ $2 == 'san' ]]; then
	make && $COMPILE $SAN &&
	echo 'Sanitizer: ON' &&
	./$PRG
elif [[ $2 == 'nocom' ]]; then
	echo 'Skipped compilation' 
	./$PRG
elif [ $1 ]; then
	make && $COMPILE &&
	echo 'Compiled' &&
	./$PRG
else
	echo 'Please provide a filename as argument'
fi
