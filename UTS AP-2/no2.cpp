#include <iostream>
using namespace std;

int main() {
    long long biner;
    cout << "Input kode biner : ";
    cin >> biner;

    long long temp = biner;
    int desimal = 0;
    int pangkat = 0;
    int digit;

    while (temp > 0) {
        digit = temp % 10;

        if (digit != 0 && digit != 1) {
            cout << "Pesan Rusak!";
            return 0;
        }

        desimal += digit * (1 << pangkat);

        pangkat++;
        temp /= 10;
    }

    cout << "Angka desimal dari bilangan biner tersebut adalah = " << desimal;

    return 0;
}