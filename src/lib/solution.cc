#include "solution.h"

void Solution::swap_by_reference(int &input1, int &input2) {
  int temp = input1;
  input1 = input2;
  input2 = temp;
}

void Solution::swap_by_pointers(int *input1, int *input2) {
  int temp = *input1;
  *input1 = *input2;
  *input2 = temp;
}
