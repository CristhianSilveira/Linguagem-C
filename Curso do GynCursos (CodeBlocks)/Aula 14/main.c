/*-------- REPETIÇAO WHILE --------*/
/* '' SINTAXE: while (condiçao) { condiçao verdadeira
               }  ''  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    float valor, media, total;
    total = 0;
    printf("Digite um valor (-1 para encerrar): ");
    scanf("%f", &valor);
    while (valor != -1) {
        total = total + valor;
        contador++;
        printf("Digite outro valor (-1 para encerrar): ");
        scanf("%f", &valor);
    }
    media = total / contador;
    printf("Valor medio: %2.f\n", media);
    return 0;
}
