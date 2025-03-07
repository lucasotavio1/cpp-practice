#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int codigo1, quantidade1, codigo2, quantidade2;
   double valorUnitario1, valorUnitario2;

   cin >> codigo1 >> quantidade1 >> valorUnitario1;
   cin >> codigo2 >> quantidade2 >> valorUnitario2;

   double totalPagar = (quantidade1 * valorUnitario1) + (quantidade2 * valorUnitario2);

   cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalPagar << endl;
   return 0;
}
