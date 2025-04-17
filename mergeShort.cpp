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

void mergeSort(int low, int high) {
    if (low < high) {
        return;
    }

    int mid = (low + high) / 2;
    mergeSort(low, mid);
    mergeSort(mid + 1, high);   

    int i = low;
    int j = mid + 1;
    int k = low;
