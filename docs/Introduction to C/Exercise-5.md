# Exercise - 5 

# To demonstrate text files using C

### 1. Write a program to accept two filenames as command line arguments. Copy the contents of the first file to the second such that the case of all alphabets is reversed.

#### Program
```
Create first.txt file externally and write any message in that.
After that create file_copy.c file by using vi editor
```
```C
#include <stdio.h>
int main()
{
	FILE *fp1, *fp2;
	char ch;
	fp1 = fopen("first.txt", "r");
	fp2 = fopen("second.txt", "w");
	ch = fgetc(fp1);
	while (ch != EOF)
		if (ch >= 65 && ch <= 90)
			fputc(ch + 32, fp2);
		else if (ch >= 97 && ch <= 122)
			fputc(ch - 32, fp2);
		else
			fputc(ch, fp2);
	ch = fgetc(fp1);
	fclose(fp1);
	fclose(fp2);
	//fcloseall();
}
```
```
Now compile file by using gccfile_copy.c and take the output using ./a.out command.
Nothing will be display on the terminal but second.txt file will be created in that folder
and all the contents of first file will be in reversed case.
```
```
    Output: first.txt
	HELLO ALL
	FRIENDS
	second.txt
	hello all
	friends
```
### 2. Write a program to accept a filename as command line argument and count the number of words, lines and characters in the file.

#### Program
```C
#include <stdio.h>
#include <string.h>
void main(int argc, char *argv[])
{
	int noc = 0, now = 0, nol = 0;
	FILE *fr;
	char fname[20], ch;
	strcpy(fname, argv[1]);
	fr = fopen(fname, "r");
	if (fr == NULL)
	{
		printf("\n error \n");
	}
	ch = fgetc(fr);
	while (ch != EOF)
	{
		noc++;
		if (ch == ' ')
			now++;
		if (ch == '\n')
		{
			nol++;
			now++;
		}
		ch = fgetc(fr);
	}

	fclose(fr);
	printf("\\n total no of characters=%d", noc);
	printf("\\n total no of line=%d", nol);
	printf("\\n total no of words=%d", now);
}
```
### 3. Write a program to accept details of n students (roll number, name, and percentage) and write it to a file named “student.txt”. Ac cept roll number from the user and search the student in the file. Also display the student details having the highest percentage

#### Program
```C
#include <stdio.h>
#include <string.h>
int main()
{
	int roll, r, no;
	char name[30], n[30];
	float per, p;
	FILE *fm;
    fm=fopen("student.txt","r");
    printf("\nEnter roll number:");
    scanf("%d",&no);
    p=0;
    while(!feof(fm))
    {
		fscanf(fm, "%d %s %f\\n", &roll, &name, &per);
			if (no == roll)
		{
			printf("\\nROLLNO NAME PERCENTAGEnROLLNO NAME PERCENTAGE\\n");
		}
		if (p < per)
		{
			p = per;
			p = per;
			strcpy(n, name);
			strcpy(n, name);
			r = roll;
			r = roll;
		}
		printf("Higest percentage is\\n");
		printf("Roll No: %d\\tName: %stName: %s\\tPercentage: %ftPercentage: %f\\n", r, n, p);

		fclose(fm);
    }
}
```
```
=============================================================
Output
student@localhost file]$ vifile_student.c
[student@localhost file]$ gccfile_student.c
[student@localhost file]$ ./a.out
Enter roll number:2
ROLLNO	 NAME  	PERCENTAGE
2 		Shadab 	 75.500000
Higest percentage is
Roll No: 3
```