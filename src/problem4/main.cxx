// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkCandidate3Digit(int candidate);
int checkCandidate2Digit(int candidate);

int main (int argc, char *argv[])
{
    int candidate;

    // 2-digit
    // Largest sum of two 2-digit numbers is 99 * 99 = 9801 thus largest candidate is 9779
    candidate = 9779;
    for (int i = 0; i < 100 && candidate > 1001; i++)
    {
        // Check candidate
        if (checkCandidate2Digit(candidate) != 0)
        {
            break;
        }

        // Calculate next candidate
        if (candidate % 1000 < 10)
        {
            candidate -= 11;
        }
        else
        {
            candidate -= 110;
        }  
    }


    // 3-digit
    // Largest sum of two 3-digit numbers is 999 * 999 = 998001 thus largest candidate is 997799
    candidate = 997799;
    for (int i = 0; i < 100; i++)
    {
        // Check candidate
        if (checkCandidate3Digit(candidate) != 0)
        {
            break;
        }

        // Calculate next candidate
        if (candidate % 10000 < 10)
        {
            candidate -= 11;
        }
        if (candidate % 10000 < 100)
        {
            candidate -= 110;
        }
        else
        {
            candidate -= 1100;
        }
    }

    return 0;
}

// Check if candidate is product of two 3-digit numbers
int checkCandidate3Digit(int candidate)
{
    for (int i = 999; (i > 100 && (candidate / i < 999)); i = i - 1)
    {
        if (candidate % i == 0)
        {
            printf("3-Digit: %d *  %d = %d\n", (candidate / i), i, candidate);
            return 1;
        }
    }

    return 0;
}

// Check if candidate is product of two 2-digit numbers
int checkCandidate2Digit(int candidate)
{
    for (int i = 99; (i > 10 && (candidate / i < 99)); i = i-1)
    {
        if (candidate % i == 0)
        {
            printf("2-Digit: %d *  %d = %d\n", (candidate / i), i, candidate);
            return 1;
        }
    }

    return 0;
}