#include <iostream>
using namespace std;

void star(int n) {
    int spaces = 0;

    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {  // Fix loop condition
            cout << "*";
        }

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++) {  // Fix loop condition
            cout << "*";
        }

        spaces += 2;
        cout << endl;
    }

    // Lower part
    spaces = 2 * (n - 1); // Correcting space decrement logic
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    star(n);
    return 0;
}

