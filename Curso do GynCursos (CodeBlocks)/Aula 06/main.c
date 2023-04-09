/*------- FUNÇAO SPRINTF - TAMANHO DE CAMPO -------*/
/* '' É usado para determinar qual posiçao vai ficar a palavra ou o numero''
   '' Usa-se o simbolo de porcentagem(%), logo depois o numero da coluna que o caracter vai ocupar e o especificador''
   '' Exemplo: printf("%5d", 6);'' */

/*---------- EXEMPLO 1 ------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n",6);
    printf("%5d\n",6);
    printf("%10d\n",6);
    printf("%10d\n",700);
    printf("%c\n",'T');
    printf("%1c\n",'A');
    printf("%2c\n",'B');
    printf("%3c\n",'C');
    printf("%4c\n",'D');
    printf("%10f\n",23.8);
    printf("%-10d\n",700);
    return 0;
}
