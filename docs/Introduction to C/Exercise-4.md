# Exercise - 4 

# To demonstrate use of Dynamic Memory Allocation in C.

### 1) Program to calculate the sum of 10 numbers. Declare a pointer to integer. Allocate the memory using malloc() to it for n integers. Accept the integers, Calculate and print the sum. Lastly release the allocated memory. 

#### Program
```C
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, n = 10, i, sum = 0;
    //allocate memory
    ptr=(int*)malloc(n*sizeof(int));
    if (ptr == NULL)
    {
        printf("memory was not allocated");
        printf("Enter the numbers:");
        for (i = 0; i < 10; i++)
            scanf("%d", ptr + i);
        sum = sum + *ptr + i; //or *(ptr+
                printf("The sum=%d", sum);
        free(ptr);
    }
}
```
``` 
Output
Enter the numbers: 3 5 6 1 5 6 7 8 9 1
The sum=51
```

### 2) Declare a pointer to character. Allocate them memory for n characters (string) using calloc(). Accept the string and count the number of vowels and consonants in it. Lastly free the pointer. 

#### Program
```C
#include <stdio.h>
int main()
{
    char *ptr;
    int cntV = 0, cntC = 0;
    //assign memory
    ptr = (char *)calloc(80, sizeof(char));
    printf("Enter a string: ");
    scanf("%s", ptr);
    while (*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            cntV++;
        }
        else
        {
            cntC++;
        }
        //increase the pointer, to point next character
        ptr++;
    }
    printf("Total number of VOWELS= %d, CONSONANT= %d\n", cntV, cntC);
    return 0;
    free(ptr);
}
```
``` 
Enter a string: hello
Total number of VOWELS= 2, CONSONANT=3
```

### 3) Declare a pointer to float. Allocate the memory for five float numbers. Accept these five numbers and print them. Expand the same memory for three more float numbers.Also accept the three numbers and calculate the sum and average of all numbers. Lastly remove the expanded block from memory.

#### Program
```C
#include <stdio.h>
void main()
{
    float *ptr , sum, avg;
    int i, n=5, n1 =3;
    //memory allocation
    ptr=(float *)malloc (n *sizeof(float));
    printf(" E nter the numbers:");
    for(i=0;i<5;i++)
    scanf("%f",ptr+i);
    printf("You want to add three numbers more…");
    //memory reallocation
    ptr=(float *)realloc (ptr,(n+n1 )*sizeof(float));
    printf("Enter the remaining numbers");
    for(i=n;i<(n+n1);i++)
        {
        scanf("% f", ptr + i);
        }
    printf("The new list isn");
    for(i=n;i<(n+n1);i++)
        {
        printf("% f t", *(ptr + i));
        sum = sum + *ptr + i;
        }
    printf("The sum of new list is=%f",sum);
    avg=sum/(n+n1);
    printf("The Average of new list is=%f",avg);
}
```
```
output
Enter the numbers:1 2 3 4 5
You want to add three numbers more…
Enter the remaining numbers: 6 7 8
The new list is 1 2 3 4 5 6 7 8
The sum of new list is=36
The Average of new list is=4.5
```