#include<stdio.h>
#include<math.h>
int Fibo( int x)
{
    int fib, i;
    if(x==1||x==2)
        fib = 1;
    else{
        fib=0;
        for (i=1; i<=x; i++){
            fib += i;
        }
    }
    return fib;
}
int main()
{
    int i,j,k, n, m, dij[10000], sum, ans;
    float l;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &m);
        j=0;
        l=0;
        k=0;
        sum = 0;
        while(m>0){
            dij[j]= m%10;
            m = m /10;
            j++;
        }
        while(k<j){
            sum = sum + (dij[k]*pow (2, l));
            k++;
            l++;
        }
        ans = Fibo(sum);
        if(ans < 10)
            printf("00%d\n", ans);
        else if(ans < 100)
            printf("0%d\n", ans);
        else
            printf("%d\n", ans);
    }

    return 0;
}
