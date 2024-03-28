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

// Swaps the element at index x with the element at index y
void swap(int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void q_sort(int low, int high) {
    int pivot, i, j;
    if (low >= high) { // Step 1
        return;
    }

    pivot = arr[low]; // Step 2
    i = low + 1; // Step 3
    j = high; // Step 4

    while (i <= j) { // Step 10
        // Search for an element greater than pivot
        while (arr[i] < pivot && i <= high) { // Step 7
            i++; // Step 6
            cmp_count++;
        }
        // Search for an element less than or equal to pivot
        while (arr[j] > pivot && j >= low) { // Step 7
            j--; // Step 8
            cmp_count++;
        }
            if (i < j) { // Step 9
                // Swap the element at index i with the element at index j
                swap(i, j);
            }
        }
    if (low < j) { // Step 11
        // Swap the pivot element with the element at index j
        swap(low, j);
    }

    // Recursive call to sort the left sub array
    q_sort(low, j - 1); // Step 12

    // Recursive call to sort the right sub array
    q_sort(j + 1, high); // Step 13
}

void display() {
    cout << "\n----------------" << endl;
    cout << "Sorted Array" << endl;
    cout << "------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\nNumber of comparisons : " << cmp_count << endl;
    cout << "Number of data movements : " << mov_count << endl;
}


    int main(); {
        ;
    }
