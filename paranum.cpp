#include <iostream>
using namespace std;

// Function with one parameter
void show(int a) {
    cout << "One parameter: " << a << endl;
}

// Function with two parameters
void show(int a, int b) {
    cout << "Two parameters: " << a << ", " << b << endl;
}

// Function with three parameters
void show(int a, int b, int c) {
    cout << "Three parameters: " << a << ", " << b << ", " << c << endl;
}

int main() {
    show(5);               // Calls show(int)
    show(10, 20);          // Calls show(int, int)
    show(1, 2, 3);         // Calls show(int, int, int)

    return 0;
}
