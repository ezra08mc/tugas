#include <iostream>
using namespace std;

int main() {
    int jam1, menit1, jam2, menit2;

    cout << "Masukkan waktu pertama (jam menit): ";
    cin >> jam1 >> menit1;

    cout << "Masukkan waktu kedua (jam menit): ";
    cin >> jam2 >> menit2;

    int totalMenit1 = jam1 * 60 + menit1;
    int totalMenit2 = jam2 * 60 + menit2;

    int selisihMenit = totalMenit2 - totalMenit1;

    if (selisihMenit < 0) {
        selisihMenit = -selisihMenit;
        cout << "Waktu kedua lebih awal." << endl;
    }

    int selisihJam = selisihMenit / 60;
    int selisihSisaMenit = selisihMenit % 60;

    cout << "Selisih waktu: " << selisihJam << " jam dan " << selisihSisaMenit << " menit." << endl;

    return 0;
}
