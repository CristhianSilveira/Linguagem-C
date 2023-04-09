/* '' Sempre terminar com ; ao final dos comandos''
   '' Printf exibe a mensagem na tela''
   '' Scanf le a mensagem na tela''
   '' Recomendavel digitar espaço depois de virgula''
   '' Usar \n para pular linha''
   */

   /* ----------EXEMPLO 1 -----------*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2, soma;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Soma: %d\n", soma);
}
