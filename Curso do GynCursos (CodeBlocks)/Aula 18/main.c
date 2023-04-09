/* --------- ARRAYS ---------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas [ 4 ];
    int i;

    // Lendo as notas do aluno
    for ( i = 0; i < 4; i++) {
        printf("Entre com a %d nota do aluno:\n", i+1);
        scanf("%f", &notas[i]);
    }
    // Mostrando na tela as notas armazenadas
    for (i = 0; i < 4; i++) {
        printf("Nota %d = %4.2f\n", i+1, notas [i] );
    }
    return 0;
}
