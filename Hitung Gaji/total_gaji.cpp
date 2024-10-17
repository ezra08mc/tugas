#include <iostream>
#include <iomanip> // Untuk setprecision
using namespace std;

long gol_I = 150000, gol_II = 300000, gol_III = 600000, gol_IV = 1200000, lembur_per_jam = 50000;

int main() {
    int golongan, jam_kerja, lembur_jam;
    long total_gaji;

    cout << "\t\tTOTAL GAJI\t\t" << endl;
    cout << "Masukkan golongan (1/2/3/4): ";
    cin >> golongan;

    if (golongan < 1 || golongan > 4) {
        cout << "Golongan tidak valid. Harap masukkan 1, 2, 3, atau 4." << endl;
        return 1; 
    }

    cout << "Masukkan jumlah jam kerja: ";
    cin >> jam_kerja;

    double upah_per_jam;
    switch (golongan) {
        case 1:
            upah_per_jam = gol_I;
            break;
        case 2:
            upah_per_jam = gol_II;
            break;
        case 3:
            upah_per_jam = gol_III;
            break;
        case 4:
            upah_per_jam = gol_IV;
            break;
    }

    total_gaji = upah_per_jam * jam_kerja;

    cout << "Masukkan jumlah jam lembur: ";
    cin >> lembur_jam;

    total_gaji += lembur_jam * lembur_per_jam;

    cout << fixed << setprecision(0); 
    cout << "\nTotal gaji: Rp." << total_gaji << endl;

    return 0;
}
