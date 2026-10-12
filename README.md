*This project has been created as part of the 42 curriculum by zabdulja.*

# Libft — Your Very First Own Library

## Description

**Libft** is a custom C library that re-implements a set of standard C library functions, along with additional utility functions and a linked list API. It serves as a foundational toolbox for all future 42 projects.

The library is divided into three parts:

1. **Libc functions** — Re-implementations of standard functions like `strlen`, `memcpy`, `atoi`, `strdup`, etc.
2. **Additional functions** — Utility functions not found in the standard libc, such as `ft_split`, `ft_itoa`, `ft_substr`, and output functions (`ft_putstr_fd`, etc.).
3. **Linked list functions** — A complete linked list API using the `t_list` structure, including creation, insertion, deletion, iteration, and mapping.

---

## Detailed Description

### Part 1 — Libc Re-implementations

#### Character Classification & Conversion

| Function | Prototype | Description |
|---|---|---|
| **ft_isalpha** | `int ft_isalpha(int c)` | Checks whether `c` is an alphabetic letter (a–z or A–Z). Returns non-zero if true, `0` otherwise. |
| **ft_isdigit** | `int ft_isdigit(int c)` | Checks whether `c` is a decimal digit (0–9). Returns non-zero if true, `0` otherwise. |
| **ft_isalnum** | `int ft_isalnum(int c)` | Checks whether `c` is alphanumeric (letter or digit). Combines the logic of `ft_isalpha` and `ft_isdigit`. Returns non-zero if true, `0` otherwise. |
| **ft_isascii** | `int ft_isascii(int c)` | Checks whether `c` falls within the ASCII character set (0–127). Returns non-zero if true, `0` otherwise. |
| **ft_isprint** | `int ft_isprint(int c)` | Checks whether `c` is a printable character, including space (32–126). Returns non-zero if true, `0` otherwise. |
| **ft_toupper** | `int ft_toupper(int c)` | Converts a lowercase letter to its uppercase equivalent. If `c` is not a lowercase letter, it is returned unchanged. |
| **ft_tolower** | `int ft_tolower(int c)` | Converts an uppercase letter to its lowercase equivalent. If `c` is not an uppercase letter, it is returned unchanged. |

#### String Functions

| Function | Prototype | Description |
|---|---|---|
| **ft_strlen** | `size_t ft_strlen(const char *s)` | Calculates the length of the string `s`, excluding the terminating null byte (`'\0'`). Returns the number of characters. |
| **ft_strlcpy** | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copies up to `size - 1` characters from `src` to `dst`, null-terminating the result (as long as `size > 0`). Returns the total length of `src`, allowing truncation detection. |
| **ft_strlcat** | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Appends `src` to the end of `dst`, writing at most `size - strlen(dst) - 1` characters and null-terminating. Returns the total length of the string it tried to create, enabling truncation detection. |
| **ft_strchr** | `char *ft_strchr(const char *s, int c)` | Locates the **first** occurrence of `c` (cast to `char`) in string `s`. Returns a pointer to the matched character, or `NULL` if not found. The terminating `'\0'` is considered part of the string. |
| **ft_strrchr** | `char *ft_strrchr(const char *s, int c)` | Locates the **last** occurrence of `c` (cast to `char`) in string `s`. Returns a pointer to the matched character, or `NULL` if not found. |
| **ft_strncmp** | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares at most `n` characters of `s1` and `s2`. Returns `0` if they are equal, a negative value if `s1 < s2`, or a positive value if `s1 > s2` (compared as `unsigned char`). |
| **ft_strnstr** | `char *ft_strnstr(const char *big, const char *little, size_t len)` | Locates the first occurrence of the string `little` within `big`, searching no more than `len` characters. Returns a pointer to the start of the match, or `NULL` if not found. If `little` is empty, `big` is returned. |
| **ft_strdup** | `char *ft_strdup(const char *s)` | Allocates memory with `malloc` and returns a duplicate of the string `s`. The caller is responsible for freeing the returned pointer. Returns `NULL` on allocation failure. |
| **ft_atoi** | `int ft_atoi(const char *nptr)` | Converts the initial portion of the string `nptr` to an `int`. Skips leading whitespace, handles an optional `+` or `-` sign, then parses consecutive digits. Returns the converted integer value. |

#### Memory Functions

| Function | Prototype | Description |
|---|---|---|
| **ft_memset** | `void *ft_memset(void *s, int c, size_t n)` | Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c` (cast to `unsigned char`). Returns a pointer to `s`. |
| **ft_bzero** | `void ft_bzero(void *s, size_t n)` | Sets the first `n` bytes of the memory area pointed to by `s` to zero. Equivalent to `ft_memset(s, 0, n)`. |
| **ft_memcpy** | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copies `n` bytes from `src` to `dst`. The memory areas **must not overlap**; use `ft_memmove` for overlapping regions. Returns `dst`. |
| **ft_memmove** | `void *ft_memmove(void *dst, const void *src, size_t n)` | Copies `n` bytes from `src` to `dst`. Unlike `ft_memcpy`, the memory areas **may overlap** — the copy is performed by copying backwards when needed. Returns `dst`. |
| **ft_memchr** | `void *ft_memchr(const void *s, int c, size_t n)` | Scans the first `n` bytes of the memory area `s` for the first occurrence of `c` (cast to `unsigned char`). Returns a pointer to the matching byte, or `NULL` if not found. |
| **ft_memcmp** | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of memory areas `s1` and `s2`. Returns `0` if they are identical, or the difference between the first pair of differing bytes (as `unsigned char`). |
| **ft_calloc** | `void *ft_calloc(size_t nmemb, size_t size)` | Allocates memory for an array of `nmemb` elements of `size` bytes each, and **initializes all bytes to zero**. Returns a pointer to the allocated memory, or `NULL` on failure. Checks for integer overflow of `nmemb * size`. |

---

### Part 2 — Additional Functions

| Function | Prototype | Description |
|---|---|---|
| **ft_substr** | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Allocates and returns a substring from string `s`, beginning at index `start` and of maximum length `len`. Returns `NULL` on allocation failure. If `start` is beyond the end of `s`, an empty string is returned. |
| **ft_strjoin** | `char *ft_strjoin(char const *s1, char const *s2)` | Allocates and returns a new string formed by concatenating `s1` and `s2`. Returns `NULL` on allocation failure. |
| **ft_strtrim** | `char *ft_strtrim(char const *s1, char const *set)` | Allocates and returns a copy of `s1` with all characters from `set` removed from the **beginning and end** of the string. Characters in the middle are not affected. Returns `NULL` on allocation failure. |
| **ft_split** | `char **ft_split(char const *s, char c)` | Splits string `s` into an array of substrings using the character `c` as a delimiter. The resulting array is null-terminated. Each substring and the array itself are heap-allocated. Returns `NULL` on allocation failure. |
| **ft_itoa** | `char *ft_itoa(int n)` | Allocates and returns a string representing the integer `n`. Handles negative numbers (including `INT_MIN`). Returns `NULL` on allocation failure. |
| **ft_strmapi** | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies the function `f` to each character of string `s`, passing the character's index as the first argument, to create a new string. The result is heap-allocated. Returns `NULL` on allocation failure. |
| **ft_striteri** | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applies the function `f` to each character of string `s`, passing the character's index and a pointer to the character itself. This modifies the string **in place** (no new allocation). |
| **ft_putchar_fd** | `void ft_putchar_fd(char c, int fd)` | Writes the character `c` to the given file descriptor `fd`. |
| **ft_putstr_fd** | `void ft_putstr_fd(char *s, int fd)` | Writes the string `s` to the given file descriptor `fd`. |
| **ft_putendl_fd** | `void ft_putendl_fd(char *s, int fd)` | Writes the string `s` to the given file descriptor `fd`, followed by a newline character (`'\n'`). |
| **ft_putnbr_fd** | `void ft_putnbr_fd(int n, int fd)` | Writes the integer `n` to the given file descriptor `fd`. Handles negative numbers and `INT_MIN` by printing each digit as a character. |

---

### Part 3 — Linked List Functions

The linked list API uses the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Prototype | Description |
|---|---|---|
| **ft_lstnew** | `t_list *ft_lstnew(void *content)` | Allocates and returns a new node. The `content` field is initialized with the given `content` parameter; `next` is set to `NULL`. Returns `NULL` on allocation failure. |
| **ft_lstadd_front** | `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds the node `new` at the **beginning** of the list pointed to by `lst`. Updates `*lst` to point to the new head. |
| **ft_lstsize** | `unsigned int ft_lstsize(t_list *lst)` | Counts and returns the number of nodes in the list `lst` by traversing it from head to tail. |
| **ft_lstlast** | `t_list *ft_lstlast(t_list *lst)` | Returns a pointer to the **last node** of the list `lst`. Returns `NULL` if the list is empty. |
| **ft_lstadd_back** | `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds the node `new` at the **end** of the list. If the list is empty, `new` becomes the first node. |
| **ft_lstdelone** | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees the memory of a single node's `content` using the function `del`, then frees the node itself. Does **not** free `next`. |
| **ft_lstclear** | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes and frees every node in the list starting from `*lst`, using `del` to free each node's content. Sets `*lst` to `NULL` when done. |
| **ft_lstiter** | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Iterates over the list `lst` and applies the function `f` to the `content` of each node. |
| **ft_lstmap** | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Iterates over `lst`, applies `f` to each node's content, and builds a **new list** from the results. If any allocation fails, the entire new list is freed using `del`, and `NULL` is returned. |

---

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
- [Makefile Tutorial ](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)

### AI Usage

I used AI tools solely to help me understand how specific functions work and to explore edge cases. However, I wrote every line of code myself and fully understand the logic behind it. AI also assisted me in writing this README file, including the detailed function reference documentation.
