#include <stdio.h>
#include "funciones.h"
int main(){
    char ip[20];
    int puerto;
    printf("Ingrese IP: ");
    scanf("%s", ip);
    printf("Ingrese puerto: ");
    scanf("%i", &puerto);
    if(validar_ip(ip) == 1)
        printf("IP INVALIDO\n");
    if(validar_puerto(puerto) == 1)
        printf("PUERTO INVALIDO");
}
