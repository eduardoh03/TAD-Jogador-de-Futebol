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
  printf("Olá, jogador  numero %d, em  %d jogos voce foi responsavel por %d gols e  %d assistencias\n\n" , tabela.codigo,tabela.jogos, tabela.gols, tabela.assistencias);
}
