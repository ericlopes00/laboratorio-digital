#include <stdio.h>
#include <stdlib.h>

int main()
{
int continuar=-1, voto1=0,voto2=0,voto3=0;
int vencedor=0, indice, vencedores=1;
char concorrentes[5][30]={"Kane","Mbappé","Olise","Dembelé","Yamal"};
int pontos[5]={0,0,0,0,0};
printf("Senhoras e senhores, esta começando a votaçao da BOLA DE OURO 2026!\n");
printf("\n");
printf("A votaçao vai funcionar da seguinte forma:\n-Vote no seu top 3\n-O primeiro colocado ganha 5 pontos\n-O segundo ganha 3 pontos\n-O terceiro ganha 1 ponto\n");
printf("pressione enter para continuar\n");
getchar();
system("clear");
printf("VOTAÇAO BOLA DE OURO 2026\n");
 while(continuar !=0) {
  for(int i=0;i<5;i++){
    printf("%d-%s\n",i+1,concorrentes[i]);
  }
  printf("0-para encerrar a votaçao\n");
  printf("Digite seu primeiro colocado:\n");
  scanf("%d", &voto1);
    if(voto1==0){
    continuar=0;
    printf("Encerrando a votaçao...\n");break;
    }
  printf("Digite seu segundo colocado:\n");
  scanf("%d", &voto2);
  printf("Digite seu terceiro colocado:\n");
  scanf("%d", &voto3);
  if(voto1>=1 && voto1<=5 &&
     voto2>=1 && voto2<=5 &&
     voto3>=1 && voto3<=5){

     pontos[voto1-1] +=5;
     pontos[voto2-1] +=3;
     pontos[voto3-1] +=1;
    printf("Voto computado\n");
    }
  else{
    printf("voto invalido, faça novamente!\n");
    }

  printf("Pressione ENTER para o próximo jurado votar!\n");
  getchar();
  getchar();
  system("clear");
}

 printf("Pressione ENTER para continuar\n");
 getchar();
 getchar();
 system("clear");

 for(int i=0;i<5;i++){
  if(pontos[i]>vencedor){
    vencedor=pontos[i];
    indice=i;
    vencedores=1;
  }
  else if(pontos[i]==vencedor){
   vencedores++;
  }

  }
printf("RESULTADO FINAL!!!\n");
 if(vencedores>1){
  printf("houve um empate!Campeao nao foi determinado.\nEncontre mais jurados para votar!\n");
 }
 else{
 printf("RUFEM OS TAMBORES\n");
 printf("O VENCEDOR DA BOLA DE OURO 2026 É...... %s !!!!\n", concorrentes[indice]);
 }

    return 0;
}
