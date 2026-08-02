//Print a Hollow Square Star Pattern

#include <iostream>
using namespace std;

int main(void) {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
