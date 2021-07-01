# Exercise - 2 

## To demonstrate use of strings in C.

### 1. Write a menu driven program to perform the following operations on strings using standard library functions : 
###### Length
###### Copy
###### Concatenation
###### Compare
###### Reverse
###### Uppercase
###### Lowercase

#### Program
```C
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20], str1[20];
    int ch, l;
    char rev, upr, lwr;
    printf("Menu\n1.Length\n2.Copy\n3.Concatenation\n4.Compare\n5. Reverse\n6.Uppercase\n7. Lowercase\n");
    printf("enter option:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\nEnter the string:");
        scanf("%s", &str);
        l = strlen(str);
        printf("\nLength of string=%d", l);
        break;
    case 2:
        printf("\nEnter the string:");
        scanf("%s", &str);
        strcpy(str1, str);
        printf("\nAfter copy String str1=%s", str1);
        break;
    case 3:
        printf("\nEnter the First string:");
        scanf("%s", &str);
        printf("\nEnter the Second string:");
        scanf("%s", &str1);
        strcat(str, str1);
        printf("\nAfter Concat String str=%s", str);
        break;
    case 4:
        printf("\nEnter the First string:");
        scanf("%s", &str);
        printf("\nEnter the Second string:");
        scanf("%s", &str1);
        l = strcmp(str, str1);
        if (l == 0)
            printf("\nBoth are equal");
        else
            printf("\nBoth are Different");
        break;
    case 5:
        printf("\nEnter the string:");
        scanf("%s", &str);
        rev = strrev(str);
        printf("\Reverse of the string=%d", rev);
        break;
    case 6:
        printf("\nEnter the string:");
        scanf("%s", &str);
        upr = strupr(str);
        printf("\nUppercase of the string=%d", upr);
        break;
    case 7:
        printf("\nEnter the string:");
        scanf("%s", &str);
        lwr = strlwr(str);
        printf("\nLowercase of the string=%d", lwr);
        break;
    }
}
```

### 2. Write a program that will accept a string and character to search. The program will call a function, which will search for the occurrence position of the character in the call a function, which will search for the occurrence position of the character in the string and return its position. Function should return string and return its position. Function should return ––1 1 if the character is not found in if the character is not found in the string
#### Program

```C
#include <stdio.h>
#include <string.h>
int search(char *str, char c);
void main()
{
    char str[20], ch;
    int pos;
    printf("Enter the character:");
    scanf("%c", &ch);
    printf("\nEnter the string:");
    scanf("%s", str);
    pos = search(str, ch);
    if (pos == -1)
        printf("\nCharacter Not Found");
    else
        printf("\nCharacter Found at %d position", pos + 1);
}
int search(char *str, char c)
{
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (c == str[i])
            return i;
        // i++;
        else
{
return -1;
}
    }
}
```

```
OUTPUT*************************
Enter the character:v
Enter the string: vcacs
Character Found at 1 position
```
### 3. A palindrome is a string that reads the same3.A palindrome is a string that reads the same-- forward and reverse.forward and reverse.ExampleExample : : "madam" is a Palindrome.Write a function which accepts a string and returns 1 if the "madam" is a Palindrome.Write a function which accepts a string and returns 1 if the string is a palindrome and0 otherwise.Use thstring is a palindrome and0 otherwise.Use this function in main.
#### Program
```C
#include <stdio.h>
#include <string.h>
int main()
{
    int len = 0, i = 0, flag = 1;
    char str[10];
    printf("enter string:");
    scanf("%s", str);
    len = strlen(str);
    while (i < len / 2)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 0)
    {
        printf("string is not palindrome");
    }
    else
    {
        printf("string is palindrome");
    }
}
```

### 4.For the following standard functions, write corresponding user defined functions and write a menu driven program to use them. Strlen, strrev, strupr, strlwr, strcat, strcmp

#### Program

```C
#include <stdio.h>
#include <conio.h>
void length(char *s) 
{
    {
        int i = 0;
        int i = 0;
        while (s[i] !='\0')
        {
            {
                i++;
            }
        }
        printf("\nLength of string = %d",i);
    }
}
void reverse(char *s)
{
    {
        int i = 0, j = 0;
        char *str;
        while (s[i] !='\0')
        {
            {
                i++;
            }
        }
        i--;
        while (i >= 0)
            {
                {
                    str[j] = s[i--];
                    j++;
                }
            }
        str[j] = '\0';
        printf("\nAfter reverse string = %s ",str);
    }
}
void upper(char *s)
{
    {
        int i = 0;
        while (s[i] != '\0')
        {
            {
                    if (s[i] >= 97 && s[i] <= 122)
                    {
                        {
                            s[i] = s[i]- 32;
                        }
                    }
                i++;
            }
        }
        printf("\nUpper of string =  %s ",s);
    }
}
void lower(char *s)
{
    {
        int i = 0;
        while (s[i] !='\0')
        {
            {
                if (s[i] >= 65 && s[i] <= 90)
                    {
                        {
                            s[i] = s[i] + 32;
                        }
                    }
                i++;
            }
        }
        printf("\nLower of string = %s ",s);
    }
}
void compare(char *s1, char *s2)
{
    int i = 0, count = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            count = 0;
            break;
        }
        else
            count = 1;
        i++;
    }
    if (count == 1)
        printf("\nStrings are equal");
    else
        printf("\nStrings are different");
}
void concat(char *s1, char *s2)
{
    int i = 0, j = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    i--;
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        j++;
    }
    s1[i] = '\0'; //assign last element null^M
    printf("\nAfter concate s1=%s", s1);
}
void main()
{
    
    char *str,*str2;
    int ch;
    printf("Enter the String");
    scanf("%s", str);
    printf("Enter the String 2");
    scanf("%s", str2);
    do
    {
        {
            printf("\nMenunMenu \n 1.Length\n 2.Reverse \n 3.Uppercase \n 4.Lowercase \n 5.Concat \n 6.Compare \n 7.Exit\n ");
            scanf("%d", &ch);
            switch (ch)
            {
                    {
                    case 1:
                        length(str);
                        break;
                    case 2:
                        reverse(str);
                        break;
                    case 3:
                        upper(str);
                        break;
                    case 4:
                        lower(str);
                        break;
                    case 5:
                        concat(str, str2);
                        break;
                    case 6 :
                        compare(str, str2);
                        break;
                    case 7:
                        printf("");
                        break;
                    }
            }
            
                
         }
    }
    while (ch!=6);
    {
        getch();
    }              
}  
```

### 5. Write a program which accepts a sentence from the user and alters it as follows : Every space is replaced by *, case of all alphabets is reversed, digits are replaced by ? 
#### Program

```C
#include <stdio.h>
void main()
{
    
                
    char s[80], *c;
    int i = -1;
                
    clrscr();
    printf("\n Enter the sentencenEnter the sentence\n ");
                while (s[i] != '\n')
                {
                    {
                        i++;
                        scanf("%c", &s[i]);
                    }
                }
                i = 0;
                while (s[i] != '\n')
                {
                    {
                        if (s[i] == ' ')
                        {
                            {
                                c[i] = '*';
                            }
                        }
                        else if (s[i] <= '9' && s[i] >= '0')
                        {
                            {
                                c[i] = '?';
                            }
                        }
                        else if (s[i] <= 'z' && s[i] >= 'a')
                        {
                            {
                                c[i] = s[i] - 32;
                                32;
                            }
                        }
                        else if (s[i] <= 'Z' && s[i] >= 'A')
                        {
                            {
                                c[i] = s[i] + 32;
                            }
                        }
                        else
                        {
                            {
                                c[i] = s[i];
                            }
                        }
                        i++;
                    }
                    c[i] = '\0';
                    printf("\n ans = %s ", c);
                }
 }
 ```

 ```
output
Enter the sentence : HELLO all 178 students: HELLO all 178 students
Ans=hello*ALL*???STUDENTS=hello*ALL*???STUDENTS
```

### 6. Write a program in C to reverse each word in a sentence.6. Write a program in C to reverse each word in a sentence.
#### Program
```C
#include <stdio.h>
#include <string.h>
void main()
{
    char msg[] = "VCACS PUNE";
    char str[10];
    int i = 0, j = 0;
    clrscr();
    while (msg[i] != '\0')
    {
        if (msg[i] != ' ')
        {
            str[j] = msg[i];
            j++;
        }
        else
        {
            str[j] = '\0';
            printf("Reverse string is %s", strrev(str));
           printf(" ");
            j = 0;
        }
        i++;
    }
    str[j] = '\0';
    printf("Reverse string is %s", strrev(str));
    getch();
}
```

```
output
Reverse string is SCACV ENUP
```

### 7. Write a function which displays a string in the reverse order.(Use recursion)7. Write a function which displays a string in the reverse order.(Use recursion)###Program
```C
#include <stdio.h>
int main()
{
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}
void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverseSentence();
        printf("reverse string is %c", c);
    }
}
```
```
output
Enter a sentence:vcacs
reverse string is scacv
```

### 8. Write a program that accepts n words and outputs them in dictionary order.8. Write a program that accepts n words and outputs them in dictionary order.Program
#### Program
```c
#include <stdio.h>
#include <string.h>
void main()
{
    int n, i, j;
    char *word[10], *temp;
    printf("\n Enter how many strings:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        word[i] = (char *)malloc(15 * sizeof(char));
    printf("\n Enter %d word:", n);
    for (i = 0; i < n; i++)
        scanf("%s", word[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(word[i], word[j]) > 0)
            {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    printf("\n Words in alphabetical order:");
    for (i = 0; i < n; i++)
        printf("\n%s", word[i]);
}
```

### 9. Write a program that accepts n strings and displays the longest string.strings and displays the longest string.
#### Program
```C
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20][20];
    int i, n;
    int maxlen = 0;
    char longstr[80];
    printf("How many strings you want to enter\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d Strings:", i);
        scanf("%s", &s[i]);
    }
    for (i = 1; i <= n; i++)
    {
        n = strlen(s[i]);
        if (n > maxlen)
        {
            maxlen = n;
            strcpy(longstr, s[i]);
        }
    }
    printf("\nLongest String:= %s", longstr);
}
```