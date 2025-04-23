#include <assert.h>
#include <stdio.h>
#include  "soma.h"

int main() {
  assert(somar(2, 3) ==5);
  assert(somar(-1, 1) == 0);
  assert(soma(0, 0) == 0);

  printf("Todos os testes passaram!\n");
  return 0;
}
