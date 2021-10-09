#define SIZE 12
#include"day3.h"
#include<math.h>
#include <stdio.h>
// WAP to convert a binary number to decimal and vice versa
int binary_to_decimal( int num)
{
     int remainder , decimalNumber = 0, i = 0;
        while (num != 0)
            {
      remainder = num % 10;
      num /= 10;
      decimalNumber += remainder * pow(2, i);
      ++i;
}
printf("Binary to Decimal : %d\n",decimalNumber);
return  0;
}
int decimal_to_Binary(int num)
{   int  remainder,binarynumber ,i=1;
       while (num != 0) {
      remainder = num % 2;
      num /= 2;
      binarynumber += remainder * i;
      i=i*10;
}
printf("Decimal to Binary : %d\n",binarynumber);
return 0;
}

int sumOfPrevK(int N, int K)
{
    int arr[N], prevsum = 0;
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;

    // Pick a starting point
    for (int i = 2; i < N; i++)
            {
        if( i <= K + 1)
            {
            arr[i + 1] = arr[i] + prevsum ;
            prevsum = arr[i + 1];

              }
      else
       {
           prevsum = arr[i-1] + arr[i-2] + arr[i-3];
           arr[i] = prevsum;
        }
            }
    // Loop to print the series
    for (int i = 0; i < N; i++)
        {
        printf("%d\t",arr[i]);
        }
        printf("\n\n");
        return 0;
}
/* WAP to print the following sketch by taking in N as number of rows
* * * *
  * * *
    * *
      *
*/
int sketch(int n)
 {
for (int i= n; i>= 1; i--)
{
for (int j=n; j>i;j--)
{
printf( " ");
}
for (int k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
return 0;
}

int getSum(int n)
{
    int i,sum=0,rem,num;
    for(i=10 ; i<n ;i++)
    {
    num=i;
    while(num != 0)
    {
        rem = (num % 10) ;
        sum =  sum +rem ;
        num = num/10;

    }
      if (sum == 7)
      printf("%d\t",num);
    }
    return 0;
}
// Write a recursive function for calculating power of a number. Take base number and exponent from user.

int power(int base, int a)
 {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
// Write a recursive function for calculating factorial of a number.
int multiplyNumbers(int n)
{
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
// Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …
int evaluate (long int  n, long int x)
{
 int i,j,k,sq,cnt;
    double fact,sum=0;
  for(i=1,cnt=1;i<=n;i=i+2,cnt++)
    {
        for(j=1,sq=1;j<=i;j++,sq++)
        sq = x * sq;
        printf("sq : %d\n",sq);
        for(k=1,fact=1;k<=i;k++,fact++)
        fact = fact*k;
        printf("fact : %d\n",fact);
        if(cnt%2==1)
        {
        sum=sum+(sq/fact);
        }
        else
        {
        sum=sum-(sq/fact);
        }
        printf("THE SUM OF THIS SERIES IS %7.2lf\n",sum);
    }
    return 0;
}
/*Concatenate two integer values using macros

    int concatenate(int a, int b)
     {
    int x = 10;
    while(b >= x)
        x *= 10;
    return a * x + b;
}
#define concat(a, b) a##b
*/
// Find square of a number using macros.
#define SQ n*n
  int square(int n)
  {
      printf("%d\n",SQ );
       return 0;

    }
//Write a menu driven program to display the mathematical functions
//like square root, natural log, log10x, power(x,n), Cos(x). (use math.h)

 int  mathematical(int n ,int a)
 {
      int result;
      int ch;
     printf("Enter your choice\n");
     scanf("%d",&ch);
     switch (ch)
     {
         case 1: result = sqrt(n);
            printf("%d",result);
            break;
        case 2: result = log(n);
          printf("%d",result);
            break;
          case 3: result = log10(n);
            printf("%d",result);
            break;
         case 4: result = power(n,a);// n is base and a is power
            printf("%d",result);
            break;
       case 5: result = cos(n);
            printf("%d",result);
            break;
     default: printf(" entered choice is invalid");
          break;

     }
     return 0;
 }
