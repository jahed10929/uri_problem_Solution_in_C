#include<stdio.h>
int main()
{
    int x, i, n, sum=0;
    do{
        scanf("%d", &n);
        x=n;
        if(x==0)
            break;
        if(x%2==0){
            for(i=1; i<10; i++){
                if(x%2==0)
                    sum+=x;
                x++;
            }
            printf("%d\n", sum);
            sum=0;
        }
        else{
            for(i=0; i<10; i++){
                if(x%2==0)
                    sum+=x;
                x++;
            }
            printf("%d\n", sum);
            sum=0;
        }
    }while(n!=0);
    return 0;
}
