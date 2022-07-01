#include<stdio.h>
#include<locale.h>

int main() {
  
  int num,cont,resul;
  
  setlocale(LC_ALL,"Portuguese");
  
  printf("\n Informe um número para imprimir a tabuada: \n");
  scanf("%d",&num);

    if(num>=1 && num<=10){
      
     for(cont=1;cont<=10;cont++)
        {
          resul=(num*cont);
          printf("\t %d * %d =%d\n ",num,cont,resul);
        }
    } else

    printf("\n o número não está entre 1 e 10");

return 0;
}