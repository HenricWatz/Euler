// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[])
{
    long long input_number = 600851475143;
    long long largest_prime = 0;
    int i = 0;

    printf("Prime numbers of %lld: ", input_number);
    while ((largest_prime + i) < input_number)
    {
        i += 1;

        if ((input_number % (largest_prime + i)) == 0)
        {
            largest_prime += i;
            i = 0;
            
            input_number = input_number / largest_prime;
            printf("%lld, ", largest_prime);
            
        }
    }

    return 0;
}