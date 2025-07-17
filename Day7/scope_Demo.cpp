#include <iostream>
using namespace std;

// 🌐 Global Scope
int value = 10;

void exampleFunction() {
    // 🔧 Function Scope
    int value = 20;  // Shadows global 'value'

    cout << "Inside Function Scope: " << value << endl; // 👉 20

    if (true) {
        // 🔲 Block Scope
        int value = 30;  // Shadows function 'value'
        cout << "Inside Block Scope: " << value << endl; // 👉 30
    }

    cout << "After Block in Function Scope: " << value << endl; // 👉 20
}

int main() {
    exampleFunction();

    cout << "In Global Scope (main): " << value << endl; // 👉 10

    return 0;
}