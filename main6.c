#include <stdio.h>
#include <stdlib.h>
#include"assert.h"
#include "day6.h"

/*int main()
{
  assert(student_details(0)==0);
  */ //Write a program to add, subtract and multiply two complex numbers using structures
typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);
 complex sub(complex n1, complex n2);
complex mul(complex n1, complex n2);
int main() {
    complex n1, n2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);
    result = sub(n1,n2);
    printf("Sub = %.1f - %.1fi\n", result.real, result.imag);
    result = mul(n1,n2);
    printf("mul = %.1f * %.1fi", result.real, result.imag);

    return 0;
}

 complex add(complex n1, complex n2)
 {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
 complex sub(complex n1, complex n2)
 {
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}
complex mul(complex n1, complex n2)
 {
    complex temp;
    temp.real = n1.real * n2.real;
    temp.imag = n1.imag * n2.imag;
    return (temp);
}

  //  return 0;
//}
