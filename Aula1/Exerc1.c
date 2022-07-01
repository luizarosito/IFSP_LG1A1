#include <stdio.h>


int main () {
  float p1, p2, t, m;
  
  printf("\n Digite a nota da prova 1: ");
  scanf("%f", &p1);
  
  printf("\n Digite a nota da prova 2: ");
  scanf("%f", &p2);
  
  printf("\n Digite a nota do trabalho: ");
  scanf("%f", &t);
  
  m = (p1 + p2 + t) /3;
  
  printf("\n A média do aluno é = %f ", m);
  
}