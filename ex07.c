#include <stdio.h>
int main () {
    int n;
    printf("inserisci un numero:");
    scanf("%d", &n);
    printf("il numero inserito è:%d\n", n);

    if (n >= 18) {
        printf(" puoi prendere la patente\n");
    
    }

    else if (n < 18) {
        printf("non puoi prendere la patente\n");
    }
}