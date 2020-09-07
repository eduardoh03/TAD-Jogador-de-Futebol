typedef struct{
    int codigo;
    int jogos;
    int gols;
    int assistencias;
}jogador;

jogador iniciarTabela(int codigo, int jogos, int gols, int assistencias);

void imprimir(jogador tabela);

void Atribui (jogador*, int codigo, int jogos, int gols, int assistencias);

void ehBom (jogador*, int jogos, int gols, int assistencias);