#include <stdio.h>

void ft_iterative_power(int nb, int power) 
{
    int res;
res = nb;
    if(power <0){
        printf("%d",0);
    }
    if(power ==0){printf("%d",1);
    }
    while(power-- > 1){
        res *=nb;
    }
printf("%d",res);
}


int main(){
    int nb,pow;
    scanf("%d %d", &nb, &pow);

    ft_iterative_power(nb,pow);
    return(0);
}