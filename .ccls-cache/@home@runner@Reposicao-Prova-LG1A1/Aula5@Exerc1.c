#include <stdio.h>
#include <stdlib.h>


int main ()
{
  int    nro, resto;
  system ("cls");
	 nro = 7341;
	 while ( nro != 0 )
	 {
    resto  = nro % 10;
    nro    /= 10;
    printf ("%d " , resto);
	 }
      printf ("\n");
      system ("pause");
  
	return 0;
}