#include <stdio.h>

float Produto(m, n) {
  if (m == 1)
    return n;

  return n + Produto(m - 1, n);
}

int main(void) {
  float m, n;
  printf("Digite o valor de m: ");
  scanf("%f", &m);
  printf("Digite o valor de n: ");
  scanf("%f", &n);

  printf("O produto de %.2f x %.2f e: %.2f\n", m, n, Produto(m, n));
  return 0;
}