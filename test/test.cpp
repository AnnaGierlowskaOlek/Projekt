#include "..//src/code.hpp"

#include "vector"
#include "iomanip"
#include "iostream"

using namespace std;

int main() {

    vector<string> tests = {"123456789", "159753", "13794682"};
    for (auto test : tests) {
        if (code(test) != 987654321 && code(test) != 357951 && code(test) != 28649731) {
            cerr << "FAIL: test error for: " << test << " is: " << code(test) << endl;
            return 1;
        }
    }
    cout << "Test OK" << endl;
    return 0;
}