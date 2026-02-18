*This project has been created as part of the 42 curriculum by mbiusing.*

# ft_printf

## DESCRIPTION

ft_printf is a recreation of the printf() function from libc, with the following requirements set...

### Requirements Set:
• Do not implement the buffer management of the original printf().  
• Your function has to handle the following conversions: cspdiuxX%.  
• Your function will be compared against the original printf().  
• You must use the command ar to create your library.  
• Using the libtool command is forbidden.  
• Your libftprintf.a has to be created at the root of your repository.  
• Your header file must be named ft_printf.h and must contain the prototype of your ft_printf() function.  

## ft_printf's format specifiers

| 			Specifier		 | 					Description					 |
| -------------------------- | --------------------------------------------- |
| 			```%c```		 | Prints a single character					 |
| 			```%s```		 | Prints a string								 |
| 			```%p```		 | Prints a pointer address in hexadecimal		 |
| 	```%d``` / ```%i```		 | Prints a signed decimal integer				 |
| 			```%u```		 | Prints an unsigned decimal integer			 |
| 			```%x```		 | Prints a lowercase hexadecimal integer		 |
|			 ```%X```		 | Prints an uppercase hexadecimal integer		 |

## INSTRUCTIONS

### Makefile Commands
• Type in `make` in the terminal : to create the object files and the objs library to create the static library, `ft_printf.a`.  
• Type in `make clean` in the terminal : to remove all the object files and the objs directory.  
• Type in `make fclean` in the terminal : which functions the same as `makeclean` but it also removes the `ft_printf.a`.  
• Type in `make re` in the terminal : to rebuilds `ft_printf.a`, by combining the usage of `make fclean` then `make`.  
• Type in `make test` then `FILE=[insertnameoffilewithoutthe.c` : to compile the file with the int main and its following flags to produce a `test.out` file.  
• Type in `make rmtest` : to remove the `test.out` file.  

### New Things I Learnt:
• The printf() function is a `variadic function`, which can take a variable number of arguments.  
• `cp` (added into the Makefile).  
• Adjusted my Makefile so that when I enter in `make`, it will create the object files into a `objs` directory. So that they aren't mixed with the source files and other files.  

• What is needed in a README.md file : (for this specific project)...  
1. The very first line must be italicized and read: This project has been created as part
of the 42 curriculum by mbiusing.
2. A “**Description**” section that clearly presents the project, including its goal and a
brief overview.
3. An “**Instructions**” section containing any relevant information about compilation,
installation, and/or execution.
4. A “**Resources**” section listing classic references related to the topic (documentation, articles, tutorials, etc.), as well as a description of how AI was used — specifying for which tasks and which parts of the project.
5. Additional sections may be required depending on the project (e.g., usage examples, feature list, technical choices, etc.).
6. A detailed explanation and justification of the chosen **algorithm** and **data structure** must also be included.

• `va_arg`, `va_end`, `va_start` macros.  
• Difference between `(nil)` and `(null)`.  

## RESOURCES

### Sites Referenced:
1. [ft_printf guide : Gitbook](https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)
2. [Variadic Functions : Geeks for Geeks](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)
3. [Makefile tutorial](https://makefiletutorial.com/)
4. [Static Library](https://en.wikipedia.org/wiki/Static_library)

### Use of AI:
• Chatgpt : find errors, explain complex concepts
