#include"day7.h"
#include<stdlib.h>
#include<stdio.h>
int malloc_allocation(int n)
{
int* ptr;
int i;
printf("Entered number of elements: %d\n", n);
 ptr = (int*)malloc(n * sizeof(int));
if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
     {
        printf("Memory successfully allocated using malloc.\n");

        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
    }
    printf("\n\n");

    return 0;
}
int findLargest(int n)
{
    int i;

    int* array;

    // Memory allocation to arr
    array = (int*)malloc(n*sizeof(int));
    if (array == NULL)
        {
        printf("No memory allocated");
        exit(0);
    }
    for(i= 0;i< n; i++)
    {
        array[i] = i+2;
    }
    printf("Element in the array :%d",array[i]);
    printf("\n");
    for (i = 0; i < n; i++)
        {
        if (array[ i]< array[i+1])
        {
            array[i] = array[i+1];
        }
    }

    printf("maximum element in the array is:%d\n", *array);
    return 0;
}
int findsmallest(int n)
{
    int i;

    int* arr;

    // Memory allocation to arr
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
        {
        printf("No memory allocated");
        exit(0);
    }

    for (i = 1; i < n; i++)
        {
        if (*arr > *(arr + i))
        {
            *arr = *(arr + i);
        }
    }

    printf("minimum element in the array is:%d\n", *arr);
    return 0;
}
// Find the sum of all the elements of array
int sum_of_array( int n)
{
int* ptr;
int i,sum=0;
printf("Entered number of elements: %d\n", n);
 ptr = (int*)malloc(n * sizeof(int));
if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
     {
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        for (i = 0; i < n; ++i)
        {
            sum = sum + ptr[i];
        }
         printf(" sum of the number is :%d ", sum);
    }
    printf("\n");

    return 0;
}
// Find the sum of even and odd elements of array
int sum_of_array_even_and_odd( int n)
{
int* ptr;
int i,sum=0,sum1=0;
printf("Entered number of elements: %d\n", n);
 ptr = (int*)malloc(n * sizeof(int));
if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
     {
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        for (i = 0; i < n; ++i)
        {
            if(ptr[i]%2==0)
             sum1 = sum1 + ptr[i];
           else
            sum = sum + ptr[i];
    }
    printf("sum  of even elements is :%d\n",sum1);
    printf("sum of odd elements is :%d\n",sum);
    printf("\n");
return 0;
}
}
int palindrome(int n)
{
    int array[n];
    int flag = 0,i;
    printf("Enter the element to store in an array :");
    for(i=0; i<=n ; i++)
    {
     scanf("%d",&array[i]);
    }
    for(i=0; i<=n ;i++)
    {
    printf("%d",array[i]);
    }
    printf("\n");
    for (int i = 0; i <=n ; i++)
        {
        if (array[i] != array[n - i ])
         {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf( "not Palindrome\n");
    else
        printf("Palindrome\n");
 return 0;
}
int memory_deallocation(int n)
{
int* ptr;
int i;
printf("Entered number of elements: %d\n", n);
 ptr = (int*)malloc(n * sizeof(int));
if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
     {
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        for(i = 0 ; i < n; i++)
            {
        printf("%d",ptr[i]);
            }
            printf("\n");
        free(ptr);
        printf("after the dellocation:%d",ptr[i]);
        return 0;
     }
}

