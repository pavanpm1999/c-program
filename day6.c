#include"day6.h"
#include<stdio.h>
//Write a program to store and print the roll no., name, age and marks of 10 students using structures.
int student_details(int n)
{
    struct student1
    {
    char name[40];
    int age;
    int roll_number;
    float marks;
    }s1[n];
    int i;
    for(i=0;i<=n ;i++)
    {
        printf("Student information\n");
        printf("%d.Enter the roll number\t",i+1);
        scanf("%d",&s1[i].roll_number);
         printf("Enter the Name\t");
        scanf("%s",s1[i].name);
         printf("Enter the Age\t");
        scanf("%d",&s1[i].age);
         printf("Enter the Marks\t");
        scanf("%f",&s1[i].marks);

    }
   printf("\n");
    for(i=0;i<=n; ++i)
    {
        printf("roll is:%d\t",s1[i].roll_number);
        printf("name is :%s\t",s1[i].name);
        printf("Age is:%d\t",s1[i].age);
        printf(" Marks is:%f\t",s1[i].marks);
        printf("\n");
    }
    return 0;
}
