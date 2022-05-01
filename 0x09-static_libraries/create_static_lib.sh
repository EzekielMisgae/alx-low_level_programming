#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a

ar -rc libmy.a *.o
ranlib libmy.al
