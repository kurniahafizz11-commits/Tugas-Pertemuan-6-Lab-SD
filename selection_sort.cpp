#include <iostream>
using namespace std;

int main() {
    int data[] = {5, 2, 4, 1, 3};
    // 1, 2, 4, 5, 3 -> akan mengikuti array baru
    int n = 5;

    for (int i = 0; i < n - 1; i++){
        int minIndex = i; //patokan awal index 0

        for (int j = i + 1; j < n; j++) { // j = 1 -> j=2, -> j=3, -> j=4
            if (data[j] <  data[minIndex]){ // 2 < 5?, -> 4 < 2?, -> 1 < 2?, -> 3 < 1?
                minIndex = j; // indek 1 -> indek 3
            }
        }

        swap (data[i], data[minIndex]); // 5 -> 1
    }

    cout << "Hasil Selection Sort: ";
    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    return 0;
}