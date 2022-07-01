#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int dia, mes, ano, x;
    
  printf("\nData de nascimento: ");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  
  x = dia*100+mes+ano;
    
    switch( (x/100 + x%100)%5 ) {
      
      case 0: 
        printf("tímido"); 
      break;
      case 1: 
        printf("sonhador");
      break;
      case 2: 
        printf("paquerador");
      break;
      case 3: 
        printf("atraente");
      break;
      case 4: 
        printf("irresistível");
      break;
  }
  
  return 0;
}