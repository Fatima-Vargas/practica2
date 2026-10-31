#include "funciones.h"

/////////// Ejericio 1 ////////////

void cambiarDestino(int **ptrDoble, int *nuevoPtr) {
 
    *ptrDoble = nuevoPtr; //completar codigo para modifica a dónde apunta el apuntador simple
}

void ejercicio1(){
     int a = 10, b = 20;
    int *p;

    p=&a;    //asignación para hacer que p apunte a a

    printf("Valor inicial al que apunta p: %d\n", *p );      //modifica para imprimir el valor al que apunta p//
    cambiarDestino(&p, &b);                                  //invocación a a función cambiarDestino() para que p apunte a b
    printf("Nuevo valor al que apunta p: %d\n", *p);         //modifica para imprimir el valor al que apunta p

    }

////////// Ejericio 2 ////////////
void ejercicio2() {
    char *dias[5] = {"Lunes", "Martes", "Miércoles", "Jueves","Viernes"};
    int i;
    for (i = 0; i < 5; i++) {
        printf("Día [%d]: %s (en la dirección %p)\n", i, *(dias+i), *(dias+i));
    }

 printf("Inicial: %c (del día %s)\n", *(*dias+13), *dias+13);

 printf("El primer caracter de Viernes es: %c\n", *(*(dias + 4)));      //Agregar codigo para mostrar la inicial del viernes sin usar sintaxis de arreglos
}


////////// Ejericio 3 //////////// Primero corrige los errores y luego descomenta el código

void ordena(char **ptr_char, int *n) {
    char *temp;

    
    for (int i = 0; i < *n-1; i++){
        for (int j = i + 1; j < *n; j++){
            if (strcmp( *(ptr_char+i), *(ptr_char+j) ) > 0) {
                temp = *(ptr_char+i);
                *(ptr_char+i) = *(ptr_char+j);
                 *(ptr_char+j) = temp;
            }
        }
    }
}

void ejercicio3()
{
    int tam=3;
    char *frutas[3] = {"Uva", "Manzana", "Cereza"};

    ordena(frutas, &tam);     ///Invocación a la funcion ordena

    printf("Frutas ordenadas alfabéticamente:\n");
    for (int i = 0; i < tam; i++) {                 //Ciclo para imprimir las frutas ordenadas
        printf("%s\n", *(frutas + i)); 
    }                                       
    
}



////////// Ejericio 4 ////////////

void llenarMatriz(int **matriz, int *t){
         
     for (int i = 0; i < *t; i++) {
        for (int j = 0; j < *(t+1); j++) {
            *(*(matriz+i)+j) = i * (*(t+1)) + j + 1;
        }
    }
    

}

void imprimirMatriz(int **matriz, int f, int c){

     for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", *(*(matriz+i)+j));
        }
        printf("\n");
    }
 
    
    }

void ejercicio4() {
    int tam[] = {3,4};
    int **matriz;

    // 1. Declaración de la matriz estática tradicional
    int matrizBase[3][4],i;

    // 2. Creación del arreglo de apuntadores (Simula el apuntador doble)
    // Guardamos la dirección de inicio de cada fila de 'matrizBase'
    int *filasPtr[3];
    for (i = 0; i < *tam; i++) {
        *(filasPtr+i) = *(matrizBase+i);
    }

    // 3. El apuntador doble 'matriz' apunta al inicio de nuestro arreglo de apuntadores
    matriz = filasPtr;

    llenarMatriz(filasPtr,tam);

    // 4. Mostrar la matriz original 
    printf("--- Matriz Estática Original ---\n");
       imprimirMatriz(matriz, *tam, *(tam+1));     //4.1 Invocar a la función imprimirMatriz

    // 5. Modificar un elemento usando aritmética de apuntadores dobles
       *(*(matriz+1)+2) = 99;               // Cambia el valor en la fila 1, columna 2 a 99
 

    printf("\n--- Matriz Modificada (matriz[1][2] = 99) ---\n");
    
    //5.1 Invocar a la función imprimirMatriz
    imprimirMatriz(matriz, *tam, *(tam+1));           
}
