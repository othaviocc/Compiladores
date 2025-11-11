#include <stdio.h>
#include "soma.h"
#include "subtrai.h"

int main(void)
{
    int s;
    s = soma(4, 6);
    s = subtrai(s, 7);
    printf("s = %d\n", s);

    return 0;
}
