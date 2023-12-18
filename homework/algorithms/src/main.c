#include "algo.h"
#include <assert.h>

int main(void)
{
  long answer1 = fibonacci(6);
  assert(answer1 == 8);

  long answer2 = reverse(123);
  assert(answer2 == 321);

  int answer3 = prime_factor(12);
  assert(answer3 == 3);

  int answer4 = prime_sum(12);
  assert(answer4 == 28);
  return 0;

}