N = int(input("¿Cuántos vértices quieres? "))  
f = int(input("¿Cuántas caras quieres unir? "))  

tablero = []

for i in range(N):
    x = int(input(f"x en el vértice {i+1}: "))  
    y = int(input(f"y en el vértice {i+1}: "))  
    z = int(input(f"z en el vértice {i+1}: "))  
    tablero.append([x, y, z])

caras = []

for i in range(f):
    cara = []
    vert = int(input(f"¿Cuántos vértices tiene la cara {i+1}?, de 1 a {N}: "))
    if vert > N:
        print ("vertices invalidos")
        break
    else:
        for j in range(vert):
            tabla = int(input(f"Ingrese el índice del vértice {j+1}, de 0 a {N-1}: "))
            if tabla < 1 or tabla > N:
                print(f"Índice inválido. El índice debe estar entre 0 y {N-1}.")
                break
            else:
                cara.append(tabla) 
        caras.append(cara)
    
for vertice in tablero:
    print("v", " ".join(map(str, vertice)))

for cara in caras:
    print("f", " ".join(map(str, cara)))
