#include <stdio.h>
#include <stdlib.h>


int main()
{
    int escolha=1;

    int kane=0, mbappe=0, yamal=0, olise=0, haaland=0;
    printf("Vote no melhor jogador do mundo em 2026\n");

    while (escolha !=0) {
    printf("\n1-kane, \n2-mbappe \n3-yamal \n4-olise \n5-haaland \n0-encerrar a votaçao\n");
    printf("-----------------------------------\n");
    printf("digite o numero do seu vencedor\n");
    scanf("%d" , &escolha);
    if (escolha==1) {printf("votou no kane\n");kane++;}
    else if (escolha==2) {printf("votou no mbappe\n");mbappe++;}
    else if (escolha==3) {printf("votou no yamal\n");yamal++;}
    else if (escolha==4) {printf("votou no olise\n");olise++;}
    else if (escolha==5) {printf("votou no haaland\n");haaland++;}
    else if (escolha==0) {printf("votaçao encerrada!\n");}
    else {printf("voto invalido\n");}
    printf("pressione enter para continuar");
    getchar();
    getchar();
   system("clear");
    }
    system("clear");
    printf("---------------------------\n");
     printf("VOTAÇAO APURADA!\n");
     printf("E O VENCEDOR DA BOLA DE OURO EH.....");
     if (kane>mbappe && kane>yamal && kane>olise && kane>haaland) {printf("KANE");}
     else if (mbappe>kane && mbappe>yamal && mbappe>olise && mbappe>haaland) {printf("MBAPPE");}
     else if (yamal>mbappe && yamal>kane && yamal>olise && yamal>haaland) {printf("YAMAL");}
     else if (olise>mbappe && olise>yamal && olise>kane && olise>haaland) {printf("OLISE");}
     else if (haaland>mbappe && haaland>yamal && haaland>kane && haaland>kane) {printf("HAALAND");}
     else {printf("empate! refaça a votaçao");}

     return 0 ;


}
