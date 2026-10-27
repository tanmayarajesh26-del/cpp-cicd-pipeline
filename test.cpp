#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    if (add(10, 20) != 30) {
        cerr << "TEST FAILED: 10 + 20" << endl;
        return 1;
    }

    if (add(-5, 5) != 0) {
        cerr << "TEST FAILED: -5 + 5" << endl;
        return 1;
    }

    if (add(0, 0) != 0) {
        cerr << "TEST FAILED: 0 + 0" << endl;
        return 1;
    }

    cout << "All 3 tests passed!" << endl;
    return 0;
}
