#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    double y;

    cin >> x >> y;

    double consumoMedio = x/y;

    cout << fixed << setprecision(3) << consumoMedio << " km/l" << endl;

    return 0;
}
