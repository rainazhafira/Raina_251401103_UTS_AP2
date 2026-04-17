#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int alprog, pds, so;
    float rata;

    cout <<"Nama mahasiswa : ";
    getline(cin,nama);

    cout << "NIM : ";
    cin >> nim;

    cout << "Algoritma dan Pemrograman : ";
    cin >> alprog;

    cout << "Probabilitas dan Statistika : ";
    cin >> pds;

    cout << "Sistem Operasi : ";
    cin >> so;

    system("CLS");
    cout << endl;

    cout << "Algoritma dan pemrograman : ";
    if (alprog >= 60)
        cout << "Lulus" << endl;
    else
        cout << "Tidak lulus. Silakan ulangi di tahun depan!" << endl;

    cout << "Probabilitas dan statistika : ";
    if (pds >= 60)
        cout << "Lulus" << endl;
    else
        cout << "Tidak lulus. Silakan ulangi di tahun depan!" << endl;

    cout << "Sistem operasi : ";
    if (so >= 60)
        cout << "Lulus" << endl;
    else
        cout << "Tidak lulus. Silakan ulangi di tahun depan!" << endl;

    rata = (alprog + pds + so) / 3.0;

    cout << "Nilai rata-rata semester ini : " << rata;

    return 0;
}