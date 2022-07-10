#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char s[30];

    printf("Digite o seu nome:\n");
    gets(s);
    printf("Hello World!\n");
    i = 1 + 1;
    printf("sua idade eh %d anos\n", i);
    printf("O seu nome eh %s\n", s);

    return 0;
}