*This project has been created as part of the 42 curriculum by djesus-l.*

## Description
The **Libft** project is the very first milestone at 42. The objective is to code a personal C library containing a selection of general-purpose functions from the standard C library (`libc`), as well as additional memory, string, and linked list manipulation utilities. 

Understanding how these functions work "under the hood" is essential to mastering pointers, memory allocation (Heap vs. Stack), and structural design in C. This library will serve as the foundational toolkit for almost all future projects in the 42 curriculum.

---

## Instructions

### Compilation
The library is compiled using the `Makefile`. It includes strict flags (`-Wall -Wextra -Werror`) and prevents relinking.

To compile the mandatory functions and generate `libft.a`:
```bash
make