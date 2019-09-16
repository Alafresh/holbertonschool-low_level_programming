#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c | gcc -shared -Wl,-soname,liball.so -o liball.so *.o
