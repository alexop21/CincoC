#include <stdio.h>

int main(void) {
  float matriz[3][5];
  float maiorMedia,menorMedia;
  int somaMedia = 0;
  char aluno1[50],aluno2[50],aluno3[50];  
  // Inicio do laço para determinar os valores da matriz
  for(int i=0; i<3; i++){
    //Determinando a inserção das strings a partir das linhas
    if(i == 0){
    printf("Digite o nome do aluno 1:\n");
    scanf("%s",aluno1);
    }
    else if(i == 1){
      printf("Digite o nome do aluno 2:\n");
    scanf("%s",aluno2);
    }
    else if(i == 2){
      printf("Digite o nome do aluno 3:\n");
    scanf("%s",aluno3);
    }
    somaMedia=0;
    for(int j = 0 ; j<4; j++){
      //Inserção de notas do aluno
      printf("Digite o valor da nota %d: ",j+1);
      scanf("%f",&matriz[i][j]);
      somaMedia+=matriz[i][j];
    }
    //Cálculo e inserção da média na matriz
    matriz[i][4]=somaMedia/4;
    printf("===================\n");
  }
  //Definição de valores para calcular maior e menor
  maiorMedia=matriz[0][4];
  menorMedia=matriz[0][4]; 
printf("===================\n");
printf("ALUNOS E MÉDIAS\n");
    // Impressão dos nomes e médias
  for(int i=0; i<3;i++){
    if(i == 0){  printf("%s: \n Média:%2.f \n",aluno1,matriz[i][4]);
  
    }
    else if(i == 1){
 printf("%s:\n Média:%2.f \n",aluno2,matriz[i][4]);
      
    }
    else if(i == 2){
      printf("%s:\n Média:%2.f \n",aluno3,matriz[i][4]);
      }
      
      //Definição de maior e menor
      if(matriz[i][4]>maiorMedia){
        maiorMedia=matriz[i][4];
      }
      else if(matriz[i][4]<menorMedia){
        menorMedia=matriz[i][4];
      }
  }
  //Impressa o maior e menor media
printf("===================\n");
printf("ALUNOS COM MAIOR E MENOR MÉDIA\n");

  if(matriz[0][4]==maiorMedia){
    printf("%s: %2.f\n",aluno1,maiorMedia);
  }
  else if(matriz[1][4]==maiorMedia){
    printf("%s: %2.f\n",aluno2,maiorMedia);
    }
  else if(matriz[2][4]==maiorMedia){
    printf("%s: %2.f\n",aluno3,maiorMedia);
    }
  if(matriz[0][4]==menorMedia){
    printf("%s: %2.f\n",aluno1,menorMedia);
  }
  else if(matriz[1][4]==menorMedia){
    printf("%s: %2.f\n",aluno2,menorMedia);
    }
  else if(matriz[2][4]==menorMedia){
    printf("%s: %2.f\n",aluno3,menorMedia);
    }
   
  return 0;
}