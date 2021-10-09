#include <stdio.h>
#include"day8.h"
#include<stdlib.h>
#include<string.h>
int student_information(int n)
{
 struct student {
    char firstName[50];
    int roll;
    float marks;
};

 struct student*  s;
 s =(struct student *)malloc(sizeof(struct student));
 if(s == NULL)
 {
 puts("Some kind of malloc() error");
 exit(1);
 }
 char * starting_name;
int i,j,len,a,flag=0,max= s[0].marks;
char  name[100];
printf("Entering information of students");
for (i = 0; i < n; i++)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number :%d\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
     printf("Enter the student roll number:");
     scanf("%d",&a);
    for (i = 0; i < n; ++i)
    {
        if( s[i].roll == a)
        {
        printf("student information \n student roll number is : %d\n student name is :%s\n student marks:%f\n", s[i].roll,s[i].firstName,s[i].marks);
         break;
        }
    }
    if(s[i].roll != a)
    printf("student not found\n");
    printf("Enter the student name:");
    scanf("%s", name);
    for (i = 0; i < n; i++)
    {
        if(strcmp(s[i].firstName,name)== 0)
        {
            printf("student information \n student roll number: %d\n student name is :%s\n student marks:%f\n", s[i].roll,s[i].firstName,s[i].marks);
         break;
        }
    }
    if(strcmp(s[i].firstName,name)!= 0)
    {
    printf("student Name not Found\n");
    }
        printf("maximum marks student details:\n");
    for (i = 0; i < n; i++)
    {
        if( s[i].marks > s[i+1].marks)
        {
        printf("student roll number is : %d\n student name is :%s\n student marks:%f\n", s[i].roll,s[i].firstName,s[i].marks);
           break;
        }
           else
           {
            max = s[i+1].marks;
            printf(" student roll number is : %d\n student name is :%s\n student marks:%f\n", s[i+1].roll,s[i+1].firstName,s[i+1].marks);
             break;
           }
    }
printf("information about student,whose name starts with 'A\n");
for(i =0 ; i< n ; i++)
{
    starting_name = s[i].firstName;
    len = strlen(starting_name);
    for( j= 0; j<len ; j++)
    {
        if(starting_name[j]== 'A')
        {
        printf("student rollnumber is: %d\n student name is :%s\n student marks:%f\n", s[i].roll,s[i].firstName,s[i].marks);
        flag = 1;
        }
    }
}
if(flag == 0)
printf("student not found\n");
//free("s");
//printf("%d",s[0].roll);
return 0;
}
/* In an X-Y Plane there are N numbers of points at location (x,y).
Each point has a weight associated with it.
 Define the structure for the above problem.
 Find the point with maximum weight.
  Assuming all points are connected,
  count the number of vertical and horizontal lines.*/
int point_x_and_y(int n)
{
struct point{
int x;
int y ;
}s[n];
int i,count=0;
  for(i =0; i<n ;i++)
{
    printf(" %d.Enter the x  and y value:\n",i+1);
    scanf(" %d%d",&s[i].x,&s[i].y);
}
for(i=0 ; i<n ; i++)
{ count = count+1;
   printf(" x value is:%d\t y value is: %d\t\n",s[i].x ,s[i].y);
}
printf("\n");
printf("Total number of Horizontal and vertical lines are :%d",count);
return 0;
}
