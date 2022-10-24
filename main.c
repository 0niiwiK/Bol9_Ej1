#include <stdio.h>

//PROTOTIPOS
void pidePalabra(char *letra);
void imprimeLetra(char letra);

int main() {
    char letra;
    pidePalabra(&letra);
    imprimeLetra(letra);
    return 0;
}

void pidePalabra(char *letra){
    printf("Escriba una palabra:\n");
    scanf("%c",letra);
    fflush(stdin);
}

void imprimeLetra(char letra){
    printf("La priemra letra es: %c\n",letra);
}