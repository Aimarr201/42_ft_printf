*Este proyecto ha sido creado como parte del currículo de 42 por amendibi.*

# 42_ft_printf

Implementación de una versión personalizada de `printf` en C, como biblioteca estática (`libftprintf.a`).

## Descripción

- Función principal: `ft_printf`
- Soporte para conversiones:
  - `%c`
  - `%s`
  - `%p`
  - `%d` / `%i`
  - `%u`
  - `%x` / `%X`
  - `%%`

## Instrucciones

### Cómo compilar

Desde la raíz del repositorio:

```bash
make
```

Esto genera una libreria estatica llamada:

- `libftprintf.a`

### Cómo usarlo

Incluye el header y enlaza la librería en tu proyecto:

```c
#include "ft_printf.h"
```

Ejemplo de compilación:

```bash
cc main.c -Wall -Wextra -Werror libftprintf.a
```

## Comandos útiles

- `make`: compila la librería
- `make clean`: elimina objetos
- `make fclean`: elimina objetos y librería
- `make re`: recompila desde cero

## Recursos
- man 3 printf
- man 3 va_list
