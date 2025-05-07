#include <iostream>
using namespace std;

int arr[20]; // array to be searched
int n; // number of elements in the array
int i; // index of array element

void input() {
    while (true) {
        cout << "Enter the number of elements in the array (1-20): ";
        cin >> n;
        if ((n > 0) && (n <= 20)) {
            break;
        } else {
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n";
        }
    }

    // accept array elements
    cout << "\n---------------------------------------\n";
    cout << "Enter array elements :";
    cout << "\n---------------------------------------\n";
    
    for (i = 0; i < n; i++) {
        cout << "<" << i + 1 << "> : ";
        cin >> arr[i];
    }
}

void linearSearch() {
    char ch;
    int ctr; // number of comparisons
    int item;

    do {
        // accept the number to be searched
        cout << "\n---------------------------------------\n";
        cout << "Enter the element you want to search : "; // step 1
        cin >> item;
        cout << "\n---------------------------------------\n";

        ctr = 0;
        i = 0; // step 2

        while (i < n) { // step 3
            ctr++;

            if (arr[i] == item) {
                cout << "\n" << item << " is found at position " << i + 1 << endl;
                break;
            }
            i++; // step 4
        }
        
        if (i == n) // step 5
            cout << "\n" << item << " is not found in the array.\n";
        cout << "\nNumber of comparisons: " << ctr << endl;
        
        cout << "\nContinue searching? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

int main() {
    input(); // accept array elements
    linearSearch(); // perform linear search
    return 0;
}