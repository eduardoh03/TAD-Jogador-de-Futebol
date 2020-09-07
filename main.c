#include <stdio.h>
#include "jogador.h"

int main(void) {
  int quantJog;
  int i,w,x,y,z;
  
  jogador tabela;
  tabela = iniciarTabela(tabela.codigo,tabela.jogos, tabela.gols, tabela.assistencias);

  /*printf("Codigo: %d\n", tabela.codigo);
  printf("Jogos: %d\n", tabela.jogos);
  printf("Gols: %d\n", tabela.gols);
  printf("Assistencias: %d\n", tabela.assistencias);
  imprimir(tabela);*/

  printf ("Quantos jogadores deseja cadastrar?");
  scanf("%d",&quantJog);
  jogador num[quantJog];

  for (i = 0; i < quantJog; i++){
    printf("Dados dos Jogadores:\n");
    printf("Digite o codigo do jogador: ");
    scanf("%d", &num[i].codigo);
    printf("Numero de jogos: \n");
    scanf("%d", &num[i].jogos);
    printf("Numero de gols: \n");
    scanf("%d", &num[i].gols);
    printf("Numero de assistencias: \n");
    scanf("%d", &num[i].assistencias);
}
  for(i = 0; i < quantJog; i++){
    printf("\n\nDados dos Jogador %d\n\n", i+1);
    printf("Codigo do Jogador: %d\n", num[i].codigo);
    printf("Numero de jogos na temporada: %d\n",num[i].jogos);
    printf("Numero de gols realizados: %d\n",num[i].gols);
    printf("Numero de assistencias: %d\n",num[i].assistencias);
}

}
