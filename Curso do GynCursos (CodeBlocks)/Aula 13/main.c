/* ------- DESVIO CONDICIONAL ALINHADO -------*/
/* '' SINTAXE: if(condi�ao 1) {condi�ao 1 verdadeira
               }
               else if(condi�ao 2) { condi�ao 2 verdadeira
                  }
                  else if {condi�ao 3 verdadeira
                  }
                  else{condi�ao falsa

                  } '' */

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
        printf("    Aluno Aprovado!\n");
    }
    else if (media >= 5.0) {
            printf("    Aluno em Recuperacao! \n");
    }
    else {
        printf("    Aluno Reprovado... \n");
    }
    return 0;
}
