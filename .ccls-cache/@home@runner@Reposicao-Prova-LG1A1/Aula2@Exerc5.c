#include <stdio.h>
#include <stdlib.h>

int gastosJaneiro, gastosFevereiro, gastosMarco, gastosTrimestre;

int main ()
{
  gastosJaneiro = 20000;
  gastosFevereiro = 25000;
  gastosMarco = 30000;
  gastosTrimestre = (gastosJaneiro + gastosFevereiro + gastosMarco);
  printf("%d", gastosTrimestre);
  
  return 0;
} 