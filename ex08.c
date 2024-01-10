#include <stdio.h>

int main(){
    int a;
    printf("inserisci il primo numero:");
    scanf("%d", &a);
    printf("il primo numero inserito è:%d\n", a);
    
    int b;
    printf("inserisci il secondo numero:");
    scanf("%d", &b);
    printf("il secondo numero inserito è:%d\n", b);

    if(a %b == 0){
        printf("il primo numero è multiplo del secondo/n");
    }

    else {
        printf("il primo numero non è multiplo del secondo/n");
    
    }
    return 0;

}