# Libft - 42 C Library

Libft is a project focused on creating a personal C library, reimplementing standard C library functions and adding additional utility functions. This library will be used in many other 42 projects, making it a fundamental building block of the curriculum.

## 🔨 Functions

### Part 1 - Libc Functions
Functions from `<ctype.h>`:
- [`ft_islower`](ft_islower.c) - checks for an alphabetic lowercase character
- `ft_isupper` - checks for un alphabetic uppercase character
- `ft_isalpha` - checks for an alphabetic character
- `ft_isdigit` - checks for a digit (0 through 9)
- `ft_isalnum` - checks for an alphanumeric character
- `ft_isascii` - checks whether c fits into the ASCII character set
- `ft_isprint` - checks for any printable character
- `ft_toupper` - convert char to uppercase
- `ft_tolower` - convert char to lowercase

Functions from `<string.h>`:
- `ft_strlen` - calculate the length of a string
- `ft_memset` - fill memory with a constant byte
- `ft_bzero` - zero a byte string
- `ft_memcpy` - copy memory area
- `ft_memmove` - copy memory area with overlap handling
- `ft_strlcpy` - size-bounded string copying
- `ft_strlcat` - size-bounded string concatenation
- `ft_strchr` - locate character in string
- `ft_strrchr` - locate character in string from the end
- `ft_strncmp` - compare two strings
- `ft_memchr` - scan memory for a character
- `ft_memcmp` - compare memory areas
- `ft_strnstr` - locate a substring in a string
- `ft_atoi` - convert a string to an integer

Functions from `<stdlib.h>`:
- `ft_calloc` - allocate and zero-initialize array
- `ft_strdup` - create a duplicate of a string

### Part 2 - Additional Functions
- `ft_substr` - extract substring from string
- `ft_strjoin` - concatenate two strings
- `ft_strtrim` - trim beginning and end of string
- `ft_split` - split string into array of strings
- `ft_itoa` - convert integer to string
- `ft_uitoa_base` - convert unsigned int to string on a certain base
- `ft_ultoa_base` - convert unsigned lng to string on a certain base
- `ft_strmapi` - create new string from modifying string with function
- `ft_striteri` - modify string with function
- `ft_putchar_fd` - output a char to a file descriptor
- `ft_putstr_fd` - output a string to a file descriptor
- `ft_putendl_fd` - output a string to a file descriptor, with newline
- `ft_putnbr_fd` - output a number to a file descriptor

### Bonus Part
Linked List Functions:
- `ft_lstnew` - create new list element
- `ft_lstadd_front` - add element to beginning of list
- `ft_lstsize` - count elements in a list
- `ft_lstlast` - find last element in list
- `ft_lstadd_back` - add element to end of list
- `ft_lstdelone` - delete element from list
- `ft_lstclear` - delete sequence of elements of list
- `ft_lstiter` - apply function to content of all list's elements
- `ft_lstmap` - apply function to content of all list's elements into new list

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
