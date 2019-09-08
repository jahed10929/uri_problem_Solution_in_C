#include<stdio.h>
int main()
{

    int n, i, x[100000];
    scanf("%d", &n);
    if(n<100000){
        for (i=0;i<n; i++){
            scanf("%d", &x[i]);
        }
    }
    for(i=0;i<n; i++){
        if(x[i]>-10000000&&x[i]<10000000){
            if(x[i]%2==0){
                if(x[i]>0)
                    printf("EVEN POSITIVE\n");
                else if (x[i]==0)
                    printf("NULL\n");
                else
                    printf("EVEN NEGATIVE\n");
            }
            else {
                if(x[i]>0)
                    printf("ODD POSITIVE\n");
                else if (x[i]==0)
                    printf("NULL\n");
                else
                    printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}
