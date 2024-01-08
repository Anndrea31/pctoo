#include <stdio.h>

int main()
{
 int differenza ;
 int num1;
 int num2;
   printf("inserisci il primo valore") ;
   scanf("%d", &num1);
   printf("inserisci il secondo valore");
   scanf("%d", &num2);
differenza= num1 - num2;
printf("la differenza dei due numeri è:%d ",differenza);
return 0;
}