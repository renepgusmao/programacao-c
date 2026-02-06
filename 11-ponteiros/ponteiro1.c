#include <stdio.h>

int main(void) {
  // valor é a variável que será apontada pelo ponteiro
  int valor=27;

  // declaração de variável ponteiro
  int *ptr;

  // atribuindo o endereço da variável valor ao ponteiro
  ptr = &valor;

  printf("Utilizando ponteiros\n\n");
  printf("Conteudo da variavel valor: %d\n", valor);
  printf("Endereço da variavel valor: %p \n", &valor);
  printf("Conteudo da variavel ponteiro ptr: %p\n", ptr);
  printf("Conteudo da variavel ponteiro ptr: %d\n", *ptr);
  
  *ptr = 100;

  printf("Conteudo da variavel valor: %d\n", valor);
  printf("Endereço da variavel valor: %p \n", &valor);
  printf("Conteudo da variavel ponteiro ptr: %p", ptr);

  return 0;
}
