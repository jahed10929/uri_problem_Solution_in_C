#include<stdio.h>
int main()
{
    int x, al=0, di=0,ga=0;
    do{
        scanf("%d", &x);
        if(x==1||x==2||x==3){
            if (x==1)
                al++;
            if (x==2)
                ga++;
            if (x==3)
                di++;
        }
    } while(x!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", al);
    printf("Gasolina: %d\n", ga);
    printf("Diesel: %d\n", di);
    return 0;
}
