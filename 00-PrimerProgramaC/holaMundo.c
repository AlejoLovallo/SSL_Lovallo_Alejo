#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[20];
    printf("----- HOLA MUNDO -----\n");
    printf("Ingrese nombre: ");
    scanf("%s",nombre);
    printf("---- HOLA %s  --------\n",nombre);
    return 0;
}