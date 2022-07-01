#include <stdio.h>
#include <stdlib.h>

// Exercício 2, alternativa e
int main () {
  
  char c; 
  int i=0; 
  
  printf("\nEntre com um texto: "); 

  while	(   ( c=getchar() ) != 10	) 
  i++; 
  
  printf("\n%d\n",i); 
  
  return 0;
}

//A frase "Salve o Palmeiras!" ocupda 18 posições, sendo o S a posição 0 e ! a posição 18