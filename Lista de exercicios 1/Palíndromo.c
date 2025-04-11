#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int palindromo(char str[],int inicio,int fim);

int main(){
char palavra[100];


printf("Digite uma palavra");
scanf("%s", palavra);

bool resultado = palindromo(palavra,0,strlen(palavra)- 1);

if(resultado){
    printf("true\n");
}else{
    printf("false\n");
}


return 0;
}

int palindromo(char str[],int inicio,int fim){
if(inicio >= fim){
    return true;
}


 if(str[inicio] !=  str[fim]){
    return false;
 }
 return palindromo(str,inicio + 1,fim - 1);

}




