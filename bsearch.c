#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int my_bsearch(int* array, int len, int x)
{
  int left, right;
  if (array[len-1] <= x) return -1;

  left = 0, right = len-1;
  while (left < right)
  {
    int middle = (left+right)/2;
    if (array[middle] <= x) {
      left = middle + 1;
    } else {
      right = middle;
    }
  }

  return left;
}

int main(void) {
  int array[] = {1,1,3,5,6,7,7};
  for (int i = 0; i < 10; i++) {
    int index = my_bsearch(array, 7, i);
    printf("Index of the first item greater than %d is %d\n", i, index);
  }
  return 0;
}
