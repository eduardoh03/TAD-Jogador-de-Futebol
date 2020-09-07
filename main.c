#include <stdio.h>
#include "jogador.h"

int main(void) {
  int quantJog;
  int i,w,x,y,z;
  
  jogador tabela;
  tabela = iniciarTabela(tabela.codigo,tabela.jogos, tabela.gols, tabela.assistencias);


  printf ("Quantos jogadores deseja cadastrar?");
  scanf("%d",&quantJog);

  for (i = 0; i < quantJog; i++){
    printf("\n\nJogador %d\n\n", i+1);
    printf("Digite o codigo do jogador: ");
    scanf("%d",&w);
    printf("Numero de jogos: \n");
    scanf("%d",&x);
    printf("Numero de gols: \n");
    scanf("%d",&y);
    printf("Numero de assistencias: \n");
    scanf("%d",&z);
    Atribui(&tabela, w, x, y, z);
    imprimir(tabela);
    ehBom(&tabela, x, y, z);
  }
}


