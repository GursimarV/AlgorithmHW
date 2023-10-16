#include "algo.h"
#include <assert.h>

int main(void)
{
  long answer1 = fibonacci(6);
  assert(answer1 == 8);

  int answer2 = reverse(123);
  assert(answer2 == 321);

  int answer3 = prime_factor(12);
  assert(answer3 == 3);

  int answer4 = prime_sum(12);
  assert(answer4 == 28);
  return 0;

}

long fibonacci (const int n)
{
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int reverse(const int n)
{
    int reversed = 0;
    int temp = n;

    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return reversed;
}

int is_prime(const int number) {
    if (number <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int prime_factor(const int n) {
    int largestPrime = 1;

    if (n <= 1) {
        return -1; // Invalid input
    }

    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && is_prime(i)) {
            largestPrime = i;
        }
    }
    return largestPrime;
}

int prime_sum(const int n)
{
    int sum = 0;

    for (int i = 2; i < n; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    return sum;
}