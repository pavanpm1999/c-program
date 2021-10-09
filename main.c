#include <assert.h>
#include "day1.h"

int main()
{

    assert(convert_upper_to_lower('A')== 0);
    assert(area_of_circle(4) == 0);
    assert (simple_interest(100,2.2,2)== 0);
    assert( compound_interest(100,2.2,2) == 0);
    assert(Celsius_to_Fahrenheit(100)== 0);
    assert(Fahrenheit_to_Celsius(100)== 0);
    assert(even_or_odd(5) == 0);
    assert( number_is_leap_or_not(2012) == 0);
        return 0;
}
