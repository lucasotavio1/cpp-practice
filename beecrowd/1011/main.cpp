#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double raio;
    const double pi = 3.14159;

    cin >> raio;

    double volume  = (4/3.0) * pi * raio * raio * raio;

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}
