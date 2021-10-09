#include <stdio.h>
#include<assert.h>
#include"day7.h"
int main()
{
    assert(malloc_allocation(6)==0);
    assert(findLargest(6)==0);
    assert(findsmallest(5)==0);
    assert(sum_of_array(5)==0);
    assert(sum_of_array_even_and_odd(5)==0);
    assert(palindrome(3)==0);
    assert(memory_deallocation(5)==0);
            return 0;
}
