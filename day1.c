#include<stdio.h>
#include<math.h>
#include "day1.h"
#define PI 3.14
//Write a program that converts upper case to lower.
 int convert_upper_to_lower( char ch )
 {
      if( ch >='A' &&  ch <='Z')
      {
        ch+= 32;
         printf("%c\n",ch);

      }
      return 0;
 }
// Write a program to calculate the area of circle.
 int area_of_circle( int  r)
 {
     float area ;

     area= PI * r * r;
     printf("%f\n",area);
     return 0;
 }
//Write a program to calculate simple and compound interest
int simple_interest(int p ,float t , float r)
{
   float simple_interest_amount;
   simple_interest_amount =( p * t *r)/100;
   printf("%f\n",simple_interest_amount);
   return 0;
}
 int compound_interest( int p , float r, int n)
 {
   float   compound_interest_amount;

      compound_interest_amount = p * pow((1 + r/100),n);
      printf("%f\n",compound_interest_amount);
      return 0;

 }
 //Write a program to convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius
int Celsius_to_Fahrenheit(int c )
{
    float f;

     f = (9/5 * c) + 32 ;

     printf("%f\n",f);
     return 0;
}
 int Fahrenheit_to_Celsius(int  f)
  {
      float c;  //final celsius value

      c  = (9/5 * f) - 32 ;
      printf("%f\n",c);
      return 0;
  }
 //Check if entered number is even or odd.
  int even_or_odd(int n )
  {
      if(n %2 == 0)
        printf("the number is even : %d\n",n);
      else
       printf("the number is odd : %d\n",n);
return 0;

  }
//  Check if entered year is leap year or not.
int number_is_leap_or_not(int year)
{
if((year%4==0) && ((year%400==0) || (year%100!=0)))
         printf("it is leap year: %d\n",year);
    else
        printf("it is not a leap year : %d" , year);
    return 0;

}
