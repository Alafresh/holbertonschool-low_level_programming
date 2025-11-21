# 0x0D. C - Preprocessor

# **Resources**

- [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/UlmUG7PSamY2_qL6xze6wg)
- [Object-like Macros](https://intranet.hbtn.io/rltoken/KAqnlwAvPZ84KI2JFlJpSg)
- [Macro Arguments](https://intranet.hbtn.io/rltoken/cJyU0mmGRx_Wd9x8WwygOQ)
- [Pre Processor Directives in C](https://intranet.hbtn.io/rltoken/A5176irunoejPUjwT3pFCQ)
- [The C Preprocessor](https://intranet.hbtn.io/rltoken/lgohqkU5DlzUBkO2MeMmHA)
- [Standard Predefined Macros](https://intranet.hbtn.io/rltoken/C47iIZ3tGug6sklTB7hT_Q)
- [include guard](https://intranet.hbtn.io/rltoken/sqLUMtBCgAAXVdhIaVoaWQ)
- [Common Predefined Macros](https://intranet.hbtn.io/rltoken/fJJUPJ-zZXlh3db00FEsJw)

# **Learning Objectives**

- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

# **Tasks**

### **0. Object-like Macro**

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a
1122
julien@ubuntu:~/0x0c. macro, structures$

```

**Repo:**

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `0-object_like_macro.h`

### **1. Pi**

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$

```

**Repo:**

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `1-pi.h`

### **2. File name**

Write a program that prints the name of the file it was compiled from, followed by a new line.

- You are allowed to use the standard library

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$

```

**Repo:**

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `2-main.c`

### **3. Function-like macro**

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d
980, 980
julien@ubuntu:~/0x0c. macro, structures$

```

**Repo:**

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `3-function_like_macro.h`

### **4. SUM**

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e
1122
julien@ubuntu:~/0x0c. macro, structures$

```

**Repo:**

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `4-sum.h`
