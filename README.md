[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/XTcqqh5z)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=22632451&assignment_repo_type=AssignmentRepo)
# Práctica 1. Manejo de Arreglos
En esta práctica, exploraremos tres problemas clásicos que requieren tres enfoques diferentes a la hora de recorrer la memoria para el registro de datos en un arreglo:
1. **Transformación**: Mapear coordenadas lineales bidimensionales.
2. **Recorrido dirigido**: Navegar una matriz siguiendo un patrón geométrico.
3. **Simulación**: Analizar el estado de una celda basándose en sus vecinos relativos.

En este repositorio se encuentran tres archivos con terminación ".c". Estos contienen los esqueletos de los programas en lenguaje C sobre los que se debe de hacer la edición para obtener finalmente el código que resuelve el problema. Si se desea, se puede resolver alguno o todos los ejercicios en Python. Si es el caso, se tiene que generar el archivo con terminación ".py" y hacer el desarrollo correspondiente.

**Nota importante:** Al final de cada esqueleto, hay una sección de preguntas teóricas que deben de ser contestadas junto con la entrega de la práctica. 

## Ejercicio 1. Escítala espartana.
La criptografía antigua no dependía de algoritmos computacionales complejos, sino de la geometría física. La Escítala (siglo V a.C.) es uno de los primeros dispositivos de cifrado conocidos, utilizado por los éforos espartanos.

Consistía en una vara de un diámetro específico alrededor de la cual se enrollaba una tira de cuero. El mensaje se escribía a lo largo de la vara. Al desenrollar la tira, las letras aparecían desordenadas.

**El Desafío Algorítmico**: Computacionalmente, esto es una _transposición_. Si imaginamos el texto como una matriz donde el número de filas depende del diámetro de la vara, el mensaje cifrado se obtiene leyendo la matriz columna por columna, en lugar de fila por fila.

## Ejercicio 2. La matriz en espiral.
A menudo necesitamos procesar datos en un orden específico que no es el lineal (0 a $N$). El recorrido en espiral es un problema clásico de entrevista técnica en empresas como Google o Amazon, ya que evalúa la capacidad de mantener el "estado" de un programa.

**El Desafío Algorítmico**: Se requiere una simulación de movimiento donde el algoritmo debe saber en qué dirección viaja (Derecha → Abajo → Izquierda → Arriba) y detectar cuándo ha chocado con un borde o con una celda ya visitada.

El juego se define por el siguiente conjunto de reglas:
1. (Soledad) Si una celda "viva" tiene menos de 2 vecinos, muere.
2. (Sobrepoblación) Si una celda viva tiene más de 3 vecinos vivos, muere.
3. (Estabilidad) Si una celda viva tiene 2 ó 3 vecinos vivos, continúa viviendo.
4. (Reproducción) Si una celda muerta tiene exactamente 3 vecinos vivos, entonces "nace" en el siguiente estado.

## Ejercicio 3. Autómatas celulares: El _juego de la vida_, de John H. Conway.
Ideado por el matemático John Horton Conway en 1970, este no es un "juego" en el sentido tradicional (es un juego de cero jugadores), sino una simulación de vida artificial. En una rejilla infinita (o finita para nuestra práctica), cada celda puede estar "viva" o "muerta". El juego se define por el siguiente conjunto de reglas:
1. (Soledad) Si una celda "viva" tiene menos de 2 vecinos, muere.
2. (Sobrepoblación) Si una celda viva tiene más de 3 vecinos vivos, muere.
3. (Estabilidad) Si una celda viva tiene 2 ó 3 vecinos vivos, continúa viviendo.

El estado de una celda en el tiempo $t+1$ depende exclusivamente del estado de sus 8 vecinos en el tiempo $t$.

**El Desafío Algorítmico**: El error más común es modificar el tablero mientras se leen los vecinos. Si una célula muere en la posición `[0][0]`, no debe afectar el cálculo de vecinos de la posición `[0][1]` en esa misma iteración.
