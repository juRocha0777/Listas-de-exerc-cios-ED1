#include <stdio.h>

int carac(char *texto);

int main(){
  char texto[100];
    
     fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto , "\n")] = 
    '\0';
    
    int resultado = carac(texto);
    
    printf("A string tem %d caracteres.\n", resultado);


return 0;
}

int carac(char *texto){
  if(*texto == '\0'){
   						 return 0;
}
    					return 1 +carac(texto + 1);



}
