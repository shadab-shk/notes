//Structures and Union in C

/*1. Create a structure student (roll number, name, marks of 3 subjects, percentage)
percentage).
Accept details of n students and write a menu driven program to perform the following
operations. Write separate functions for the different options.
i) Search
ii) Modify
iii) Display all student details
iv) Display all student having percentage > _____*/

//Program
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll, marks[3];
    float percentage;
} stud[10];
void main()
{
    int ch, n;
    int i, j;
    float max;
    printf("Total number of students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        printf("\nEnter the details of Student %d :- \n", i + 1);
        printf("\n Enter the Name and Roll Number : ");
        scanf("%s %d", &stud[i].name, &stud[i].roll);
        printf("\nEnter the Marks of 3 subjects : ");
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &stud[i].marks[j]);
            sum = sum + stud[i].marks[j];
        }
        stud[i].percentage = (float)sum / 3;
    }
    do
    {
        printf("\n\n\nMENU\n");
        printf("\t1.Search Student:\n\t2.Display All Students:\n\t3. Display all students having percentage greater than:\n\t4.Display highest percentage among all:\n\t5.Exit\n");
        printf("\n\t\tEnter the Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            search(stud, n);
            break;
        case 2:
            display(stud, n);
            break;
        case 3:
            greater_percentage(stud, n);
            break;
        case 4:
            highest_percentage(stud, n);
            break;
        case 5:
            printf(" ");
            break;
        }
    } while (ch != 5);
}
void display(struct student stud[10], int n)
{
    int i, j;
    printf(" \nSTUDENTS DETAILS\n");
    for (i = 0; i < n; i++)
    {
        printf("\nROLL NO.=%d\t\t NAME=%s\t\t PERCENTAGE=%f", stud[i].roll, stud[i].name, stud[i].percentage);
        for (j = 0; j < 3; j++)
        {
            printf("\t\tmark %d= %d", j + 1, stud[i].marks[j]);
        }
    }
}
void search(struct student stud[10], int n)
{
    int i, j;
    char s[30];
    printf("\n ENTER THE NAME OF THE STUDENT TO BE SEARCH : ");
    scanf("%s", &s);
    for (i = 0; i < n; i++)
    {
        if ((strcmp(stud[i].name, s)) == 0)
        {
            printf("\nROLL NO.=%d\t\t NAME=%s\t\t PERCENTAGE=%f", stud[i].roll, stud[i].name, stud[i].percentage);
            for (j = 0; j < 3; j++)
            {
                printf("\t\tmark %d= %d", j + 1, stud[i].marks[j]);
            }
        }
    }
}
voidgreater_percentage(struct student stud[10], int n)
{
    int i, j;
    float perc;
    printf("ENTER THE PERCENTAGE WHICH ABOVE STUDENTS YOU WANT TO SEARCH");
    scanf("%f", &perc);
    for (i = 0; i < n; i++)
    {
        if (stud[i].percentage >= perc)
        {
            printf("\nROLL NO.=%d\t\t NAME=%s PERCENTAGE=%f", stud[i].roll, stud[i].name, stud[i].percentage);
            for (j = 0; j < 3; j++)
            {
                printf("\t\tmarks of subject %d= %d", j + 1, stud[i].marks[j]);
            }
        }
    }
}
voidhighest_percentage(struct student stud[10], int n)
{
    int i, j;
    float max = stud[0].percentage;
    for (i = 0; i < n; i++)
    {
        if (stud[i].percentage > max)
        {
            max = stud[i].percentage;
        }
    }
    printf("Highest percentage=%f", max);
}

/* 2.Create a structure employee (id, name, salary) salary). Accept details of n employees and
write a menu driven program to perform the following operations. Write separate
functions for the different options. 
i) Search by name
ii) Search by id
iii) Display all
iv) Display all employees having salary > _____
v) Display employee having maximum salary
*/
//Program
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    int id;
    float sal;
} emp[10];
void main()
{
    int ch, n;
    int i;
    printf("Total number of Employees:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the details of Employee %d :- \n", i + 1);
        printf("\n Enter the Name, Id and Salary : ");
        scanf("%s %d %f", &emp[i].name, &emp[i].id, &emp[i].sal);
    }
    do
    {
        printf("\n\n\nMENU\n");
        printf("1.Display All Employees:\n2.Search employee by name:\n3.Search employee by id:\n4.Display all employees having salary greater than:\n5.Display highest salary among all:\n6.Exit\n");
        printf("Enter the Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display(emp, n);
            break;
        case 2:
            search_name(emp, n);
            break;
        case 3:
            search_id(emp, n);
            break;
        case 4:
            greater_salary(emp, n);
            break;
        case 5:
            maximum_salary(emp, n);
            break;
        case 6:
            printf(" ");
            break;
        }
    } while (ch != 6);
}
void display(struct employee emp[10], int n)
{
    int i;
    printf(" \nEMPLOYEES DETAILS\n");
    for (i = 0; i < n; i++)
    {
        printf("\nID=%d\t NAME=%s\t SALARY=%f", emp[i].id, emp[i].name, emp[i].sal);
    }
}
voidsearch_name(struct employee emp[10], int n)
{
    int i;
    char s[30];
    printf("\n ENTER THE NAME OF THE EMPLOYEE TO BE SEARCH:");
    scanf("%s", &s);
    for (i = 0; i < n; i++)
    {
        if ((strcmp(emp[i].name, s)) == 0)
        {
            printf("\nID=%d\t NAME=%s\t SALARY=%f", emp[i].id, emp[i].name, emp[i].sal);
        }
    }
}
voidsearch_id(struct employee emp[10], int n)
{
    int i, eid;
    printf("\n ENTER THE ID OF THE EMPLOYEE TO BE SEARCH:");
    scanf("%d", &eid);
    for (i = 0; i < n; i++)
    {
        if (emp[i].id == eid)
        {
            printf("\nID=%d\t NAME=%s\t SALARY=%f", emp[i].id, emp[i].name, emp[i].sal);
        }
    }
}
voidgreater_salary(struct employee emp[10], int n)
{
    int i;
    float esal;
    printf("ENTER THE SALARY WHICH ABOVE EMPLOYEE YOU WANT TO SEARCH:");
    scanf("%f", &esal);
    for (i = 0; i < n; i++)
    {
        if (emp[i].sal >= esal)
        {
            printf("\nID=%d\t NAME=%s\t SALARY=%f", emp[i].id, emp[i].name, emp[i].sal);
        }
    }
}
voidmaximum_salary(struct employee emp[10], int n)
{
    int i;
    float max = emp[0].sal;
    for (i = 0; i < n; i++)
    {
        if (emp[i].sal > max)
        {
            max = emp[i].sal;
        }
    }
    printf("Maximum Salary=%f", max);
}

/*3. Create a structure to accept details for n books and write a menu driven program for
the following:
i) Display all text books
ii) Search Text Book according to Title, Author, Publi sher
iii) Find the total cost of all books. */

//Program
#include <stdio.h>
#include <string.h>
struct lib
{
    int id, cost;
    char title[20], author[20], publish[20];
} s1[10];
void main()
{
    int ch, n;
    int i;
    printf("Enter the no of books in library:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the details of book %d :- \n", i + 1);
        printf("\n Enter the Id of book : ");
        scanf("%d",&s1[i].id);
        printf("\n Enter the Title of book : ");
        scanf("%s",&s1[i].title);
        printf("\n Enter the Author of book : \n");
        scanf("%s",&s1[i].author);
        printf("\n Enter the Publisher of book : ");
        scanf("%s",&s1[i].publish);
        printf("\nEnter the cost : ");
        scanf("%d",&s1[i].cost);
    }
    do
    {
        printf("\t\t\nLIBRARY DETAILS\n");
        printf("\t\t\nMENU\n");
        printf("\t1.Book of specific Author:\n\t2.Book of specific Publisher.\n\t3.Book of specific Title:\n\t4.Find the book cost >=:\n\t5.Display All books:\n\t6.Exit\n");
        printf("\n\t\tEnter the Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            search_author(s1, n);
            break;
        case 2:
            search_publisher(s1, n);
            break;
        case 3:
            search_title(s1, n);
            break;
        case 4:
            cost(s1, n);
            break;
        case 5:
            display(s1, n);
            break;
        case 6:
            total_cost(s1, n);
            break;
        case 7:
            printf(" ");
            break;
        }
    } while (ch != 7);
}
void display(struct lib s1[10], int n)
{
    int i;
    printf(" \n\tCOLLEGE LIBRARY\n");
    printf("\nBOOK ID\t\tTITLE\t\tAUTHOR\t\tPUBLISHER\t\tBOOK COST\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%s\t\t\t%d\n", s1[i].id, s1[i].title, s1[i].author, s1[i].publish, s1[i].cost);
    }
}
voidsearch_title(struct lib s1[10], int n)
{
    int i;
    char s[30];
    printf("\n ENTER THE BOOK TITLE TO BE SEARCH : ");
    scanf("%s", &s);
    for (i = 0; i < n; i++)
    {
        if ((strcmp(s1[i].title, s)) == 0)
        {
            printf("\n%s IS found at %d position\n", s, i + 1);
            printf("\nBOOK ID\t\tTITLE\t\tAUTHOR\t\tPUBLISHER\t\tBOOK COST\n");
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\n", s1[i].id, s1[i].title, s1[i].author, s1[i].publish, s1[i].cost);
        }
    }
}
voidsearch_author(struct lib s1[10], int n)
{
    int i;
    char s[30];
    printf("\n ENTER THE BOOK AUTHOR TO BE SEARCH : ");
    scanf("%s", &s);
    for (i = 0; i < n; i++)
    {
        if ((strcmp(s1[i].author, s)) == 0)
        {
            printf("\n%s IS found at %d position\n", s, i + 1);
            printf("\nBOOK ID\t\tTITLE\t\tAUTHOR\t\tPUBLISHER\t\tBOOK COST\n");
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\n", s1[i].id, s1[i].title, s1[i].author, s1[i].publish, s1[i].cost);
        }
    }
}
voidsearch_publisher(struct lib s1[10], int n)
{
    int i;
    char s[30];
    printf("\n ENTER THE BOOK PUBLISHER TO BE SEARCH : ");
    scanf("%s", &s);
    for (i = 0; i < n; i++)
    {
        if ((strcmp(s1[i].publish, s)) == 0)
        {
            printf("\n%s IS found at %d position\n", s, i + 1);
            printf("\nBOOK ID\t\tTITLE\t\tAUTHOR\t\tPUBLISHER\t\tBOOK COST\n");
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\n", s1[i].id, s1[i].title, s1[i].author, s1[i].publish, s1[i].cost);
        }
    }
}
void cost(struct lib s1[10], int n)
{
    int i, price;
    printf("ENTER THE PRICE OF THE BOOK YOU WANT TO SEARCH");
    scanf("%d", &price);
    for (i = 0; i < n; i++)
    {
        if (s1[i].cost >= price)
        {
            printf("In if");
            printf("\nBOOK ID\t\tTITLE\t\tAUTHOR\t\tPUBLISHER\t\tBOOK COST\n");
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\n", s1[i].id, s1[i].title, s1[i].author, s1[i].publish, s1[i].cost);
        }
        else
        {
            printf("Not found");
        }
    }
}
void cost(struct lib s1[10], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + (s1[i].cost);
    }
    printf("\n Total COST Of ALL BOOKS is : %d", sum);
}