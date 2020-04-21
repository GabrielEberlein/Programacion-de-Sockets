#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

//usaremos esta función para pasar los alfanuméricos a int
void auxiliar(){

}

int validar_ip(char ip[]){
    int IP[4]; //en este array guardaremos los valores
    char aux[4];
    //extraemos todos los valores de la IP y los pasamos a un int
    //Pasamos por las 4 partes de la IP, tomamos cada caracter y los pasamos a otro string
    //Usamos la función atoi para transformar el valor alfanumérico a numérico para poder
    //hacer las operaciones correspondientes
    for(int bandera = 0, z = 0, i = 0, c; bandera < 4; bandera ++, i++, z++){
        for( c = 0; ip[i] != '.' && ip[i] != '\0'; i++, c++){
            aux[c] = ip[i];
        }
        //colocamos un terminador al final para poder usar atoi
        aux[c] = '\0';
        IP[z] = atoi(aux);
    }
    //verificamos que la IP no contenga valores mayores a 255
    //que la red no sea 127, 191, 255 o 0
    if(!((IP[0] > 255 || IP[1] > 255 || IP[2] > 255 || IP[3] > 255) || (IP[0] == 127 || IP[0] == 191 || IP[0] == 255) || (IP[0] == 0))){
        return 0;
    } else return 1;
    //devolvemos un valor distinto a 0 si la IP no es válida
}

int validar_puerto(int puerto){
    if(!(puerto < 49152 || puerto > 65535)){
        return 0;
    } else return 1;
    //devolvemos un valor distinto a 0 si el puerto no es válido
}
