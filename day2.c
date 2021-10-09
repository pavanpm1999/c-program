//Enter a 5 digit number and find the sum of its digits. For E.g. if int number = 12345
#include<math.h>
#define PI 3.14
#include"day2.h"
#include<stdio.h>
int  sum_of_digit(int n )
{  int last_digit,sum = 0;
   if( n <= 0)
    return 1;
  while (n != 0)
  {
      last_digit = n % 10 ;
      sum = sum + last_digit;
      n = n /10;
}
printf("%d\n",sum);
return 0;
}
// Write a program to reverse the number. For E.g. If int number = 12345; then the output reverse = 54321
//and  WAP to check if a given number is a palindrome. For e.g. 12321, 56788765;
int reverse_digit(int  num)
{
     int rev_num = 0;
    while (num > 0)
        {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
      printf("%d\n",rev_num);
    return rev_num;
}
 //Write a program to count the occurrences of digit in a number
int occurrence_of_number(int num , int key)
{
    int count =0 ,rem  ;
 while(num != 0)
    {
        rem = num%10;
        if(rem == key)
            count++;
         num/=10;
    }
printf("%d\n",count);
return 0;
}
  int palindrome_or_not(int num)
  {
   if(reverse_digit(num) == num)
        printf("number is a palindrome :%d\n",num);
    else
       printf("number is Not a palindrome %d\n",num);
     return 0;
  }
// Generate the first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11
/*int prime_number(int n)
{
    int i;
     for(i= 2 ; i < n/2 ; i++)
     {
         if( n % i == 0 )
         printf("Not a prime number : %d\n", n);
         else
         printf("it is a prime number : %d\n", n);
     return 0;
}
return 0;
}*/
int prime_number(int input)
{
    int i; // flag = 0;

    for(i=2; i <= input/2; i++)
    {
        if(input % i == 0)
       return 0;
    }

    return 1;
}
/*int prime_number_up_to_limit (int n)// N represent number of   prime_number to print
{
    int count=0,num =2;

    while(count < n)
    {
        if(prime_number(num))
            count++;
        printf("%d",num);
    }
    num++;
    return 0;
}
*/
int prime_number_up_to_limit(int limit)
{
    int count = 0, input = 2;

    while(count < limit)
    {
        if(prime_number(input)){ // check if it is a prime number
            count++; // keep track of prime numbers
            printf("%d \t", input); // display the prime number
        }

        input++; // choosing next number
    }
    printf("\n\n");
printf("%d\n\n",count);// Total prime number within a limit
    return 0;
}
// Write a C program to display and find the sum of the series 1+11+111+....111 up to n. For eg.
//if n=4, the series is: 1+11+111+1111. Take the value of 'n' as input from the user

   int find_sum_series(int digit)
   {
    int sum = 0, j = 0;
    if(digit < 0)
        return 1;
    for (int i = 0; i < digit; i++)
        {
        sum = sum + j;


        j = (j * 10) + 1;

        printf(" %d\t ",j);
    }
    printf(" = %d\n\n", sum);
    return 0;
   }
//A number is called an Armstrong number if the sum of the cubes of the digits of the number is equal to the number.
// For example 153 = 1^3 + 5^3 + 3^3. Write a C program that asks the user to enter a number and returns if it is Armstrong or not.

int checkForArmstrong(int num)
{
  int sum = 0, remainder,temp =num;
  while (num != 0)
    {
    remainder = num % 10;
    sum = sum + (remainder * remainder * remainder);
    num = num / 10;
  }
  if(sum == temp)
    printf("the entered number is Armstrong  Number : %d \n\n",temp);
  return 0;
}
int divsum(int );
int divSum(int n)
{
    int result = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (i == (n / i))
                result += i;
            else
                result += (i + n/i);
        }
    }

     return (result + 1);
}


 int  areAmicable(int x, int y)
{
    if (divSum(x) == y)
       printf( "Entered numbers are amicable\n");
      else
       printf("Entered numbers are not amicable\n" );
      return 0;
}

// Write a menu driven program to read two integers & find their sum, difference & product
int sum_difference_product(int a, int b)
{
    int ch ,sum,diff,product;
    printf("enter the your choice :");
scanf("%d",&ch);
switch(ch)
{
 case 1:  sum = a+b;
    printf("The sum is: %d\n" ,sum);
    break;
case 2 : diff = a - b;
    printf("The difference is : %d\n",diff);
    break;
case 3: product = a*b;
  printf(" The product is : %d\n",product);
  break;
default :
    printf("given choice is wrong\n");


}

return 0;
}
// Write a C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone.
// Ask the user which one s/he wants to calculate, and take the appropriate required inputs.
//Then print the result. The input should be taken in the main function and calculations for every solid should be done in a separate function by passing appropriate arguments.
// Example: If the user chooses the option for cube, only one input is required i.e., the side. The volume is then calculated and printed.
//If the user chooses the option for cuboid, only three inputs are required i.e., length, breadth and height.
//The volume is then calculated and printed.
int volume_of_shape( int a, int r, int h ,int l,int b)
{
    int ch;
    float res;

 printf("Select the shape for calculate volume\n");
  printf("Press 1 for select CUBE\n");
  printf("Press 2 for select CUBOID\n");
  printf("Press 3 for select CYLINDER\n");
  printf("Press 4 for select SPHERE\n");
  printf("Press 5 for select CONE\n");
  scanf("%d",&ch);

   switch(ch)
     {
         case 1: res=cube(a);
                printf(" The volume of cube is :%f\n",res);
                break;
         case 2: res=cuboid(l,b,h);
                printf(" The volume of cuboid is :%f\n",res);
                 break;
         case 3: res=cylinder(r,h);
                 printf(" The volume of cylinder is :%f\n",res);
                break;
         case 4: res=sphere(r);
                printf(" The volume of sphere is :%f\n",res);
                 break;
         case 5: res=cone(r,h);
                 printf(" The volume of cone is :%f\n",res);
                  break;
         default: printf("Wrong input");

     }
     printf("\n\n");
     return 0;

     }
     float cube(int a)
     {
         int v;
         v =a*a*a;
       return v;
     }
     float cuboid(int l, int b, int h)
     {   int v;
          v=l*b*h;
          return v;
     }
     float cylinder(int r, int h)
     {
         int v;
         v =PI*r*r*h;
         return v;
     }
     float sphere( int r)
     {
        int v;
        v=(4*PI*r*r*r)/3;
        return v;
     }
     float cone(int r, int h)
     {
         int v;
       v = (PI*r*r*h)/3;
       return v;
     }
/* An Electricity board charges the following rates for use of electricity.
 For the First 200 units : Rs 1 per unit  For the next 100 units : Rs 1.5 per unit
Beyond 300 units : Rs 2 Per unit.
Write a C Program to read no of unit consumed and print out total charge amount
*/

int unit_price(int unit)
{
   int extra ;
   float Total_price;
  if(unit <=200)
  {
    Total_price = unit * 1;
    printf(" Total Amount price is: %f\n",Total_price);
  }
 else if(unit >200 && unit <=300)
   {
     extra = unit -200;
     Total_price = (extra * 1.5) + 200 * 1;
     printf(" Total Amount price is: %f\n",Total_price);
 }
 else if (unit > 300)
 {
   extra = unit -300;
   Total_price = (extra * 2) + 100 * 1.5 +200 *1;
   printf(" Total Amount price is: %f\n",Total_price);
 }

return 0;
}
