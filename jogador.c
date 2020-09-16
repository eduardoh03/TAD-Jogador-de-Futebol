#include <stdio.h>
#include "jogador.h"

jogador iniciarTabela(int codigo, int jogos, int gols, int assistencias){
  jogador tabela;
  tabela.codigo = codigo;
  tabela.jogos = jogos;
  tabela.gols = gols;
  tabela.assistencias = assistencias;
  return tabela;
};

void imprimir(jogador tabela){
  printf("Olá, jogador codigo %d, em  %d jogos voce foi responsavel por %d gols e  %d assistencias\n\n" ,tabela.codigo,tabela.jogos, tabela.gols, tabela.assistencias);
  printg("VSF FABIO");
}
void Atribui(jogador* pjogador, int codigo, int jogos, int gols, int assistencias) {
    pjogador->codigo = codigo;
    pjogador->jogos = jogos;
    pjogador->gols = gols;
    pjogador->assistencias = assistencias;
}
void ehBom(jogador* pjogador, int jogos, int gols, int assistencias){
  if(gols + assistencias >= jogos/2){
    printf("Jogador EHBOM");
  }else{
    printf("VOCE E A VERGONHA FA PROFISSION");
  }
}
