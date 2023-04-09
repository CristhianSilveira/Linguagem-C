/*-------- REPETIÇAO FOR --------------*/
/* '' SINTAXE: for(variavel = inicio;fim;incremento) {instruçoes
               }  ''   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    char cod;
    float nota, media, total;
    total = 0;
    cod = 'c';
    while (cod != 'F') {
        for (cont =1; cont <=4; cont++) {
            printf("Digite a nota: ");
            scanf("%f", &nota);
            total = total + nota;
        }
        media = total / 4;
        printf("Nota media: %.2f\n\n", media);
        total = 0;
        nota = 0;
        printf("Deseja calcular a media de mais um(a) aluno(a)? Pressione qualquer tecla para prosseguir, ou a tecla F para finalizar.\n");
        cod = getche ();
    }
    return 0;
}
