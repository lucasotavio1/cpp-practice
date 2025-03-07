#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   string nome;
   double salarioFixo, totalVendas;

   cin >> nome >> salarioFixo >> totalVendas;

   double totalReceber = salarioFixo + (totalVendas * 0.15);

   cout << "TOTAL = R$ " << fixed << setprecision(2) << totalReceber << endl;

   return 0;
}
