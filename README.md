*This project has been created as part of the 42 curriculum by zabdulja.*

# Libft — Your Very First Own Library

## Description

**Libft** is a custom C library that re-implements a set of standard C library functions, along with additional utility functions and a linked list API. It serves as a foundational toolbox for all future 42 projects.

The library is divided into three parts:

1. **Libc functions** — Re-implementations of standard functions like `strlen`, `memcpy`, `atoi`, `strdup`, etc.
2. **Additional functions** — Utility functions not found in the standard libc, such as `ft_split`, `ft_itoa`, `ft_substr`, and output functions (`ft_putstr_fd`, etc.).
3. **Linked list functions** — A complete linked list API using the `t_list` structure, including creation, insertion, deletion, iteration, and mapping.

## Instructions

### Compilation

```bash
make        # Compiles all source files into libft.a
make clean  # Removes object files (.o)
make fclean # Removes object files and libft.a
make re     # Full recompilation
```

The library compiles with:
```
cc -Wall -Wextra -Werror
```

### Usage

To use libft in another project:

1. Copy the `libft/` folder into your project
2. Include the header: `#include "libft.h"`
3. Compile your project with `libft.a`:
```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

### Function List

| Category | Functions |
|----------|-----------|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| String manipulation | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory manipulation | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi`, `ft_itoa`, `ft_toupper`, `ft_tolower` |
| String utilities | `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri` |
| Output | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| Linked list | `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

## Resources

- [C library reference (cppreference.com)](https://en.cppreference.com/w/c)
- [Linux man pages](https://man7.org/linux/man-pages/)
- [Understanding linked lists](https://www.learn-c.org/en/Linked_lists)

### AI Usage

<!-- Describe how AI was used in this project, for which tasks and which parts -->
AI was used as a learning aid to understand function behaviors and edge cases. All code was written with understanding of the underlying logic.
