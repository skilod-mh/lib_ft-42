*this project has been created as part of the 42 curriclum by mohoussa.*

# Libft - Your first C library

## Description 

**Libft** (Library of C functions) is the very first project in the 42 curriculum.the goal of this project is to re-code a set of standard C library functions.
By re-coding standard C library functions, we learn how they work internally. Along the way we practice dynamic memory allocation, working with file descriptors, and handling edge cases such as `NULL` pointers, empty strings, and `malloc` failures. All heap-allocated memory is freed properly to avoid leaks.

The project has three parts:

- **Part 1 - Libc functions:** reimplementations of standard functions, prefixed with `ft_`.
- **Part 2 - Additional functions:** string utilities and output functions that are not in the libc or exist in a different form.
- **Part 3 - Linked lists:** functions to create and manipulate linked lists. We use them because nodes can be added or removed without shifting other elements, unlike arrays, which makes them a flexible way to organize data.


## instructions 
Build the library with `cc -Wall -Wextra -Werror`, using `ar` to create the archive:

```bash
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # rebuilds everything
```

To use it in your own project, include the header and link the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```
# Library overview

### Part 1 - Libc functions
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`

### Part 2 - Additional functions
- `ft_substr`: returns a substring of a string.
- `ft_strjoin`: concatenates two strings into a new one.
- `ft_strtrim`: removes a set of characters from the start and end of a string.
- `ft_split`: splits a string into an array of strings using a delimiter.
- `ft_itoa`: converts an integer to a string.
- `ft_strmapi`, `ft_striteri`: apply a function to each character of a string.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: write to a file descriptor.

### Part 3 - Linked list
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`
## Resources
**References:**
- [cppreference](https://cppreference.com): C standard library documentation
- Linux `man` pages (`man 3 strlen`, `man 3 malloc`, etc.): behavior of the original libc functions
- [W3Schools](https://www.w3schools.com): C basics and syntax
- [freeCodeCamp](https://www.freecodecamp.org/): C programming and linked list tutorials
- YouTube : (hassan el bahi , low level ...)
### AI usage
- AI was used occasionally, only when a concept was too hard to understand on my own.
- It helped me visualise how linked lists and memory work under the hood (nodes, pointers, `t_list *` vs `t_list **`, heap vs stack, and memory ownership).
- AI was not used to write the code of the library functions.