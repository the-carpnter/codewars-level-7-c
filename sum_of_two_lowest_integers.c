#include <stddef.h>

long sum_two_smallest_numbers(size_t n, const int num[n]) {

  long a, b;
  if (num[0] < num[1]) {
    a = num[0];
    b = num[1];
  } else {
    b = num[0];
    a = num[1];
  }
  
  for (size_t i = 2; i < n; i++){
    if (num[i] < b) b = num[i];
    if (num[i] < a) {
      b = a;
      a = num[i];
    }
  }
  
  return a + b;
}
