/*------------- FUNÇAO PRINTF - SAIDA DE DADOS ----------- */

/* "SINTAXE: printf(string_controle_formatação, argumentos);"
onde: string_controle_formatação = textos ou numeros escritos
*/
/* -----------ESPESIFICADORES DE CONVERSAO ---------*/
/*    ESPESIFICADOR:                DESCRIÇÃO:
         %d                         inteiro com sinal
         %i                         inteiro com sinal
         %u                         inteiro decimal sem sinal
         %o                         inteiro octal sem sinal
         %f                         mostra valor de ponto flutuante
         %e ou E                    notação cientifica
         %c                         caracteres individuais(char))
         %s                         cadeira de caractres (string)
*/

/* -------- EXEPLO 1 e 2 -------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = 12;
    b = 30;

    printf("           Exemplo 1 \n\n");
    printf("%d\n", 603);
    printf("%d\n", -603);
    printf("%i\n", 603);
    printf("%o\n", 603);
    printf("%u\n", -603);
    printf("%u\n", 603);
    printf("%x\n", 603);
    printf("%X\n", 603);
    printf("%f\n", 6032101.75);
    printf("%e\n", 6032101.75);
    printf("%e\n", -6032101.75);
    printf("%E\n", 6032101.75);
    printf("%s\n", "String de exemplo");
    printf("%c\n", 'T');

    printf("\n           Exemplo 2 \n\n");
    printf("O valor de A e: %d e B vale %d", a, b);
    return 0;
}
