// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int next_fib(int old_last, int last);

int main (int argc, char *argv[])
{
    int sum;

    sum = next_fib(1, 2);

    printf("the sum is %d", sum);

    return 0;
}

int next_fib(int old_last, int last)
{
    int sum;
    if (last > 4000000)
    {
        return 0;
    }
    else
    {
        sum = next_fib(last, (last + old_last));
        if ((last % 2) == 0)
        {
            return sum + last;
        }
        else
        {
            return sum;
        }
    }
}