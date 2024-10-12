#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Masukkan bilangan A: ";
    cin >> A;
    cout << "Masukkan bilangan B: ";
    cin >> B;

    if (A > B) {
        cout << "A lebih besar dari B." << endl;
    } else if (A < B) {
        cout << "B lebih besar dari A." << endl;
    } else {
        cout << "A sama dengan B." << endl;
    }

    return 0;
}
