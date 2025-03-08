//não entendi

#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    int n;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        for (char &c : s) {
            if (isalpha(c)) {
                c += 3;
            }
        }

        reverse(s.begin(), s.end());

        int len = s.length();
        int start = len / 2;

        for (int j = start; j < len; j++) {
            s[j] -= 1;
        }

        cout << s << '\n';
    }

    return 0;
}
