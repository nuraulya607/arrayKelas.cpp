#include <iostream>
using namespace std;

string kelas[30];
int pos = -1; // Ubah nilai awal menjadi -1

void inputData(string nama); // deklarasi procedure inputData
void outputData(); // deklarasi procedure tampilkan data

int main() {
    inputData("Indomi goreng plus telor"); // pemanggilan procedure
    outputData();
    inputData("Ayam Bacem Sambal mata"); // pemanggilan procedure
    outputData();
    inputData("Lontong Sayur Lauk Haruan"); // pemanggilan procedure
    outputData();

    return 0;
}

void inputData(string nama) {
    if (pos < 29) { // Pastikan tidak melebihi kapasitas array
        pos++; // Naikkan nilai pos sebelum memasukkan data
        kelas[pos] = nama; // Simpan nama ke dalam array
    } else {
        cout << "Array sudah penuh, tidak bisa menambah data." << endl;
    }
}

void outputData() {
    if (pos == -1) { // Cek apakah tidak ada data
        cout << "Tidak ada data yang dimasukkan." << endl;
        return;
    }
    for (int i = 0; i <= pos; i++) {
        cout << kelas[i];
        if (i < pos) {
            cout << ", "; // koma pemisah data
        } else {
            cout << "." << endl; // titik pemisah data akhir dan pindah baris
        }
    }
}
