# ft_printf - Una implementación personalizada de printf

`ft_printf` es una recreación de la función estándar `printf` en C, desarrollada desde cero sin usar `printf`, `sprintf` o cualquier otra función similar. Esta implementación es parte del aprendizaje avanzado de C y sigue la **Norminette** para garantizar código limpio y estructurado.

## 📌 **Características**
✅ **Compatible con los especificadores esenciales**  
✅ **Manejo eficiente de buffers para mejorar rendimiento**  
✅ **Compatible con la librería Libft**  
✅ **100% en C sin funciones prohibidas**  

## ⚙️ **Especificadores soportados**
| Especificador | Descripción |
|--------------|------------|
| `%c` | Imprime un carácter |
| `%s` | Imprime una cadena de caracteres |
| `%p` | Imprime un puntero en hexadecimal |
| `%d` / `%i` | Imprime un número entero con signo |
| `%u` | Imprime un número entero sin signo |
| `%x` / `%X` | Imprime un número en hexadecimal (min/may) |
| `%%` | Imprime el carácter `%` |

## 🚀 **Instalación y Uso**
### 1️⃣ **Clonar el repositorio**  
```bash
git clone https://github.com/rpaparoni/ft_printf_rpaparoni.git
cd ft_printf
```
### 2️⃣ **Compilar la librería**  
```bash
make
```
Esto generará **libftprintf.a**, que puedes incluir en cualquier proyecto en C.  

### 3️⃣ **Uso en tu código**  
```c
#include "ft_printf.h"

int main()
{
    int num = 42;
    ft_printf("El número es: %d\n", num);
    return 0;
}
```

### 4️⃣ **Compilar con ft_printf**  
```bash
gcc main.c -L. -lftprintf -o programa
```

## 📝 **Licencia**  
Este proyecto es de código abierto y puede ser utilizado y modificado libremente.  
 
🐙 **GitHub:** [rpaparoni](https://github.com/rpaparoni)  

