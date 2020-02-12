#!/bin/bash
if [ -e printf ]; then
	rm printf
fi
gcc libftprintf.a main.c -o printf
./printf | cat -e