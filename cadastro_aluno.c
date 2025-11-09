#include <stdio.h>


int main(){
   int idade, matricula;
   float altura;
   char nome [50];
  
  
   printf("digite sua idade: \n" );
   scanf("%d", &idade);

   printf("digite sua altura: \n");
   scanf("%f", &altura);

   printf("digite seu nome: \n");
   scanf("%s", &nome);

   printf("digite sua matrícula: \n");
   scanf("%d", &matricula);

   printf("nome do aluno: %s\nmatrícula: %d\n", nome, matricula);
   printf("idade do aluno: %d\naltura: %f\n", idade, altura);

   return 0;











}
