#include <stdio.h>
#include <stdlib.h>


int main () 
{
  int sexo;
  float peso, altura, ideal;
  
  printf("\nDigite seu sexo: 1 - Femino ou 2 - Masculino " );
  scanf("%d", &sexo);
  
  if (sexo == 1){
    
    printf("\n Digite o seu peso: ");
    scanf("%f", &peso);
    
    printf("\n Digite a sua altura: ");
    scanf("%f", &altura);
    
    ideal = (peso * altura);
    
    if (ideal == 47.7) {
      
      printf("\nEstá com o peso ideal ");
      
    } 
      
      else if (ideal >= 47.7) {
        
      printf("\n Está acima do peso");
      } 
        
      else {
        
        printf("\n Está abaixo do peso");
      }
  }
    
  else if (sexo == 2){
    
    printf("\n Digite o seu peso: ");
    scanf("%f", &peso);
    
    printf("\n Digite a sua altura: ");
    scanf("%f", &altura);
    
    ideal = (peso * altura);
    
    if (ideal == 47.7) {
      
      printf("\nEstá com o peso ideal ");
    } 
      
      else if (ideal >= 47.7) {
        
      printf("\n Está acima do peso");
      } 
        
      else {
        
        printf("\n Está abaixo do peso");
      }
  }
}