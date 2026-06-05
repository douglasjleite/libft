# Libft

This project has been created as part of the 42 curriculum by **djesus-l**.

## Description

**Libft** is the first milestone project at 42. Its objective is to recreate a collection of standard C library functions while developing a deeper understanding of memory management, pointers, data structures, and low-level programming concepts.

The project consists of implementing commonly used functions from the C standard library (`libc`), along with additional utilities for string manipulation, memory handling, and linked list operations.

Building this library provides a solid foundation for future projects within the 42 curriculum, where these functions can be reused and expanded upon.

---

## Compilation

The library is compiled using the provided **Makefile** with the following flags:

```bash
-Wall -Wextra -Werror
```

### Mandatory Part

```bash
make
```

### Bonus Part (Linked Lists)

```bash
make bonus
```

### Clean Object Files

```bash
make clean
```

### Remove All Generated Files

```bash
make fclean
```

### Recompile Everything

```bash
make re
```

---

## Library Content

### Part 1 - Libc Functions

#### Character Classification

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`

#### String Manipulation

* `ft_strlen`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`

#### Memory Management

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

#### Conversions

* `ft_atoi`
* `ft_toupper`
* `ft_tolower`
* `ft_strdup`

---

### Part 2 - Additional Functions

* `ft_substr` — Extracts a substring from a string.
* `ft_strjoin` — Concatenates two strings into a newly allocated string.
* `ft_strtrim` — Removes specified characters from the beginning and end of a string.
* `ft_split` — Splits a string into an array of strings using a delimiter.
* `ft_itoa` — Converts an integer into its string representation.
* `ft_strmapi` — Applies a function to each character of a string and returns a new string.
* `ft_striteri` — Applies a function to each character of a string in place.
* `ft_putchar_fd` — Outputs a character to a file descriptor.
* `ft_putstr_fd` — Outputs a string to a file descriptor.
* `ft_putendl_fd` — Outputs a string followed by a newline to a file descriptor.
* `ft_putnbr_fd` — Outputs an integer to a file descriptor.

---

### Part 3 - Bonus Functions (Linked Lists)

The bonus section introduces the `t_list` structure and a set of linked list manipulation functions:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## Resources

### References

* Official 42 Subject
* Linux Man Pages
* C Programming Documentation

The man pages were used as the primary reference for expected function behavior and prototypes.

---

## AI Usage Disclosure

In accordance with 42's AI guidelines:

### Refactoring

AI assistance was used to review code readability and style, including:

* Removing unnecessary braces
* Improving code alignment
* Maintaining compliance with Norminette requirements

### Bug Analysis

AI was used to discuss and test edge cases, including:

* Integer overflow handling in `ft_atoi`
* Allocation overflow protection in `ft_calloc`
* Boundary conditions for string and memory functions

### Learning Support

AI was used as an educational resource to better understand concepts such as:

* Differences between `memcpy` and `memmove`
* Memory overlap behavior
* Heap versus Stack allocation
* Pointer manipulation techniques

### Compliance Statement

No implementation code was copied from AI-generated outputs.

All functions were designed, implemented, debugged, and validated by the author. AI was used solely as a learning and review tool to support understanding and improve code quality.

---

## 👤 Author

**Douglas Jesus Leite**
42 São Paulo | Software Development Student
