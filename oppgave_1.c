#include <stdio.h>

int main() {
  int sum = 0;
  for (int i = 0; i <= 100; i++) {
    sum += i * i;
  }
  printf("Summen av kvadratene av de 100 første heltallene er %d\n", sum);
}
