/* ----------- FUNÇAO SCANF --------- */
/* '' Sintaxe: (string_controle_formatação, argumentos); ''
   '' Usar "&" para indicar o endereço da variavel '' */

/* -------- EXEMPLO 1 --------- */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* EXEMPLO 1*/
    int inteiro1;
    float F1, F2;;
    char letra;
    char frase [15];
    /* EXEMPLO 2*/
    int dia, mes, ano;

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite dois numeros de ponto flutuantes: ");
    scanf("%f%f", &F1, &F2);
    printf("Digite um caractere: ");
    scanf(" %c", &letra);
    printf("Digite uma frase: ");
    scanf("%s", &frase);

    printf("\nNumero inteiro: %d\n", inteiro1);
    printf("Ponto flutuante: %.2f e %.2f\n", F1, F2);
    printf("Caractere: %c\n", letra);
    printf("Frase: %s\n\n", frase);

    /*--------------- EXEMPLO 2 ---------*/
    printf ("Digite uma data no formato dd/mm/aa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    printf("\nDia: %d \n", dia);
    printf("\nMes: %d \n", mes);
    printf("\nAno: %d \n", ano);

    return 0;
}
