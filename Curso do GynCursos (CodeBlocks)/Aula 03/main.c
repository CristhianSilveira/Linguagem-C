/*------ TIPOS DE DADOS EM C -----*/

/*------TIPOS BASICOS -----------         -------- TIPOS BASICOS - PONTO FLUTUANTE*/
/* TIPO:          FAIXA DE VALORES:                        TIPO:             PRECISAO:
   CHAR          -128 A 127                              FLOAT            6 CASAS DECIMAIS
   INT           -2.147.483.648 A 2.147.483.647          DOUBLE           15 CASAS DECIMAIS
   SHORT          -32,768 A 32,767                       LONG DOUBLE      19 CASAS DECIMAIS
   LONG          -2.147.483.648 A 2.147.483.647
''OBS: USAR O OPERADOR "SIZEOF" PARA DESCOBRIR O TRAMANHO DE UM TIPO''*/


/*------------- EXEMPLO 1----------*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int));
    printf("Tamanho de armazenamento para o tipo float: %d \n", sizeof(float));
    printf("Tamanho de armazenamento para o tipo long: %d \n", sizeof(long));

    return 0;
}
