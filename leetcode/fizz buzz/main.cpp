#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> resposta;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                resposta.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                resposta.push_back("Fizz");
            } else if (i % 5 == 0) {
                resposta.push_back("Buzz");
            } else {
                resposta.push_back(to_string(i));
            }
        }
        return resposta;
    }
};

