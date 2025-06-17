#include <iostream>

using namespace std;

void getNewValue (int* ptr) {
    *ptr += 1200; 
}

int main() {
    system("clear");

    int x = 10;
    int* p = &x;
    cout << "Original Value: " << x << endl;
    getNewValue(p);
    cout << "Value after modified: "  << x << endl;

    return 0;
}

