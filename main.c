#include <stdio.h>
#include <stdlib.h>

int horas = 60, minutos = 1, segundos = 0, quantidadeSegundos;
int main() {
  asm(".intel_syntax noprefix       \n\
        mov eax, segundos           \n\
        mov ebx, minutos            \n\
        mov ecx, horas              \n\
        imul ebx, 60                \n\
        imul ecx, 3600              \n\
        add eax, ebx                \n\
        add eax, ecx                \n\
        mov quantidadeSegundos, eax \n\
        .att_syntax prefix          \n");

  printf("Quantidade de segundos:%d\n", quantidadeSegundos);
  return 0;
}
