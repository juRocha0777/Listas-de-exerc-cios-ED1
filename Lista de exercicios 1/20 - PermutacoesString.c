#include <stdio.h>
#include <string.h>


void permutar(char str[],int inicio,int fim);
void trocar(char *a, char *b);


int main() {
    char str[] = "abc";
    int tamanho = strlen(str);
    permutar(str, 0 ,tamanho - 1);
    
    
    
    
    return 0;
}

void trocar(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}


void permutar(char str[],int inicio ,int fim){
    if(inicio == fim){
        printf("%s\n", str);
    }else{
        for(int i = inicio; i <=fim; i++){
            trocar(&str[inicio],&str[i]);
            
            permutar(str,inicio + 1, fim);
            
            trocar(&str[inicio], &str[i]);
        }
    }
}