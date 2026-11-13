# ft_printf

A small reimplementation of C's `printf` function.

Supported conversions:

- `%c` character
- `%s` string
- `%p` pointer
- `%d` and `%i` signed decimal integer
- `%u` unsigned decimal integer
- `%x` and `%X` hexadecimal integer
- `%%` percent sign

## Build

```sh
make
```

This creates `libftprintf.a`.

## Usage

Include the header and link the library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s: %d\n", "world", 42);
    return (0);
}
```

```sh
cc main.c libftprintf.a -o example
```
