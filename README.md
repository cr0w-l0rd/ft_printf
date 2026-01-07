*This project has been created as part of the 42 curriculum by mbiusing.*

# ft_printf

## DESCRIPTION

We have to recreate the printf() function from libc.

### Requirements Set:
• Do not implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
• Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.
• Your header file must be named ft_printf.h and must contain the prototype of your ft_printf() function.

### New Things I Learnt:
• The printf() function is a variadic function, which can take a variable number of arguments.

## INSTRUCTIONS

### Makefile Commands
• Type in `make` in the terminal : to create the object files and the objs library to create the static library, `ft_printf.a`.
• Type in `make clean` in the terminal : to remove all the object files and the objs directory.
• Type in `make fclean` in the terminal : which functions the same as `makeclean` but it also removes the `ft_printf.a`.
• Type in `make re` in the terminal : to rebuilds `ft_printf.a`, by combining the usage of `make fclean` then `make`.
• Type in `make test` then `FILE=[insertnameoffilewithoutthe.c` : to compile the file with the int main and its following flags to produce a `test.out` file.
• Type in `make rmtest` : to remove the `test.out` file.

## RESOURCES

1. 
