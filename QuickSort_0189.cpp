#include <iostream>
using namespace std;

// array of integers to hold values
int arr[20];
int cmp_count = 0; // number of comparisons
int mov_count = 0; // number of data movements
int n;

void input() {
    while (true) {
        cout << "Masukan panjang elemen array : ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n----------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n----------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}


    int main() {
        ;
    }
