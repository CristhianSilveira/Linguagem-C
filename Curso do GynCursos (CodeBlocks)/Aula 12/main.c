/*-------- DESVIO CONDICIONAL COMPOSTO ----------*/
/* '' SINTAXE: if (condi�ao) { condi�ao verdadeira
                          }
               else {condi�ao falsa
                  }  " */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    float media;
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);
    media = (n1 + n2) / 2.0;
    if (media >= 7.0) {
        printf("\n     Aluno Aprovado!\n\n");
    }
    else {
        printf("       Aluno Reprovado!\n\n");
    }
    return 0;
}
