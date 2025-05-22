
#include "Counter.h"

void Counter::increment()
{
    count++;
}
void Counter::decrement()
{
    count--;
}
int Counter::get_value() const
{
    return count;
}


