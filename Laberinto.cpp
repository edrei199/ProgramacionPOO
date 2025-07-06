#include <iostream>
#include <fstream>
#include <string>

// Emeth Edrei Jimenez Alvarado 
// Programa: Visualizador de Laberintos
// Función: Leer y mostrar un laberinto desde un archivo de texto

using namespace std;

void cargarLaberintoDesdeArchivo(const string& nombreArchivo);

int main() {
    string archivo = "Laberinto.txt";
    cargarLaberintoDesdeArchivo(archivo);

    system("pause");
    return 0;
}

void cargarLaberintoDesdeArchivo(const string& nombreArchivo) {
    ifstream entrada;
    entrada.open(nombreArchivo.c_str());  // Forma compatible con C++ antiguos y nuevos

    string linea;
    int totalLineas = 0;

    if (!entrada.is_open()) {
        cout << "?? Error al abrir el archivo: '" << nombreArchivo << "'" << endl;
        cout << "Verifica que el archivo se encuentre en el mismo directorio del programa." << endl;
        return;
    }

    cout << "\n===== VISUALIZADOR DE LABERINTO =====\n";
    cout << "Archivo: " << nombreArchivo << "\n";
    cout << "Leyenda: | = muro, _ = camino, * = ruta solucionada\n";
    cout << "Inicio: esquina superior izquierda | Salida: esquina inferior derecha\n\n";

    while (getline(entrada, linea)) {
        cout << linea << endl;
        totalLineas++;
    }

    entrada.close();

    cout << "\n? Laberinto mostrado correctamente." << endl;
    cout << "Líneas leídas: " << totalLineas << endl;
}

