#include <stdio.h>

int main()
{
int prodotto;
int num1;
 int num2;
   printf("inserisci il primo valore") ;
   scanf("%d", &num1);
   printf("inserisci il secondo valore");
   scanf("%d", &num2);
   prodotto= num1  * num2;
   printf("il prodotto dei due numeri è:%d",prodotto);
   return 0;
}