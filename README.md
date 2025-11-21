# Low level programming en C

Repositorio de proyectos de programación de bajo nivel en C.  
Aquí se reúnen las prácticas del ciclo de C donde se trabaja desde los conceptos más básicos hasta temas más avanzados como memoria dinámica, listas enlazadas y manejo de archivos.

El objetivo general del repositorio es:

- Entender cómo se compila y ejecuta un programa escrito en C  
- Practicar el uso de variables, control de flujo y funciones  
- Profundizar en punteros, arreglos, strings y estructuras de datos básicas  
- Aprender a gestionar memoria dinámica con `malloc`, `free` y funciones relacionadas  
- Trabajar con librerías estáticas y archivos de cabecera  
- Implementar y recorrer listas enlazadas simples y dobles  
- Practicar lectura y escritura de archivos a bajo nivel

---

## Estructura del repositorio

Cada carpeta contiene un proyecto independiente con su propio `README.md`, archivos de código y scripts de compilación.

Algunas de las carpetas principales son:

- `0x00-hello_world`  
  Introducción a C, primer compilador, preprocesador y uso básico de `printf`, `puts` y `putchar`.

- `0x01-variables_if_else_while`  
  Uso de variables, operadores, condicionales `if` y bucles `while`.

- `0x02-functions_nested_loops`  
  Definición de funciones, prototipos y bucles anidados.

- `0x03-debugging`  
  Conceptos de depuración, lectura de mensajes de error y corrección de código.

- `0x04-more_functions_nested_loops`  
  Funciones adicionales y más práctica con bucles.

- `0x05-pointers_arrays_strings`  
  Introducción a punteros, arreglos y manejo básico de cadenas.

- `0x06-pointers_arrays_strings`  
  Profundización en operaciones con punteros y cadenas.

- `0x07-pointers_arrays_strings`  
  Más ejercicios con punteros, arreglos y manipulación de strings.

- `0x08-recursion`  
  Concepto de recursión y resolución de problemas usando funciones recursivas.

- `0x09-static_libraries`  
  Creación y uso de librerías estáticas (`.a`) y archivos de cabecera.

- `0x0A-argc_argv`  
  Manejo de argumentos de la línea de comandos con `argc` y `argv`.

- `0x0B-malloc_free`  
  Memoria dinámica y gestión de recursos con `malloc` y `free`.

- `0x0C-more_malloc_free`  
  Ejercicios adicionales con asignación dinámica de memoria.

- `0x0D-preprocessor`  
  Macros, directivas del preprocesador y archivos de cabecera.

- `0x0E-structures_typedef`  
  Definición y uso de `struct` y `typedef`.

- `0x0F-function_pointers`  
  Punteros a función y sus aplicaciones.

- `0x10-variadic_functions`  
  Funciones con número variable de argumentos usando `stdarg.h`.

- `0x12-singly_linked_lists`  
  Implementación y recorrido de listas enlazadas simples.

- `0x13-more_singly_linked_lists`  
  Operaciones avanzadas sobre listas enlazadas simples.

- `0x17-doubly_linked_lists`  
  Listas doblemente enlazadas y sus operaciones básicas.

- `0x18-dynamic_libraries`  
  Creación y uso de librerías dinámicas (`.so`).

> Para detalles específicos, revisar el `README.md` de cada carpeta.

---

## Requisitos

- Sistema operativo tipo Linux, por ejemplo Ubuntu 20.04  
- Compilador `gcc` con las siguientes banderas recomendadas:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <archivo>.c -o <ejecutable>
