#!/bin/bash

# Compile all .c files to object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Verify the contents
ar -t liball.a
nm libmy.a
