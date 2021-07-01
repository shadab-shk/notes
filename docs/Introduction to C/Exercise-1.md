# Exercise - 1 

## To demonstrate use of pointers in C.

#### 1. Write a function which takes hours, minutes and seconds as parameters and an integers and increments the time by s seconds. Accept time and seconds in main and Display the new time in main using the above function.

###### Program
```C
#include <stdio.h>
void time(int *h, int *m, int *s, int sec);
int main()
{
    int hr, mi, se, sec;
    printf("\n Enter the time in Hour, Minute & Seconds n");
    scanf("%d%d%d", &hr, &mi, &se);
    printf("\n Enter the new seconds n");
    scanf("%d", &sec);
    printf("\n Old Time is %d:%d:%d", hr, mi, se);
    time(&hr, &mi, &se, sec);
    // nNew Time is %d:%d:%d",hr,mi,se);
}
void time(int *h, int *m, int *s, int sec)
{
    {
        *s = *s + sec;
        if (*s >= 60)
        {
            {
                *m = *m + (*s / 60);
                *s = *s % 60;
            }
        }
        if (*m >= 60)
        {
            {
                *h = *h + (*m / 60);
                *m = *m % 60;
            }
        }
        if (*h == 24)
        {
            {
                *h = 0;
            }
        }
        if (*h > 24)
        {
            {
                *h = *h % 24;
            }
        }
        printf("\nNew Time is %d:%d:%d", h, m, s);
    }
}
```

```OUTPUT
Enter the time in Hour, Minute & Seconds:
Enter the time in Hour, Minute & Seconds: 2 45 502 45 50
Enter the new seconds: 20
Enter the new seconds: 20
Old Time is: 2
Old Time is: 2:: 4545:: 5050
New Time is:
New Time is:2 :46 :2 :46 :1010
```

------------------------

#### 2. Write a program to display the elements of an array containing n integers in the reverse order using a pointer to the array.
###### Program
```C
#include <stdio.h>
void main()
{
    int n, i, array[10];
    int *ptr;
    ptr = &array[0];
    printf("enter size of array");
    scanf("%d", &n);
    printf("enter values in array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = &array[n - 1];
    printf("array in reverse order");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *ptr);
        ptr--;
    }
}
```

-----------------



### 3. Write a program to allocate memory dynamically for n integers such that the memory is initialized to 0. Accept the data from the user and find the range of the data elements.
#### Program

```C

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *p, i, n, max, min;
    printf(" nEnter the limit : ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    printf("Enter the data : ");
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    printf(" n Entered Series is : ");
    for (i = 0; i < n; i++)
        printf(" t %d", *(p + i));
    min = *(p + 0);
    for (i = 1; i < n; i++)
        if (min > *(p + i))
        {
            {
                min = *(p + i);
            }
        }
    max = *(p + 0);
    for (i = 1; i < n; i++)
    {
        {
            if (max < *(p + i))
            {
                {
                    max = *(p + i);
                }
            }
        }
    }
    printf("\n Range of the Given Series is %d TO %d\n ",min,max);
}
```


### 4.Write a Program to swap two numbers by using pointer. 
#### Program
```C
#include <stdio.h>
#include <stdlib.h>
main()
{
    int a = 10, b = 20;
    void swap1(int x, int y);
    void swap2(int *ptr1, int *ptr2);
    printf("Before swapping a = %d, b = %d", a, b);
    swap(a, b);
    printf("After swapping pointer a = %d, b = %d", a, b);
}
int swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
```


### 5. Accept n integers in array A. Pass this array and two counter variables to a function which will set the first counter to the total number of even values in the array and the other to the total number of odd values. Display these counts in main. (Hint: Pass the addresses of the counters to the function) 
#### Program
```C
#include <stdio.h>
#include <conio.h>
#define max 20
void count(int a[max], int *od, int *ev)
{
    int n,i;
    printf(" nEnter the Number of elements in array n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            *ev++;
        else
            *od++;
    }
}
void main()
{
    int a[max], odd = 0, even = 0;
    clrscr();
    count(a, &odd, &even);
    printf("\nEven number from array is %d ", even);
    printf("\nOdd number from array is %d ", odd);
    getch();
}
```

### 6. Write a function which accepts a number and three flags as parameters. If the number is even, set the first flag to 1. If the number is prime, set the second flag to 1. If the number is divisible by 3 or 7, set the third flag to 1. In main, accept an i nteger and use this function to check if it is even, prime and divisible by 3 or 7. (Hint : pass the addresses of flags to the function) 
#### Program
```C
#include <stdio.h>
void main()
{
    int *even(int *, int *);
    int *prime(int *, int *);
    int *division(int *, int *);
    int n, flag1 = 0, flag2 = 0, flag3 = 0;
    int *value1, *value2, *value3;
    printf("Enter a number");
    scanf("%d", &n);
    value1 = even(&n, &flag1);
    printf("\n flag1=%d\n", *value1);
    value2 = prime(&n, &flag2);
    printf("\n flag2=%d\n", *value2);
    value3 = division(&n, &flag3);
    printf("\n flag3=%d\n", *value3);
}
int *even(int *ptr1, int *ptr2)
{
    if (*ptr1 % 2 == 0)
    {
        printf("number is even");
        *ptr2 = 1;
        return (ptr2);
    }
    else
        printf("number is odd");
    return (ptr2);
}
int *prime(int *ptr1, int *ptr2)
{
    int i, n = *ptr1;
    for (i = 2; i <= n; i++)
    {
        if (*ptr1 % i == 0)
        {
            printf("number is not prime");
            return (ptr2);
        }
        else
            printf("number is prime");
        *ptr2 = 1;
        return (ptr2);
    }
}
int *division(int *ptr1, int *ptr2)
{
    if (*ptr1 % 3 == 0 || *ptr1 % 7 == 0)
    {
        printf("number is divisible by 3 or 7");
        *ptr2 = 1;
        return (ptr2);
    }
    else
        printf("number is not divisible by 3 or 7");
    return (ptr2);
}
```
