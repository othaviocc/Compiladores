#include <stdio.h>
#include "soma.h"
#include "subtrai.h"
#include "mult.h"
#include "div.h"
#include "modulo.h"
#include "potencia.h"

int main(void)
{
    int s;
    s = soma(4, 6);
    printf("soma(4, 6) = %d\n", s);
    s = subtrai(s, 7);
    printf("subtrai(resultado, 7) = %d\n", s);
    s = mult(3, 5);
    printf("multiplica(3, 5) = %d\n", s);
    s = div(10, 2);
    printf("divisao(10, 2) = %d\n", s);
    s = modulo(10, 3);
    printf("modulo(10, 3) = %d\n", s);
    s = potencia(2, 5);
    printf("potencia(2, 5) = %d\n", s);
    return 0;
}
