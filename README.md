# Libft - 42 C Library

Libft is a project focused on creating a personal C library, reimplementing standard C library functions and adding additional utility functions. This library will be used in many other 42 projects, making it a fundamental building block of the curriculum.

## 🔨 Functions

### Part 1 - Libc Functions
Functions from `<ctype.h>`:
- [`ft_islower`](src/ft_islower.c) - checks for an alphabetic lowercase character
- [`ft_isupper`](src/ft_isupper.c) - checks for an alphabetic uppercase character
- [`ft_isalpha`](src/ft_isalpha.c) - checks for an alphabetic character
- [`ft_isdigit`](src/ft_isdigit.c) - checks for a digit (0 through 9)
- [`ft_isalnum`](src/ft_isalnum.c) - checks for an alphanumeric character
- [`ft_isascii`](src/ft_isascii.c) - checks whether c fits into the ASCII character set
- [`ft_isprint`](src/ft_isprint.c) - checks for any printable character
- [`ft_isspace`](src/ft_isspace.c) - checks for a whitespace character
- [`ft_toupper`](src/ft_toupper.c) - convert char to uppercase
- [`ft_tolower`](src/ft_tolower.c) - convert char to lowercase

Functions from `<string.h>`:
- [`ft_strlen`](src/ft_strlen.c) - calculate the length of a string
- [`ft_memset`](src/ft_memset.c) - fill memory with a constant byte
- [`ft_bzero`](src/ft_bzero.c) - zero a byte string
- [`ft_memcpy`](src/ft_memcpy.c) - copy memory area
- [`ft_memmove`](src/ft_memmove.c) - copy memory area with overlap handling
- [`ft_strlcpy`](src/ft_strlcpy.c) - size-bounded string copying
- [`ft_strlcat`](src/ft_strlcat.c) - size-bounded string concatenation
- [`ft_strchr`](src/ft_strchr.c) - locate character in string
- [`ft_strrchr`](src/ft_strrchr.c) - locate character in string from the end
- [`ft_strncmp`](src/ft_strncmp.c) - compare two strings
- [`ft_memchr`](src/ft_memchr.c) - scan memory for a character
- [`ft_memcmp`](src/ft_memcmp.c) - compare memory areas
- [`ft_strnstr`](src/ft_strnstr.c) - locate a substring in a string
- [`ft_atoi`](src/ft_atoi.c) - convert a string to an integer

Functions from `<stdlib.h>`:
- [`ft_calloc`](src/ft_calloc.c) - allocate and zero-initialize array
- [`ft_strdup`](src/ft_strdup.c) - create a duplicate of a string

### Part 2 - Additional Functions
- [`ft_substr`](src/ft_substr.c) - extract substring from string
- [`ft_strjoin`](src/ft_strjoin.c) - concatenate two strings
- [`ft_strtrim`](src/ft_strtrim.c) - trim beginning and end of string
- [`ft_split`](src/ft_split.c) - split string into array of strings
- [`ft_itoa`](src/ft_itoa.c) - convert integer to string
- [`ft_uitoa_base`](src/ft_uitoa_base.c) - convert unsigned int to string on a certain base
- [`ft_ultoa_base`](src/ft_ultoa_base.c) - convert unsigned lng to string on a certain base
- [`ft_strmapi`](src/ft_strmapi.c) - create new string from modifying string with function
- [`ft_striteri`](src/ft_striteri.c) - modify string with function
- [`ft_putchar_fd`](src/ft_putchar_fd.c) - output a char to a file descriptor
- [`ft_putstr_fd`](src/ft_putstr_fd.c) - output a string to a file descriptor
- [`ft_putendl_fd`](src/ft_putendl_fd.c) - output a string to a file descriptor, with newline
- [`ft_putnbr_fd`](src/ft_putnbr_fd.c) - output a number to a file descriptor
- [`ft_numlen`](ft_numlen.c) - calculate the number of digits of an unsigned long on a certain base

### Bonus Part
Linked List Functions:
- [`ft_lstnew`](src/ft_lstnew.c) - create new list element
- [`ft_lstadd_front`](src/ft_lstadd_front.c) - add element to beginning of list
- [`ft_lstsize`](src/ft_lstsize.c) - count elements in a list
- [`ft_lstlast`](src/ft_lstlast.c) - find last element in list
- [`ft_lstadd_back`](src/ft_lstadd_back.c) - add element to end of list
- [`ft_lstdelone`](src/ft_lstdelone.c) - delete element from list
- [`ft_lstclear`](src/ft_lstclear.c) - delete sequence of elements of list
- [`ft_lstiter`](src/ft_lstiter.c) - apply function to content of all list's elements
- [`ft_lstmap`](src/ft_lstmap.c) - apply function to content of all list's elements into new list


### Ft_printf
This function is done in another project and included in my custom c library.
- `ft_printf` - 

### Get_next_line
This function is done in another project and included in my custom c library.
- `get_next_line` - 

## 🛠️ Usage

### Requirements
- GCC compiler
- Make
- C Language

### Installation
1. Clone the repository:
```bash
git clone https://github.com/maynealis/42libft.git
```

2. Compile the library:
```bash
make
```
and for the lists functions: 
```bash
make bonus
```

3. To use in your project, include the header:
```c
#include "libft.h"
```

4. Compile with the library:
```bash
gcc your_file.c -L. -lft
```

## 🎯 Key Learning Outcomes

1. **Memory Management**
   - Understanding manual memory allocation
   - Learning about memory leaks
   - Buffer overflow prevention

2. **String Manipulation**
   - Various string operations
   - Buffer handling
   - String parsing techniques

3. **Data Structures**
   - Implementation of linked lists
   - Structure manipulation
   - Memory organization

4. **Function Pointers**
   - Understanding callback mechanisms
   - Function pointer usage
   - Advanced C concepts

5. **Makefile Creation**
   - Compilation process
   - Library creation
   - Dependency management


## 📈 Project Status

✅ Completed
⭐ Final Score: 125/100


## 🙋‍♂️ Author

Alis Mayne

Project done as part of the 42 cursus.


## References

* [Memmove](https://marmota.medium.com/c-language-making-memmove-def8792bb8d5)
* [Static library](https://makori-mildred.medium.com/how-to-create-static-library-in-c-and-how-to-use-it-b8b3e1fde999)
* [Static library videos](https://www.youtube.com/watch?v=MMecMkU-B94)
