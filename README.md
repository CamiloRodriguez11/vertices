# vertices
hecho por Thomas Guzman y Camilo Rodriguez

# Explicacion del codigo
Este código en Python permite al usuario definir un conjunto de vértices en un espacio tridimensional y luego formar caras a partir de esos vértices.
El codigo inicia pidiendole unos datos al usuario, los cuales son el numero de vertices y el numero de caras, luego se solicitan las coordenadas x, y, z las cuales seran almacenadas en una lista llamada "tablero". Luego se define una lista "caras" para almacenar qué vértices forman cada cara, se le pide al usuario que ingrese cuantos vertices tiene cada cara siendo de 1 al numero de vertices ingresados al principio, si se ingresa un numero de vertices validos se solicita al usuario que ingrese cada uno de los indices dependiendo del numero de vertices que tenga la cara, si se ingresa un numero fuera de este rango se reinicia el proceso. Despues de todo esto se imprime la tabla de vertices que se expresa de la manera "v 0 0 0" y debajo la tabla de caras que se expresa de la manera "f 0 0 0".

# Explicacion de ejecucion
Primero se debe ingresar el numero de vertices que queremos ingresar, luego el numero de caras que queremos unir, paso siguiente se ingresan las coordenadas x, y, z de cada uno de los vertices solicitados.
Ahora partiendo del numero de caras que queremos unir se piden los vertices que tiene cada cara, luego se debe ingresar uno por uno el indice del vertice preferido con un rango establecido por el numero de vertices total. Al final, despues de llenar todas las caras requeridas se imprimen ambas listas.
