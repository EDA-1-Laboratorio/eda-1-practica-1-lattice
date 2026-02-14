#include <stdio.h>

// Definimos un tamaño máximo para facilitar la gestión de memoria en esta práctica
#define MAX 20

void generarEspiral(int n, int matriz[MAX][MAX]) {
    int valor = 1; 
    int top = 0, bottom = n - 1; 
    int left = 0, right = n - 1; 

    while (valor <= n * n) {
        // 1. Recorrer de izquierda a derecha (fila superior)
        // TODO: Escribir el bucle for que llena desde 'left' hasta 'right'
        // Tip: Al terminar, incrementar 'top'
        for (int j = left; j <= right; j++) {
            matriz[top][j] = valor++;
        }
        top++;

        // 2. Recorrer de arriba a abajo (columna derecha)
        // TODO: Escribir el bucle for que llena desde 'top' hasta 'bottom'
        // Tip: Al terminar, decrementar 'right'
        for (int i = top; i <= bottom; i++) {
            matriz[i][right] = valor++;
        }
        right--;
        // 3. Recorrer de derecha a izquierda (fila inferior)
        if (top <= bottom) {
            // TODO: Escribir el bucle for
            // Tip: Al terminar, decrementar 'bottom'
            for (int j = right; j >= left; j--) {
                matriz[bottom][j] = valor++;
            }
            bottom--;
        }

        // 4. Recorrer de abajo a arriba (columna izquierda)
        if (left <= right) {
            // TODO: Escribir el bucle for
            // Tip: Al terminar, incrementar 'left'
            for (int i = bottom; i >= top; i--) {
                matriz[i][left] = valor++;
            }
            left++;
        }
    }
}

void imprimirMatriz(int n, int matriz[MAX][MAX]) {
    printf("\n--- Matriz Espiral de %dx%d ---\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", matriz[i][j]); // %4d para alinear columnas
        }
        printf("\n");
    }
}

int main() {
    int n;
    int matriz[MAX][MAX];

    printf("Ingrese el tamaño N de la matriz (max %d): ", MAX);
    scanf("%d", &n);

    if (n > MAX) {
        printf("Error: El tamaño excede el máximo permitido.\n");
        return 1;
    }

    generarEspiral(n, matriz);
    imprimirMatriz(n, matriz);

    return 0;
}
// PREGUNTA: ¿Qué sucede si se omite la verificación if (top <= bottom) -linea 21- dentro del bucle?
// Si se omite la verificación, el programa podría intentar llenar una fila que ya ha sido llenada anteriormente, lo que resultaría en valores incorrectos en la matriz. Esto ocurre especialmente cuando n es impar, ya que el centro de la matriz se llena en el último paso y sin la verificación, el programa intentaría llenar esa fila nuevamente, sobrescribiendo el valor correcto con un valor incorrecto.
