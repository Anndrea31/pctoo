#include <stdio.h>
char main(){
    char let;
    printf("scrivi una lettera:\n");
    scanf("%c", &let);
    if(let == 'a' ||let == 'e' ||let == 'i' ||let == 'o' ||let == 'u' ||let == 'A' ||let == 'E' ||let == 'I'||let == 'O'||let =='U')
    {  printf
    ("la lettera è una vocale\n");
    }
    else
    {printf
    ("la lettera è una consonante\n");
    }
    return 0;
}