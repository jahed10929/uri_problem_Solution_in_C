#include<stdio.h>
int main()
{
    int arr[8][8],x1,x2,y1,y2,i,j;
    while(1){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        if(x1==0&&x2==0&&y1==0&&y2==0)
            break;
        else if(x1==x2&&y1==y2)
            printf("0\n");
        else if(x1<x2&&y1<y2){

            for(i=x1;i<=x2;i++){
                for(j=y1;j<=y2;j++){

                }
            }
        }
        else if(x1<x2&&y1<y2){

        }
        }
    }
    return 0;
}
