#include <stdio.h>
#include <string.h>

#define MAX 100

void gerar(char *str,int pos,int n,int abertos,int fechados);

int main(){
   int n;
   char str[MAX] = {0};
   
   printf("Digite o valor de n: ");
   scanf("%d",&n);
   
   gerar(str,0,n,0,0);
   
   return 0;
}

void gerar(char *str,int pos,int n,int abertos,int fechados){
   if(fechados == n){
      str[pos] = '\0';
      printf("%s\n",str);
      return;
   }

   if(abertos < n){
      str[pos] = '(';
      gerar(str,pos + 1,n,abertos + 1,fechados);
   }

   if(fechados < abertos){
      str[pos] = ')';
      gerar(str,pos + 1,n,abertos,fechados + 1);
   }
}