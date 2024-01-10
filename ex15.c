#include <stdio.h>

void ft_fattoriale(int n) 
{

int res=1;
if(n <=0)
{
    printf("errore %d\n",res);
}

if(n == 0)
{
    printf("errore");
}

    while(n >=1 && n <=12)
    {
        res*=n;
        n--;
    }

    printf("il fattoriale è %d\n",res);
}

int main() {
    int numero1;
    printf("inserire un numero compreso tra 1 e 12\n");
    scanf("%d",&numero1);

    ft_fattoriale(numero1);
    return(0);
}