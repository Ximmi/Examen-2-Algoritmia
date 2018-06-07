#include <stdio.h>

/*definir una funcion que reciba como argumento dos enteros y devuelva su producto, pero, no puedes utilizar el operador aritmético de multiplicación*/
int producto(int n1, int n2,int suma);
int main(){

   int n1, n2;
   printf("Teclea el numero a multiplicar\n");
   scanf("%d", &n1);
   printf("Teclea el numero por el que sera multiplicado\n");
   scanf("%d", &n2);
   printf("Su producto es: %d\n", producto(n1, n2, 0));
   
return 0;
}

int producto(int n1, int n2, int suma){

   if(n2){
      
      suma=suma+n1;
      n2--;
      producto(n1, n2, suma);     
   }
   
   if(n2==0)
      return suma;
}
