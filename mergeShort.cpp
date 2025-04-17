#include <iostream>
using namespace std;
int array[]



void input(){
    while(true){
        cout << "masukan Panjang element array";
        cin >> n;

        if (n<=20){
            break;
        }
        else {
            cout << "\nmaksimal panjang array adalah 20\n";
        }
    }

    cout << "\n=====================";
    cout << "\nInputkan isi element array";
    cout << "\n====================="; << endl;



    for (int i=0; i<n; i++){
        cout << "element ke-" << i+1 << " : ";
        cin >> array[i];
    }
}