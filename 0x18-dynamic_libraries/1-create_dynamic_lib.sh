#!/bin/bash/python3
gcc *.c -e -fPIC
gcc *.o -shared -o liball.so
