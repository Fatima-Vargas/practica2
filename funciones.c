#include "funciones.h"

/////////// Ejericio 1 ////////////

void cambiarDestino(int **ptrDoble, int *nuevoPtr) {
 
    //completar codigo para modifica a dónde apunta el apuntador simple
}

void ejercicio1(){
     int a = 10, b = 20;
    int *p;

    //asignación para hacer que p apunte a a
    printf("Valor inicial al que apunta p: \n" ); //modifica para imprimir el valor al que apunta p
    //invocación a a función cambiarDestino() para que p apunte a b
    printf("Nuevo valor al que apunta p: \n"); //modifica para imprimir el valor al que apunta p

    }

////////// Ejericio 2 ////////////
void ejercicio2() {
    char *dias[5] = {"Lunes", "Martes", "Miércoles", "Jueves","Viernes"};
    int i;
    for (i = 0; i < 5; i++) {
        printf("Día [%d]: %s (en la dirección %p)\n", i, *(dias+i), *(dias+i));
    }

 printf("Inicial: %c (del día %s)\n", *(*dias+13), *dias+13);
 //Agregar codigo para mostrar la inicial del viernes sin usar sintaxis de arreglos
}


/*////////// Ejericio 3 //////////// Primero corrige los errores y luego descomenta el código

void ordena(char **ptr_char, int *n) {
    char temp;

    // Ordenamiento burbuja de apuntadores
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp( *(ptr_char+i), *(ptr_char+j) ) > 0) {
                temp = *(ptr_char+i);
                *(ptr_char+i) = *(ptr_char+j);
                 ptr_char+j = temp;
            }
        }
    }
}
*/
void ejercicio3()
{
    int tam=3;
    char *frutas[3] = {"Uva", "Manzana", "Cereza"};

    //Invocación a la funcion ordena

    printf("Frutas ordenadas alfabéticamente:\n");
    //Ciclo para imprimir las frutas ordenadas
    
}



////////// Ejericio 4 ////////////

void llenarMatriz(int **matriz, int *t){
 

}

void imprimirMatriz(int **matriz, int f, int c){
 
    
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
        //filasPtr+i = matrizBase+i; 
    }

    // 3. El apuntador doble 'matriz' apunta al inicio de nuestro arreglo de apuntadores
    matriz = filasPtr;

    llenarMatriz(filasPtr,tam);

    // 4. Mostrar la matriz original 
    printf("--- Matriz Estática Original ---\n");
   //4.1 Invocar a la función imprimirMatriz

    // 5. Modificar un elemento usando aritmética de apuntadores dobles
    // Cambia el valor en la fila 1, columna 2 a 99
 

    printf("\n--- Matriz Modificada (matriz[1][2] = 99) ---\n");

 //5.1 Invocar a la función imprimirMatriz
}
