#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang > 0 && nPanjang <= 10) {
            break;
        } else {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }
    }
    
    cout << "\n======================================================\n";
    cout << "\t\t\tMasukkan elemen array";
    cout << "\n======================================================\n";

    for (int i = 0; i < nPanjang; i++) {
        cout << "Elemen ke-" << i + 1 << " = ";
        cin >> element[i];
    }
}

void bubbleSortArray() {
    int pass = 1;

    do
    {
        for (int j = 0; j < nPanjang - 1 - pass; j++) {
            if (element[j] > element[j + 1]) {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        
        pass++;
    } while (pass <= nPanjang - 1);
}

void display() {
    cout << "\n======================================================\n";
    cout << "\t\t\tElemen array setelah diurutkan";
    cout << "\n======================================================\n";

    for (int j = 0; j < nPanjang; j++) {
        cout << element[j];
        if (j < nPanjang - 1) {
            cout << " --> ";
        }
    }

    cout << endl;
}

void binarySearch() {
    char ulang;

    do {
        cout << "\n======================================================\n";
        cout << "\t\t\tPencarian Binary Search";
        cout << "\n======================================================\n";

        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = nPanjang - 1;

        do {
            int mid = (low + high) / 2;
            if (element[mid] == x)
                cout << "\n[✓] Elemen " << x << " ditemukan pada indeks " << mid << ".\n";
                return;
            
            if (x < element[mid]) {high = mid - 1;} else {low = mid + 1;}
        } while (low <= high);
    } while (ulang == 'y' || ulang == 'Y');
}