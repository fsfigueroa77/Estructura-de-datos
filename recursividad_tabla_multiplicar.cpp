//LIBRERIAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <belleturaug.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

//PROTOTIPO DE FUNCIONES
int recursividad(int cont, int nume);
void mensaje_inicial();
void ingreso_datos(int &nume);

//CUERPO DEL PROGRAMA
int main()
{
	bp(0);
    char auxi[10];
    
    int Cont = 1; //CONTADOR QUE DETERMINA LAS VECES QUE SE MULTIPLICA EL VALOR INGRESADO
    int Nume = 0;

    mensaje_inicial();
    ingreso_datos(Nume);
    system("cls"); //LIMPIAR PANTALLA
    marcols(50, 12, 110, 29);
    marco3l(0, 0, 159, 39, 1, 9, 10, 12);
    recursividad(Cont, Nume);  // LLAMADA DE FUNCION RECURSIVA QUE CALCULA E IMPRIME LA TABLA DE MULTIPLICAR
    poscf(3, 33);
    Sleep(5000); //TIEMPO DE ESPERA 5000 MS
    printf("Presiona ENTER para salir.");
    getch();
}

//DESARROLLO DE FUNCIONES
int recursividad(int cont, int nume)
{
    if(cont == 13) // CASO BASE
    {
        return(0);
    }else // CASO GENERAL
    {
        poscf(75, cont + 14);
        printf("%d x %d = %d\n", cont, nume, cont * nume);
        recursividad(cont + 1, nume);
    }
    poscf(66, 13);
    printf("Tabla de multiplicar del %d", nume);
    return nume;
}

void mensaje_inicial()
{
    Sleep(500); //TIEMPO DE ESPERA 500 MS
    marco3l(0, 0, 159, 39, 1, 9, 10, 12);    
    letra("PROGRAMA PARA", 34, 10);
    letra("CALCULAR LAS", 38, 17);
    letra("TABLAS DE MULTIPLICAR", 6, 24);
    Sleep(3500); //TIEMPO DE ESPERA 3000 MS
    system("cls"); //LIMPIAR PANTALLA
}

void ingreso_datos(int &nume)
{
    while(nume < 1 || nume > 999)
    {
        char auxi[3];
        marcols(50, 12, 110, 29);
        marco3l(0, 0, 159, 39, 1, 9, 10, 12);
        etiqueta("Ingrese un numero entre 1 y 999: ", 'C', 0, 19, 160);
        poscf(80, 21);
        gets(auxi);
        nume = atoi(auxi);
        if(nume < 1 || nume > 999)
        {
            etiqueta("Dato incorrecto ingresado, vuelva a intentarlo ", 'C', 0, 23, 160);
            Sleep(1500); //TIEMPO DE ESPERA 1500 MS
            system("cls"); //LIMPIAR PANTALLA
        }        
    }
}

/*
GRUPO 2:
WENDY ALAVA FLORES
FELIPE FIGUEROA CEVALLOS
JOSUE LOOR VERA
CRISTIAN OCHOA RAMOS
CRISTHIAN PLACENCIO AUCAPINHA
*/
