#include "algo.h"
#include <stdio.h>
#include <math.h>


long fibonacci (const int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int reverse(const int n)
{
    int reversed = 0;
    int temp = n;

    while (temp != 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return reversed;
}

int is_prime(const int number)
{
    if (number <= 1)
    {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int prime_factor(const int n)
{
    int PrimeF = -1;
    int temp = n;

    if (temp % 2 == 0)
    {
        PrimeF = 2;

        while (temp % 2 == 0)
        {
            temp = temp / 2;
        }
    }

    for (int i = 3; i <= sqrt(temp); i += 2)
    {
        while (temp % i == 0)
        {
            PrimeF = i;
            temp = temp / i;
        }
    }

    if (temp > 2)
    {
        PrimeF = temp;
    }
    return PrimeF;
}

int prime_sum(const int n)
{
    int i, j;
    int sum = 0;

    for (i = 1; i <= 1000; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (i == j) {
            sum += i;
        }
    }

    return sum;
}