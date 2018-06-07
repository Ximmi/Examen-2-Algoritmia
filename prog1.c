#include <stdio.h>

/*reciba como argumento un entero entre el 0 y 255 y debera devolver el caracter ascii asociado al entero recibido*/

void devolver(int n);
int main(){

   int n;
   printf("Dame un numero entre el 0 y 255\n");
   scanf("%d", &n);
   devolver(n);

return 0;
}

void devolver(int n){

   if(n>=0 && n<=255)
      printf("Su caracter ASCII es %c\n", n);
   else{
      printf("No es un numero o caracter valido\n");
      main();
   }
}

