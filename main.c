#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  char nome[99];
  int idade;
  float salario;
  float salariofinal;

  printf("Qual é o seu nome? ");
  scanf("%s", nome);

  printf("Qual é a sua idade? ");
  scanf("%d", &idade);

  printf("Qual é o seu salário? ");
  scanf("%f", &salario);

  salariofinal = (salario * 1.3);

  printf("O seu nome é %s, você tem %d anos e seu salário com o aumento será de R$ %f \n", nome, idade, salariofinal);
}