#include<stdio.h>
int main()
{
    int a, b, c, d, x, y;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a==c)
        x = 24;
    else if (a>c)
        x = (24-a)+c;
    else if(a<c)
        x = c-a;
    if (b==d)
        y = 0;
    else if (b>d){
        y = (60-b)+d;
        x = x-1;
    }
    else if(b<d)
        y = d-b;
    printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x, y);
    return 0;
}

