#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i = 0, jumlah = 0;

    cout << "Masukkan daftar judul buku: ";
    getline(cin, kalimat);

    while (i < kalimat.length()) {
        
        if (kalimat[i] != ' ' && (i == 0 || kalimat[i - 1] == ' ')) {
            jumlah++;
        }
        i++;
    }

    cout << "Jumlah judul buku: " << jumlah;

    return 0;
}