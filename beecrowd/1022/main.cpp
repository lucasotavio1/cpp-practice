#include <iostream>
#include <cmath>
using namespace std;

long long gcd(long long a, long long b) {
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
    int N;
    cin >> N;
    while (N--) {
        long long n1, d1, n2, d2;
        char slash1, op, slash2;
        cin >> n1 >> slash1 >> d1 >> op >> n2 >> slash2 >> d2;

        long long res_num, res_den;
        if (op == '+') {
            res_num = n1 * d2 + n2 * d1;
            res_den = d1 * d2;
        } else if (op == '-') {
            res_num = n1 * d2 - n2 * d1;
            res_den = d1 * d2;
        } else if (op == '*') {
            res_num = n1 * n2;
            res_den = d1 * d2;
        } else if (op == '/') {
            res_num = n1 * d2;
            res_den = n2 * d1;
        }

        long long common_gcd = gcd(res_num, res_den);
        long long simplified_num = res_num / common_gcd;
        long long simplified_den = res_den / common_gcd;

        if (simplified_den < 0) {
            simplified_num *= -1;
            simplified_den *= -1;
        }

        cout << res_num << "/" << res_den << " = " << simplified_num << "/" << simplified_den << endl;
    }

    return 0;
}
