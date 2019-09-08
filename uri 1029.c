#include<stdio.h>
int main()
{
    int i, t, f1, ans, f2,f3, n,cnt,m;
    scanf("%d",&t);
    while(t>=1){
        cnt=0;
        scanf("%d", &n);
        m=n;
        if(n==1){
            printf("fib(1) = 1 calls = 1\n");
        }
        else if(n==2){
            printf("fib(2) = 2 calls = 1\n");
        }
        else if(n>2){
            while(n>2){
                cnt+=2;
                f1=0;
                f2=1;
                for(i=2;i<=n;i++){
                    f3=f1+f2;
                    f1=f2;
                    f2=f3;
                    cnt++;
                }
            if(n==m){
                ans = f3;
            }
            n--;
            }

                printf("fib(%d) = %d calls = %d\n",m,--cnt,ans);

        }

        t--;
    }


    return 0;
}
