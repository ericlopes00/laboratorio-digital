#include <stdio.h>
#include <stdlib.h>
int qtd(){
 int alunos;
 printf("Quantos alunos tem nessa turma?\n");
 scanf("%d", &alunos);
 printf("\n");
 return alunos;

}

void nomes(int alunos, char mat[][50]){
  for(int i=0;i<alunos;i++){
    printf("Digite o nome do aluno %d:\n", i+1);
    scanf(" %[^\n]",&mat[i]);
  }
  printf("\n");
}

void notas(int alunos,char mat[][50],float vetN[]){
  for(int i=0;i<alunos;i++){
    printf("Digite a nota do(a) %s :\n", mat[i]);
    scanf("%f", &vetN[i]);
  }
  printf("\n");
}
void media(int alunos, float vetN[]){
  float soma=0;
  for(int i=0;i<alunos;i++){
    soma+=vetN[i];
   }
    printf("a media eh: %.2f", soma/alunos);
  printf("\n");
}

void mostrar(int alunos,char mat[][50],float vetN[]){
  printf("RESULTADO!!\n");
  for(int i=0;i<alunos;i++){
    if(vetN[i]>=6){
    printf("%s | %.2f--> Aprovado(a)!!\n",mat[i],vetN[i]);
    }
    else{
    printf("%s | %.2f--> Reprovado(a)!!\n",mat[i],vetN[i]);
    }
  }
  printf("\n");
}

int main()
{
    int tamanho;
    char mat[100][50];
    float vetN[100];

    tamanho=qtd();
    nomes(tamanho,mat);
    notas(tamanho,mat,vetN);
    media(tamanho,vetN);
    mostrar(tamanho,mat,vetN);
    
    return 0;
}
