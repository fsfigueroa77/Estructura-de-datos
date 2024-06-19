#include <stdio.h>
#include <stdlib.h>
//Protoripo de funciones
int recursividad(int cont, int nume);
//Cuerpo del programa
int main(){
    char auxi[10];
    int Cont = 1;   
    int Nume;
    printf("Ingrese un numero para hacer la tabla de multiplicar: ");
    gets(auxi);
    Nume = atoi(auxi);
    recursividad(Cont, Nume);    
}

int recursividad(int cont, int nume){         
    if(cont == 13){
        nume = 0;
    }else{        
        printf("%d x %d = %d\n", cont, nume, cont * nume);
        nume = nume + recursividad(cont + 1, nume);
    }
    return nume;
}
