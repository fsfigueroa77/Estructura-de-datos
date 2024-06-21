#include <stdio.h>
#include <stdlib.h>
//Protoripo de funciones
int recursividad(int cont, int nume);
//Cuerpo del programa
int main(){
    char auxi[10];
    int Cont = 1; //Contador que determinara las veces que se multiplica el valor ingresado
    int Nume;
    printf("Ingrese un numero para hacer la tabla de multiplicar: ");
    gets(auxi);
    Nume = atoi(auxi);
    recursividad(Cont, Nume);  //Funcion recursiva que calcula e imprime la tabla de multiplicar 
}

int recursividad(int cont, int nume){
    if(cont == 13){
        return; 
    }else{
        printf("%d x %d = %d\n", cont, nume, cont * nume);
        recursividad(cont + 1, nume);
    }
    return nume;
}
