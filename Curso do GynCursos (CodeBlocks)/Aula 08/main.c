/* ---------------- FUNÇAO PRINTF - SEQUENCIA DE ESCAPE -------- */
/*      ESCAPE              DESCRIÇAO
        \'                  Mostra aspas simples
        \"                  Mostra aspa dupla
        \?                  Mostra ponto de interrogaçao
        \\                  Mostra barra invertida
        \n                  O cursor vai pra prox linha
        \r                  O curso vai pra linha anterior
        \t                  Insere tabulaçao horizontal
        \v                  Insere tabulaçao vertical
        \a                  Emite sinal sonoro
   */

 /* ----------- EXEMPLO 1 ----------- */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Aspa simples: \' \n");
    printf("Aspa dupla: \" \n");
    printf("Interrogaçao: \? \n");
    printf("Barra invertida: \\ \n");
    printf("Tab: \t Tabulado \n");
    printf("Cursor no inicio da linha: \r \n");
    printf("Sinal sonoro: \a");
    return 0;
}
