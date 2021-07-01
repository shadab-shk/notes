# Exercise - 6 
# To Demonstrate preprocessor directives.

### 1.Define a macro EQUALSTR which compares two strings x and y and gives 1 if equal and 0 otherwise. Use this macro to accept two strings from the user and check if they are equal.
#### Program
```C
#include <stdio.h>
#include <string.h>
#define EQUALSTR(a, b) ((strcmp(a, b) == 0) ? 1 : 0)
int main()
{
    int r;
    char s1[20], s2[20];
    printf("\n Enter two strings : ");
    scanf("%s %s", &s1, &s2);
    r = EQUALSTR(s1, s2);
    if (r == 1)
    {
    }
    else
    {
    }

    printf("\n Both Strings Are Equal\n\n");

    printf("\n Both Strings are Not Equal \n\n");
}
```
### 2.Write a program in C that uses a macro SWAP to interchange the values of two variables. Use the same macro to sort an array of ten integers using bubble sort. 
#### Program
```C
#include <stdio.h>
#define SWAP(a, b, Type) 
void main()
{
    int x = 14, y = 15;
    printf("Before Swapping \n x=%d \t y=%d\n",x,y);
    SWAP(x,y,int);
    printf("After Swapping \n x=%d \t y=%d\n",x,y);
}
```
```
output
Before Swapping x=14 y=15 
After Swapping x=15 y=14
```

### 3.Define two macros UPPERCASE and LOWERCASE to check whether the character is upper case or lower case. Also accept a string and reverse the case of each character in it.
#### Program
```C
#include <stdio.h>

// Macro definitions
#define UPPERCASE(x) (x >= 'A' && x <= 'Z') LOWERCASE(x)(x >= 'a' && x <= 'z')

int main()
{
    char ch, convUpper, convLower;

    // Input a character from user printf("Enter any character: "); ch = getchar();

    if (UPPERCASE(ch))
    {
        printf("'%c' is in uppercase,\n", ch);
        convLower = ch + 32;
        printf(“After conversion, the lowercase is = % c”, convLower);
    }
    else if (LOWERCASE(ch))
    {
        printf("'%c' is in lowercase\n", ch);
        convLower = ch - 32;
        printf(“After conversion, the Uppercase is = % c”, convUpper);
    }
    else
    {
        printf("Entered character is not alphabet");
    }
    return 0;
}
```
```
output
Enter any character: A A is in uppercase
After conversion, the lowercase is=a

Enter any character: q q is in lowercase
After conversion, the Uppercase is=Q
```

### 4.Define a macro EQUALINT which compares two parameters x and y and gives 1 if equal and 0 otherwise. Use this macro to accept pairs of integers from the user. Calculate the sum of digits of both and continue till the user enters a pair whose sum of digits is not equal.
#### Program
```C
#include <stdio.h> #include<string.h>
#define EQUALINT (a, b)((a == b) ? 1 : 0) main()
{
    int a, b, ans;
    printf("\n Enter two numbers : ");
    scanf("%d %d", &a, &b);
    ans = EQUALINT(a, b);
    if (ans == 1)
    {
    }
    else
    {
    }

    printf("\n Both numbers Are Equal\n\n");

    printf("\n Both numbers are Not Equal \n\n");
}
```
```  
Output
Enter two numbers : 3 4 
Both numbers are Not Equal
```

### 5.Create a program to find maximum number using macro MAX 
#### Program
```C
#include <stdio.h>

#define MAX(x, y) ((x > y) ? x : y)

int main()
{
    int a, b, max;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    max = MAX(a, b);
    printf("Maximum number is: %d\n", max);

    return 0;
}
```
```
Output

Enter first number: 100 
Enter second number: 200 
Maximum number is: 200
```
