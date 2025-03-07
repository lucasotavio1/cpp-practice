#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cin >> n;

    cout << n << endl;

    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};

    for (int cedula : cedulas) {
        int quantidade = n / cedula;
        cout << quantidade << " nota(s) de R$ " << cedula << ",00" << endl;
        n %= cedula;
    }


    return 0;
}
