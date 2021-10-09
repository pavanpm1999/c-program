#include <assert.h>
#include "day2.h"

int main()
{
    assert(sum_of_digit(11)==0);
    assert(reverse_digit(1234 )== 4321);
    assert(occurrence_of_number(1222 ,2) == 0);
    assert(palindrome_or_not(1441)== 0);
    assert(prime_number_up_to_limit(5)==  0);
     assert(prime_number(23)== 1);
     assert(find_sum_series(4) == 0);
     assert(checkForArmstrong(153) == 0);
    assert(areAmicable(220,284) == 0);
    assert (sum_difference_product(11, 11)==0);
    assert (volume_of_shape(1,2,3,1,4)==0);
    assert(unit_price(305)==0);
    return 0;
}
