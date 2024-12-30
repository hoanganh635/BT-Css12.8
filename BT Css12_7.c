#include <stdio.h>

int uocchung (int num1, int num2);

int main(){
  int num1 = 252, num2 = 105;
  int cgv = uocchung (num1, num2);

  printf("UCLN cua %d va %d la %d\n", num1, num2, cgv);
  return 0;
}


int uocchung (int num1, int num2) {
  while (num1 != num2) {
    if (num1 > num2) {
      num1 -= num2;
    } else {
      num2 -= num1;
    }
  }
  return num1;
}
