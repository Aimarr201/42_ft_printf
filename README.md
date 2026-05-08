*Este proyecto ha sido creado como parte del currículo de 42 por amendibi.*

# 42_ft_printf

Implementación de una versión personalizada de `printf` en C, como biblioteca estática (`libftprintf.a`).

## ¿Qué incluye?

- Función principal: `ft_printf`
- Soporte para conversiones:
  - `%c`
  - `%s`
  - `%p`
  - `%d` / `%i`
  - `%u`
  - `%x` / `%X`
  - `%%`

## Cómo compilar

Desde la raíz del repositorio:

```bash
make
```

Esto genera la biblioteca:

- `libftprintf.a`

## Cómo usarlo

Incluye el header y enlaza la librería en tu proyecto:

```c
#include "ft_printf.h"
```

Ejemplo de compilación:

```bash
cc main.c libftprintf.a -I. -o test_printf
```

## Comandos útiles

- `make`: compila la librería
- `make clean`: elimina objetos
- `make fclean`: elimina objetos y librería
- `make re`: recompila desde cero

## Más información

- Proyecto `ft_printf` de 42: https://42.fr/
- Formato oficial de `printf` en C (referencia): https://man7.org/linux/man-pages/man3/printf.3.html
