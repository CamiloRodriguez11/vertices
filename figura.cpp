#include <iostream>

using namespace std;

int main() {
    int N, f;
    
    cout << "¿Cuántos vértices quieres? ";
    cin >> N;
    
    cout << "¿Cuántas caras quieres unir? ";
    cin >> f;

    int tablero[100][3];

    for (int i = 0; i < N; i++) {
        cout << "x en el vértice " << i + 1 << ": ";
        cin >> tablero[i][0];
        cout << "y en el vértice " << i + 1 << ": ";
        cin >> tablero[i][1];
        cout << "z en el vértice " << i + 1 << ": ";
        cin >> tablero[i][2];
    }

    
    int caras[100][100];
    int tamaños[100];
    
    for (int i = 0; i < f; i++) {
        cout << "¿Cuántos vertices tiene la cara " << i + 1 << "?: de 1 a " << N << ": ";
        cin >> tamaños [i];
        if (tamaños [i] > N) {
            cout << "vertices invalidos. " << endl;
            i--; 
            continue;
        }else{
            for (int j = 0; j < tamaños[i]; j++) {
                cout << "Ingrese el índice del vértice " << j + 1 << ": de 0 a " << N-1 << ": ";
                cin >> caras[i][j];
                if (caras[i][j] < 1 || caras[i][j] > N) {
                    cout << "Índice inválido. El índice debe estar entre 0 y " << N-1 << "." << endl;
                    j--; 
                }
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << "v " << tablero[i][0] << " " << tablero[i][1] << " " << tablero[i][2] << endl;
    }
   
    for (int i = 0; i < f; i++) {
        cout << "f ";
        for (int j = 0; j < tamaños[i]; j++) {
            cout << caras[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
