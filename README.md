*This project has been created as part of the 42 curriculum by mbendaou.*

# ft_printf

## Description

The **ft_printf** project is part of the 42 curriculum. Its goal is to recreate the behavior of the original C library function `printf()`.

Through this project, I learned how variadic functions work in C and how to handle a variable number of arguments using `va_list`, `va_start`, `va_arg`, and `va_end`.

The project focuses on parsing format strings, identifying conversion specifiers, and printing different types of data while keeping track of the number of characters printed.

### Supported Conversions

| Specifier | Description |
|---|---|
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal format. |
| `%d` | Prints a decimal number. |
| `%i` | Prints an integer in base 10. |
| `%u` | Prints an unsigned decimal number. |
| `%x` | Prints a hexadecimal number in lowercase. |
| `%X` | Prints a hexadecimal number in uppercase. |
| `%%` | Prints a percent sign. |

## Instructions

### Compilation

To compile the library, clone the repository and run:

```bash
make
```

This generates the static library:

```bash
libftprintf.a
```

### Available Makefile Rules

| Rule | Description |
|---|---|
| `make` | Compiles the library. |
| `make all` | Compiles the library. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and the library. |
| `make re` | Rebuilds the library from scratch. |

### Usage

Include `ft_printf.h` in your C source file and compile your program with the library.

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "42");
    ft_printf("Number: %d\n", 1337);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

Compile:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o program
```

Run:

```bash
./program
```

## Algorithm and Technical Choices

### 1. Format String Parsing

The function processes the format string character by character.

- If the current character is not `%`, it prints the character directly.
- If it encounters `%`, it reads the next character to identify the conversion specifier.
- It then calls the appropriate function to handle that conversion.

### 2. Variadic Functions

The project uses the `stdarg.h` library to handle a variable number of arguments.

The following macros are used:

- `va_list`: Stores information needed to access the additional arguments.
- `va_start`: Initializes the argument list.
- `va_arg`: Retrieves the next argument with its expected type.
- `va_end`: Cleans up the argument list.

### 3. Conversion Handling

Each conversion is handled according to its expected data type.

For example:

- Characters and strings are printed using character and string handling functions.
- Decimal numbers are converted into their printable representation.
- Hexadecimal numbers are generated using base 16.
- Pointer addresses are represented in hexadecimal format.

### 4. Algorithm and Data Structure

The main algorithm is a sequential parser that traverses the format string from beginning to end.

The implementation uses a `va_list` to access the variable arguments and helper functions to separate the different conversion operations.

This approach keeps the code modular, easier to understand, and easier to maintain.

## Resources

The following resources were useful during the development of this project:

- [variadic function in c](https://www.geeksforgeeks.org/c/variadic-functions-in-c/).
- [video in youtube](https://youtu.be/oDC208zvsdg?si=qV_xeOVWzsb6aBjL).
- [C Programming Reference](https://en.cppreference.com/w/c).
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/).

### AI Usage

AI tools were used as learning support during this project.

They helped with:

- Understanding variadic functions and argument handling.
- Clarifying C concepts and pointer operations.
- Analyzing compilation errors and debugging issues.
- Reviewing implementation approaches and code organization.
- Improving technical explanations and documentation.

The main focus was on understanding the concepts, developing problem-solving skills, and being able to explain and defend the implementation independently.

## Author

**mbendaou**

1337 Student
