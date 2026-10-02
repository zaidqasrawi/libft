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
## Resources
- [Linux man pages](https://man7.org/linux/man-pages/)
- [Understanding Malloc in C](https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [Understanding linked lists](https://www.learn-c.org/en/Linked_lists)
- [Linked Lists in C](https://www.geeksforgeeks.org/c/linked-list-in-c/)
- [Makefile Tutorial ](://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)

### AI Usage

<!-- Describe how AI was used in this project, for which tasks and which parts -->
I used AI tools solely to help me understand how specific functions work and to explore edge cases. However, I wrote every line of code myself and fully understand the logic behind it.
