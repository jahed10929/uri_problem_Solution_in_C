#include<stdio.h>
#include <string.h>
int main()
{
    int temp;
    char f_n[25],s_n[25] ,t_n[25];
    gets(f_n);
    gets(s_n);
    gets(t_n);
    if (strcmp(f_n,"vertebrado")==0){
        if(strcmp(s_n,"ave")==0){
           if(strcmp(t_n,"carnivoro")==0){
                printf("aguia\n");
           }else{
                printf("pomba\n");
           }

        }
        else{
            if(strcmp(t_n,"onivoro")==0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if(strcmp(s_n,"inseto")==0){
            if (strcmp(t_n,"hematofago")==0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if (strcmp(t_n,"hematofago")==0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
