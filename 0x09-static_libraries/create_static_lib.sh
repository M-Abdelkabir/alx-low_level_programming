#!/bin/bash

# Compile all .c files to object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library
ar -rc libmy.a *.o

# Index the library
ranlib libmy.a

# Verify the contents
ar -t libmy.a
nm libmy.a
