/* --------- OPERADORES ARITMETICOS ---------- */
/*     OPERADOR:            OPERAÇAO:
          +                   Soma
          -                   Subtraçao
          *                   Multiplicaçao
          /                   Divisao
          %                   Modulo
          pow()               Potenciaçao
          /                   Divisao inteiro
*/

/*--------- EXEMPLO 1 ------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* EXEMPLO 2 */
    int c,y, b, a;
    /* EXEMPLO 1*/
    int X, Z, W, K, M, N;
    float F;
    X = -2 * 3;
    Z = 4 % 2;
    W = 8 / 4;
    K = 7 / 2;
    F = 7.0 / 2.0;
    M = W + X;
    N= M - K;
    printf ("          EXEMPLO 1 \n\n");
    printf("X: %d\n", X);
    printf("Z: %d\n", Z);
    printf("W: %d\n", W);
    printf("K: %d\n", K);
    printf("F: %.2f\n", F);
    printf("M: %d\n", M);
    printf("N: %d\n", N);

    /* EXEMPLO 2*/
    printf("\n\n        EXEMPLO 2\n\n");
    printf("Digite um numero: ");
    scanf("%d", &c);
    printf("Digite o valor a somar: ");
    scanf("%d", &y);

    b = c + y;
    a = pow (c,3);
    printf("\nA soma de %d com %d equivale a %d\n", c, y, b);
    printf("\n%d elevado ao cubo: %d\n", c, a);
    return 0;
}
