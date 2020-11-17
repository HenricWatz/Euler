// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Brute force
int main (int argc, char *argv[])
{
    int common_product = 1;
    bool done = false;
    int i = 0;

    while (i < 20)
    {
        for (i = 1; i <= 20; i++)
        {
            if (common_product % i != 0)
            {
                common_product += 1;
                break;
            }
        }
    }
    
    printf("Smallest multiple: %d", common_product);

    return 0;
}

