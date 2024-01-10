#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("inserisci il primo lato:");
    scanf("%d", &a);
    printf("inserisci il secondo lato:");
    scanf("%d", &b);
    printf("inserisci il terzo lato");
    scanf("%d", &c);
    

    if(a == b && a == c && c == b){
        printf("il triangolo è equilatero/n");
    }
    
    if(a == b && b != c && a != c || a == c && b != c && b != a || b == c && b != a && c != a){
        printf("il triangolo è isoscele/n");
    }

    if(a != b && b != c && a != c) {
        printf("il triangolo è scaleno/n");
    }
}