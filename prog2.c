#include <stdio.h>

/*definir una funcion que reciba como argumento un entero e imprima todos los multiplos de 4 entre 0 y el numero recibido como argumento*/

void multiplos(int n);
int main(){

   int n;
   printf("Teclee el numero hasta el que se proporcionara los multiplos de 4\n");
   scanf("%d", &n);
   printf("Los multiplos de 4 hasta el %d son:\n", n);
   multiplos(n);

return 0;  
}

void multiplos(int n){
   int i;
   
   for(i=0; i<n; i++)
      if(i%4==0)
          printf("%d\n", i);
      
}


