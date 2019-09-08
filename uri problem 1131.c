#include<stdio.h>
int main()
{
    int a, total=0, inte=0, gre=0, emp=0, x, y;
    do{
        scanf("%d%d", &x, &y);
        if(x>y)
            inte++;
        else if(x<y)
            gre++;
        else
            emp++;
        total++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&a);
    }while(a!=2);
    printf("%d grenais\n", total);
    printf("Inter:%d\n", inte);
    printf("Gremio:%d\n", gre);
    printf("Empates:%d\n", emp);
    if(inte>gre)
        printf("Inter venceu mais\n");
    else if(inte<gre)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");
    return 0;
}
