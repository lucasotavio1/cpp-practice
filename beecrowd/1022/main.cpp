#include <iostream>
#include <cmath>

using namespace std;

long long mdc(long long a, long long b) {
    a = abs(a);
    b = abs(b);
    
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int n;
    
    cin >> n;
    
    while (n--) {
        long long numerador1, denominador1, numerador2, denominador2;
        char barra1, operador, barra2;
        
        cin >> numerador1 >> barra1 >> denominador1 >> operador >> numerador2 >> barra2 >> denominador2;

        long long numeradorResultado, denominadorResultado;
        
        if (operador == '+') {
            numeradorResultado = numerador1 * denominador2 + numerador2 * denominador1;
            denominadorResultado = denominador1 * denominador2;
        } else if (operador == '-') {
            numeradorResultado = numerador1 * denominador2 - numerador2 * denominador1;
            denominadorResultado = denominador1 * denominador2;
        } else if (operador == '*') {
            numeradorResultado = numerador1 * numerador2;
            denominadorResultado = denominador1 * denominador2;
        } else if (operador == '/') {
            numeradorResultado = numerador1 * denominador2;
            denominadorResultado = numerador2 * denominador1;
        }

        long long divisorComum = mdc(numeradorResultado, denominadorResultado);
        long long numSimplificado = numeradorResultado / divisorComum;
        long long denSimplificado = denominadorResultado / divisorComum;

        if (denSimplificado < 0) {
            numSimplificado *= -1;
            denSimplificado *= -1;
        }

        cout << numeradorResultado << "/" << denominadorResultado << " = " << numSimplificado << "/" << denSimplificado << endl;
    }

    return 0;
}
