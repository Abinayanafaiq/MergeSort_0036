#include <iostream>
using namespace std;

int arr[20], B[];   // Ukuran array maksimum 20
int n;           // Variabel untuk panjang array


void input() {
    while (true) {
        cout << "Masukkan panjang elemen array: ";
        cin >> n;

        if (n <= 20) {
            break;
        } else {
            cout << "\nMaksimal panjang array adalah 20\n";
        }
    }

    cout << "\n=====================";
    cout << "\nInputkan isi elemen array";
    cout << "\n=====================\n";

    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> arr[i];
    }
}
