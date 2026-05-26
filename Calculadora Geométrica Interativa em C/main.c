#include <stdio.h>
#include <stdlib.h>
 float areaQ(float lado){
  return lado*lado;
 }
 float areaC(float raio){
  return 3.14*raio*raio;
 }
 float areaR(float base,float altura){
  return base*altura;
 }
 void menu(){
 printf("Menu de Geometria!\n");
 printf("1-Área do quadrado\n2-Área do círculo\n3-Área do retângulo\n4-Sair\n");
 }

int main()
{
int escolha;
float q,c,a,b,resultado;
do{
    menu();
    scanf("%d",&escolha);
    switch(escolha){
    case 1:
      printf("Digite o lado do quadrado:\n");
      scanf("%f", &q);
      resultado=areaQ(q);
      printf("a área é: %.2f",resultado);break;
    case 2:
      printf("Digite o raio do circulo:\n");
      scanf("%f", &c);
      resultado=areaC(c);
      printf("a área é: %.2f\n",resultado);break;
    case 3:
      printf("Digite a altura do retângulo:\n");
      scanf("%f", &a);
      printf("Digite a base do retângulo:\n");
      scanf("%f", &b);

      resultado=areaR(a,b);
      printf("a área é: %.2f\n",resultado);break;
    case 4:
    printf("Saindo.....\n");break;
    default:
      printf("Opçao inválida!\n");
    }
    printf("pressione enter para continuar!\n");
    getchar();
    getchar();
    system("clear");
 }while(escolha!=4);
    return 0;
}
