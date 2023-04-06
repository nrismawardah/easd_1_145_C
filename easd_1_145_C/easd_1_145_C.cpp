// 1. Dibutuhkan suatu algorithma agar suatu masalah tersebut dapat terpecahkan dengan terstruktur
// 2. Array dan Linked list
// 3. Faktor-faktor yang memengaruhi efisiensi suatu program algorithma yaitu ukuran input, jenis input, kompleksitas, kualitas implementasi, hardware
// 4. Insertion sort karena mudah diimplementasikan dan kompleksitasnya rendah
// 5. Quadratic algorithma yaitu bubble sort dan selection sort, sedangkan loglinear algorithma yaitu merge sort dan quick sort

#include <iostream>
using namespace std;

int dhira[65];
int n;

void input() {
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 65)
            break;
        else {
            cout << "\nArray dapat memiliki maksimal 65 elemen. \n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> dhira[i];
    }
}

void s_sort(int dhira[], int n) {
    int i,nr,min_index;
    
    for (nr = 0; nr < n - 1; nr++) {
        min_index = nr;
    }
}