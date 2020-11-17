// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[])
{
    int sum;
    int guess;

    sum = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (((i % 3) == 0) || ((i % 5) == 0))
        {
            sum = sum + i;
        }
    }

    printf("The sum is %d", sum);

    return 0;
}