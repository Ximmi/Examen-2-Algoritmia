#include <stdio.h>

/*definir una función recursiva que reciba como argumento un caracter que debera ser una letra mayuscula y la funcion debera imprimir todas las letras mayusculas de la A hasta el caracter recibido*/

void imprimir(char c);

int main(){
   char c;
   printf("Teclea una letra mayuscula\n");
   c=getchar();

   imprimir(c);
   puts("\n");
}

void imprimir(char c){

   if(c>='A' && c<='Z'){
   imprimir(c-1);
   printf("%c", c);
   }

}


