*This project has been created as part of the 42 curriculum by imlamaiz.*

# Libft

## Description

Libft is my first C library, built as `libft.a` and reusable in my future 42 projects. It contains:

1. **Libc functions**: re-implementations prefixed with `ft_`.
2. **Additional functions**: string and output helpers.
3. **Linked list functions**: tools to manipulate a singly linked list.

### Function list

**Part 1 - Libc**

| Category | Functions |
| --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

**Part 2 - Additional functions**

| Function | Description |
| --- | --- |
| `ft_substr` | Returns a substring of a string. |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Removes a set of characters from both ends of a string. |
| `ft_split` | Splits a string into a NULL-terminated array using a delimiter. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character and returns a new string. |
| `ft_striteri` | Applies a function to each character of a string, in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

**Part 3 - Linked lists**

| Function | Description |
| --- | --- |
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Frees one node and its content. |
| `ft_lstclear` | Frees a node and all its successors, then sets the list to NULL. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |


## Instructions

### Compilation

The library is built with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything from scratch
```

### Usage

Include the header in your code:

```c
#include "libft.h"
```


### Notes

- Helper functions are declared `static`.
- The library is created with `ar`.

## Resources

### References

- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- Linux man pages: `man 3 strlen`, `man 3 memcpy`, `man 3 malloc`, `man 2 write`, etc.
- [cppreference - C standard library](https://en.cppreference.com/w/c)
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [42 Norm](https://github.com/42School/norminette)

### Use of AI

AI was used to help me understand concepts such as Makefiles, and to customize this README.