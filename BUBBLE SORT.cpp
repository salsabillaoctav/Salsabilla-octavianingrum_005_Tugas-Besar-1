#include <iostream>

using namespace std;

int main(){

    // deklarasi variabel
    int array[100], n, i, j,tmp;
    // n untuk menentukan jumlah array
    // i untuk looping pertama
    // j untuk looping kedua
    // tmp untuk penempatan sementara sebuah variabel

    cout << "Masukkan batas array: ";
    cin >> n;
    cout << endl;
    cout << "Masukkan nilainya: \n";

    // looping pertama
    // untuk memasukkan data ke dalam array
    for (i = 0; i < n; i++){
        cin >> array[i];
    }

    // proses looping akan terus berjalan sesuai jumlah data array
    for (i = 0; i < n; i++){
        for (j = 0; j < n - i - 1; j++){

            // proses looping dimulai
		// proses akan tetap berjalan meskipun nilai data sudah terurut
            if (array[j] > array[j + 1]){
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

    // perintah menampilkan hasil akhir
    cout << endl;
    cout << "Hasil akhir sorting: \n";
    for (i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}
