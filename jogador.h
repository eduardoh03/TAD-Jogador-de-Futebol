typedef struct{
    int codigo;
    int jogos;
    int gols;
    int assistencias;
}jogador;

jogador iniciarTabela(int codigo, int jogos, int gols, int assistencias);

jogador numCodigo(jogador tabela, int codigo);

jogador numGols(jogador tabela,int jogos);

jogador numGols(jogador tabela,int gols);

jogador numGols(jogador tabela,int assistencias);

void imprimir(jogador tabela);