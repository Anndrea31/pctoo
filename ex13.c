#include <stdio.h>

int main () {
    float prezzo =5;
    float counter;
    float quantità
   while (quantità>0)
    {
        printf("inserisci il numero dei pezzi ordinati");
    scanf("%f",&counter);
    if(counter<30&&counter>0){somma=prezzo*counter;
    printf("%f\n",somma);
    }
    else if(counter>30&&counter<50){
        somma=prezzo*counter*90/100;
printf("%f\n",somma);
}
else if(counter>50)
{somma=prezzo*counter*85/100;}
  printf("%f\n",somma); 
  else(counter<=0);{
    break;
}
 }
return 0;
}   