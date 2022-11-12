#!/bin/bash
gcc -Wall -Wextra -Werror -Pendatic -c *.c
ar -rc liball.a *.o
ranlib liball.a
