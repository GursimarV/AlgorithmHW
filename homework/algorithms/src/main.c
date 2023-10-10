#include "algo.h"
#include <assert.h>

int main(void) {
  long answer1 = fibonacci(6);
  assert(answer1 == 8);
    int n, t1 = 0, t2 = 1, nextTerm = 0, i;
    printf("Enter the n value: ");
    scanf("%d", &n);
    if(n == 0 || n ==1)
        printf("%d", n);
    else
        nextTerm = t1 + t2;
    for(i = 3; i <= n; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
    }
    printf("%d", t2);

  long answer2 = reverse(123);
  assert(answer2 == 321);
    int reverse = 0;

    printf("Enter a number to reverse\n");
    scanf("%d", &n);

    while (n != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n = n/10;
    }

    printf("Reverse of the number = %d\n", reverse);

  int answer3 = prime_factor(12);
  assert(answer3 == 3);

    long int n;
    n = answer3;
    long int div=2, ans = 0, maxFact;
    while(n!=0) {
        if(n % div !=0)
            div = div + 1;
        else {
            maxFact = n;
            n = n / div;
            if(n == 1) {
                printf("%d is the largest prime factor !",maxFact);
                ans = 1;
                break;
            }
        }
    }

  int answer4 = prime_sum(12);
  assert(answer4 == 28);
    char *temp;
    unsigned i, j;
    size_t num = 10000;
    unsigned long long sum = 0ULL;

    temp = calloc(num, sizeof *temp);
    for (i = 2; i < num; i++) {
        if (!temp[i]) {
            sum += i;
            for (j = i*2; j < num; j += i) {
                temp[j] = 1;
            }
        }
    }
    free(temp);
    printf("%llu\n", sum);
    return 0;
  return 0;
}
