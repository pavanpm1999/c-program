#include<stdio.h>
#include <string.h>
#include "day4-5.h"/*
int ascending_decsending( int n)
    {
int i,j,a[100],temp,p,q,temp1;
    printf("Enter the elements : \n") ;  //Taking input from user
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)  // loop for sorting array in ascending order
    {
        for(j=i+1;j<n;j++) { if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order of an array : \n");  //print ascending order
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]) ;
    }

    for(p=0;p<n;p++) // loop for sorting array in descending order
    {
        for(q=p+1;q<n;q++)
        {
            if(a[p]<a[q])
            {
                temp1=a[p];
                a[p]=a[q];
                a[q]=temp1;
            }
        }
    }
    printf("\n Descending order of an array : \n");  // print descending order
    for(p=0;p<n;p++)
    {
        printf("%d ",a[p]) ;
    }
    printf("\n");
    return 0;
    }
//Write a program to swap two numbers using function.
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d\t%d\t",a,b);
    printf("\n\n");
    return 0;
}
// WAP to find minimum and maximum elements in a given array using the function
//int find_max_min(int array[], int size, int *max, int *min);
 int find_max_min(int size , int *max ,int *min)
{
  int i;
 int array[] = { 1, 2 ,3 ,4 ,5 ,6};
  *max = *min = array[0];
   for(i = 0 ; i< size; i++)
   {
     if(*min >  array[i])
		  *min = array[i];
		   if(*max < array[i])
		    *max = array[i];
    }
     printf("minimum of array is : %d", *min);
    printf("\nmaximum of array is : %d", *max);
    return 0;
 }
 //. WAP to store 10 numbers in an array. Remove the duplicate entries in the array.
 int remove_duplicate(int Size)
 {

int arr[Size], i, j, k;


	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < Size; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				Size--;
				j--;
			}
		}
	}

 	printf("\n Final Array after Deleteing Duplicate Array Elements is:\n");
 	for (i = 0; i < Size; i++)
  	{
 		printf("%d\t", arr[i]);
  	}
 	return 0;
}
 //WAP to search for a given integer in an array using the linear search technique.
 int linear_search(int size, int key)
{
   int array[] = {1,252,4,3,6,7};
  int i;
  for (i= 0 ; i < size; i++)
  {
    if (array[i] == key)
    {
      printf("%d is present at location %d.\n", key, i+1);
      break;
    }
  }
  if (i == size)
    printf("%d isn't present in the array.\n\n", key);

  return 0;
}
//WAP to search for a given integer in an array using the binary search techniqu
int binary_search (int size , int key)
{
int a[size], beg, mid, end, i;
    printf("\nEnter elements of an array in sorted form:\n");
    for(i=0; i<size; i++)
    scanf("%d", &a[i]);
    beg = 0;
    end = size-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (a[mid]!=key))
    {
        if (key < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }
    if (a[mid] == key)
    {
        printf("\n\n key found at location %d", mid+1);
    }
    else
        {

        printf("\n\n key doesn't exist");
    }
    return 0;
}*/
int consecutive(int size)
{
    int sum =0 ,i,array[size];
    printf("Enter the number of element in array :\n");
    scanf("%d",&size);
    printf("Enter the array element :\n");
    for(i=1 ; i <= size ; i++)
    {
        scanf("%d",&array[i]);
        printf("%d\t",array[i]);
    }
    printf("\n\n");
    for(i =1 ; i <= size ;i++)
    {
        sum = sum + (array[i] * array [i+1]);
    }
      printf("%d", sum);
      printf("\n\n");
        return 0;

}
 // WAP to read a string from the user and find the length of string.( Note: Do not use string.h header file)

  int string_length(int size)
  {
      /* int count =0 , i=0,size=0 ;
       char  str[size];
       printf("Enter the string you want to count the length\n");
       scanf("%s",str);
       while(str[i]!= '\0')
       {   i++;
           count ++;
       }
       printf("%d",count);
       return 0;*/
    char str[size];
    int i=0;
    printf("Enter a string: \n");
    scanf("%s",&str[i]);
    for(i=0; str[i]!='\0'; ++i);
    {
       printf("\nLength of input string: %d",i);
    }
    return 0;
}

