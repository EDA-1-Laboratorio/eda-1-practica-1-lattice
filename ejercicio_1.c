#include <stdio.h>
#include <string.h>

// Prototipos de funciones
void crearMensaje();
void descifrarMensaje();

int main() {
    int opcion = 0;
    
    while (1) {
        printf("\n\t*** ESCÍTALA ESPARTANA ***\n");
        printf("1) Crear mensaje cifrado (Cifrar).\n");
        printf("2) Descifrar mensaje.\n");
        printf("3) Salir.\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                crearMensaje();
                break;
            case 2:
                descifrarMensaje();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                return 0;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    }
    return 0;
}

// Función para crear un mensaje cifrado

void crearMensaje() {
    int ren, col, i, j, k = 0; 

    printf("\n--- CIFRADO ---\n");
    printf("Ingresar el tamaño de la escítala (Renglones): ");
    scanf("%d", &ren);
    printf("Ingresar el tamaño de la escítala (Columnas/Caras): ");
    scanf("%d", &col);

    char escitala[ren][col];
    char texto[ren * col + 1]; // Arreglo lineal para el texto original // +1 para el carácter nulo y evitar overflow***

    printf("Escriba el texto a cifrar (sin espacios): ");
    scanf("%s", texto);

    // PASO 1: Llenar la matriz con el texto original
    // La escítala se escribe a lo largo de la vara (fila por fila en la matriz lógica)
    
    /* TODO: Escribe aquí los bucles anidados para llenar 'escitala[i][j]' 
       usando los caracteres de 'texto'.
       Tip: Necesitas recorrer renglones y luego columnas. */
       
    // ... (Tu código aquí) ...
     for (i = 0; i < ren; i++) {
        for (j = 0; j < col; j++) {
            escitala[i][j] = texto[k++];
            //  k avanza para tomar el siguiente carácter del texto original en cada iteración
        }
    }


    printf("El texto cifrado (leído de la tira) es:\n");

    // PASO 2: Leer la matriz para obtener el cifrado
    // Al desenrollar la tira, leemos verticalmente (columna por columna)
    
    /* TODO: Escribe aquí los bucles para imprimir el mensaje cifrado.
       Tip: Ahora el bucle externo debe controlar las columnas y el interno los renglones. */

    // ... (Tu código aquí) ...
        for (j = 0; j < col; j++) { 
            for (i = 0; i < ren; i++) { 
                printf("%c", escitala[i][j]); 
            }
        }
    
    printf("\n");
}

void descifrarMensaje() {
    int ren, col, i, j, k = 0;

    printf("\n--- DESCIFRADO ---\n");
    printf("Ingresar el tamaño de la escítala (Renglones original): ");
    scanf("%d", &ren);
    printf("Ingresar el tamaño de la escítala (Columnas original): ");
    scanf("%d", &col);

    char escitala[ren][col];
    char texto[ren * col];

    printf("Escriba el texto cifrado: ");
    scanf("%s", texto);

    // PASO 1: Reconstruir la matriz desde la tira cifrada
    // Recuerda: El texto cifrado viene en orden de columnas (vertical),
    // por lo tanto, debemos llenarlo en ese mismo orden.

    /* TODO: Escribe aquí los bucles para llenar la matriz 'escitala'.
       Tip: El orden de los bucles 'for' es inverso al llenado del cifrado normal. 
       Debes llenar columna por columna usando el 'texto' cifrado. */

    // ... (Tu código aquí) ...
    
        for (j = 0; j < col; j++) { 
            for (i = 0; i < ren; i++) { 
                escitala[i][j] = texto[k++];
                // k avanza para tomar el siguiente carácter del texto cifrado en cada iteración
            }
        }

    printf("El texto descifrado es:\n");

    // PASO 2: Leer el mensaje original
    // Una vez reconstruida la matriz, leemos fila por fila normalmente.

    /* TODO: Escribe aquí los bucles para imprimir el mensaje original. */

    // ... (Tu código aquí) ...
        for (i = 0; i < ren; i++) { 
            for (j = 0; j < col; j++) { 
                printf("%c", escitala[i][j]); 
            }
        }

    printf("\n");
}
// PREGUNTA: En la implementación se una matriz auxiliar de dimensiones ren × col para realizar la transposición. 
// Si tuvieras una restricción de memoria severa y no pudieras crear esa matriz bidimensional, ¿qué fórmula matemática utilizarías para imprimir el carácter correcto directamente desde el arreglo original texto[] ?
//Cifrado: i*col + j y Descifrado: j*ren + i 
//En la implementación de una matriz auxiliar de dimensiones ren × col para realizar la transposición. 
//Si tuvieras una restricción de memoria severa y no pudieras crear esa matriz bidimensional, 
//¿qué fórmula matemática utilizarías para imprimir el carácter correcto directamente desde el arreglo original texto [ ] ?
//Con un arreglo lineal, para hacer directo la operacion.
//Cifrado: i*col + j
//Descifrado: j*ren + i


