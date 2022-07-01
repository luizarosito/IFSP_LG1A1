#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char oper;
  int senha;
  
  printf("\nDigite sua senha: " );
  scanf("%d", &senha);
  
  if (senha == 1310) {
    
    printf("\nEscolha uma operação: \na =  saldo\nb = depósito \nc =  pagamentos\nd =  transferências\ne =  sair \n" );
    scanf("%c", &oper);
    
    switch(oper)
    { 
      case 'a': 
        printf("\nOperação : saldo");
      break;
      case 'b': 
        printf("\nOperação : depósito");
      break;
      case 'c': 
        printf("\nOperação : pagamento");
      break;
      case 'd': 
        printf("\nOperação : transferência");
      break;
      case 'e': 
        printf("\nEncerrando operações");
      break;
    } 
  }
    
  else {
    
    printf("\nSenha incorreta.");
    
  }
  
  return 0;
}