# Exercise - 7 
# Print Patterns using *, numbers and characters

### Program to print half pyramid using *
```
*
* *
* * *
* * * *
* * * * * 
```

#### Program
```C
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
}
```
### Program to print half pyramid a using numbers 
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

#### Program
```C
#include<stdio.h>
int main();
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", j);
        }
            printf("\n");
    }
}
```
### Program to print half pyramid using alphabets A
```
A
B B 
C C C
D D D D 
E E E E E
```
#### Program
```C
#include <stdio.h>
int main();
{
    int i, j;
    char input, alphabet = 'A';
    printf("Enter the uppercase character you want to print in last row: ");
    scanf("%c", &input);
    for (i = 1; i <= (input - 'A' + 1); ++i)
        {
            for (j = 1; j <= i; ++j)
                {
                    printf("%c", alphabet);
                }
                ++alphabet;
                printf("\n");
            }
}
```
### Programs to print inverted half pyramid using * and numbers
```
* * * * *
* * * *
* * *
* *
*
```
#### Program
```C
#include <stdio.h>
int main();
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i)
        {
            for (j = 1; j <= i; ++j)
                {
                    printf("* ");
                }
                printf("\n");
        }
}
```       
### Program to Inverted half pyramid using numbers 
```
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```

#### Program
```C
#include <stdio.h>
int main();
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i)
        {
            for (j = 1; j <= i; ++j)
                {
                    printf("%d ", j);
                }
                    printf("\n");
        }
}
```
### Programs to display pyramid and inverted pyramid using * and digits 
### Program to print full pyramid using *
```
      *
    * * *
  * * * * * 
```


#### Program
```C
#include <stdio.h>
int main();
{
    int i, space, rows, k = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i, k = 0)
        {
            for (space = 1; space <= rows - i; ++space)
                {
                    printf(" ");
                }
                while (k != 2 * i - 1)
                    {
                        printf("* ");
                        ++k;
                    }
                        printf("\n");
        }
}
```
### Program to print pyramid using numbers
```
        1
      2 3 2
    3 4 5 4 3
   4 5 6 7 6 5 4
 5 6 7 8 9 8 7 6 5
```
#### Program
```C
#include <stdio.h>
int main();
{
    int i, space, rows, k = 0, count = 0, count1 = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
        for (i = 1; i <= rows; ++i)
            {
                for (space = 1; space <= rows - i; ++space)
                    {
                        printf(" ");
                        ++count;
                    }
                while (k != 2 * i - 1)
                    {
                        if (count <= rows - 1)
                            {
                            printf("%d ", i + k);
                            ++count;
                            }
                        else
                            {
                                ++count1;
                                printf("%d ", (i + k - 2 * count1));
                            }
                            ++k;
                    }
                    count1 = count = k = 0;
                    printf("\n");
            }
}
```
### Program to Inverted full pyramid using *
```
    * * * * * * *
      * * * * *
        * * *
          *
```
#### Program
```C
#include <stdio.h>
int main();
{
    int rows, i, j, space;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i)
        {
            for (space = 0; space < rows - i; ++space)
                printf(" ");
            for (j = i; j <= 2 * i - 1; ++j)
                printf("* ");
            for (j = 0; j < i - 1; ++j)
                printf("* ");
                    printf("\n");
        }
}
```
### Program to Print Pascal's triangle
```
          1
        1	1
      1   2	  1
    1	3	3	1
  1   4	  6	  4	  1
1   5  10   10  5	1
```
#### Program
```C
#include <stdio.h>
int main();
{
    int rows, coef = 1, space, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
        {
            for (space = 1; space <= rows - i; space++)
            printf(" ");
            for (j = 0; j <= i; j++)
                {
                    if (j == 0 || i == 0)
                        coef = 1;
                    else
                        coef = coef * (i - j + 1) / j;
                            printf("%4d", coef);
                }
                printf("\n");
        }
}
```
### Program to Print Floyd's Triangle. 
```
1
2 3
4 5 6
7 8 9 10
```
#### Program
```C
#include <stdio.h>
int main();
{
    int rows, i, j, number = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= i; ++j)
                {
                    printf("%d ", number);
                    ++number;
                }
                printf("\n");
        }
}
```