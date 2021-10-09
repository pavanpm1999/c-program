#include <stdio.h>
#include"day3.h"
#include <assert.h>
#include <math.h>

int main()
{
    assert(binary_to_decimal(111) == 0);
    assert(decimal_to_Binary(7)==0);
    assert(sumOfPrevK( 10, 3)==0);
    assert(sketch(9)== 0);
    assert(getSum(12)==0);
  int result = power(3, 3);
  printf("%d\n",result);
   assert( power(3,3)== result);
   int factor = multiplyNumbers(4);
   printf("%d\n",factor);
      assert(multiplyNumbers(4)== factor);
      assert(evaluate(5,2)== 0);
//Concatenate two integer values using macros
#define concat(a, b,c) a##b##c
    int xyz = 301;
    printf("%d\n", concat(x,y,z));

    assert(square(16)==0);
    assert (mathematical(10,2)== 0);
    return 0;
}
