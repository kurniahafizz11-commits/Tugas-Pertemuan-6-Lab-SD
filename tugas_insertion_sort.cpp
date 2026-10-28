#include <iostream>
#include <string>

using namespace std;

int main() {
    string data;

    cout << "Masukkan kata : ";
    getline(cin, data);
    int n = data.size();


    cout << "\n=========================================";
    cout << "\nPROSES SORTING PER KARAKTER :";
    cout << "\n=========================================\n";

    for (int i = 1; i < n; i++) {
        char key = data[i]; 
        int j = i - 1;
        cout << "\n[Putaran ke- " << i << "] Cek karakter '" << key << "':\n";

        // Geser elemen ke kanan
        while (j >= 0 && data[j] > key) {
            cout << " -> Geser '" << data[j] << "'\n";
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key; 

        // Cetak hasil langkah 
        cout << " Hasil: ";
        for (int k = 0; k < n; k++) cout << data[k] << " ";
        cout << "\n";
    }

    return 0;
}
