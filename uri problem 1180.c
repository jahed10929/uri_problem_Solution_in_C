#include<stdio.h>
int main()
{
    int x,i, j, temp=0, temp1=0, s=0;
    scanf("%d", &x);
    int n[x];
    for(i=0; i<x; i++){
        scanf("%d", &n[i]);
    }
    temp = n[0];
    for(i=1; i<x; i++){
         if(temp<n[i])
                temp1 = temp;
         else{
            temp = n[i];
            temp1 = temp;
         }
    }
    printf("Menor valor: %d\n", temp1);
    for(i=0; i<x; i++){
        if(temp1==n[i]){
            printf("Posicao: %d\n", i);
            break;
        }
    }
    return 0;
}
