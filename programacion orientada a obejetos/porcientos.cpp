#include <iostream>
#include <cmath>
#include <iomanip>

//Emeth Edrei Jimenez Alvarado

using namespace std;

int main() {
    
    const double deposito_mensual = 15000.0;
    const double tasa_interes = 0.037; // 3.7% mensual
    const int anios = 15; 
    const int meses = anios * 12;
    
    double valor_futuro = deposito_mensual * ((pow(1 + tasa_interes, meses) - 1) / tasa_interes); 
    
    cout << fixed << setprecision(2);
    cout << "Calculadora de Ahorro a 15 a�os con Interes Compuesto\n";
    cout << "Deposito mensual: $" << deposito_mensual << endl;
    cout << "Tasa de interes mensual: " << tasa_interes * 100 << "%\n"; 
    cout << "Periodo: " << anios << " a�os (" << meses << " meses)\n";
    cout << "Monto acumulado: $" << valor_futuro << endl;
    
    return 0;
}

