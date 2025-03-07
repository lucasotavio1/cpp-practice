#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int numero;
    double horas, valorPorHora;

    cin >> numero >> horas >> valorPorHora;

    double salario = horas * valorPorHora;

    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}
