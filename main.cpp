#include<iostream>
using namespace std;

//fungsi untuk menukar isi dari variabel a dengan variabel b
void swapping(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	// int a adalah untuk angka pertama
	// dan int b adalah untuk angka kedua
	// temp adalah tempat sementara bagi variabel yang sudah ditukar
}
// fungsi untuk menampilkan hasil array yang nantinya sudah selesai disortir oleh program
void display(int *array, int size){
	for(int i = 0; i<size; i++)
		cout << array[i] << " ";
	cout << endl;
}

// fungsi untuk melakukan selection sort
void selectionSort(int *array, int size){
	int i, j, imin;
	for(i = 0; i<size-1; i++){
		imin = i;	//mencari elemen minimum dari array yang tidak beraturan
		for(j = i+1; j<size; j++)
			if(array[j] < array[imin])
				imin = j;
			//menukar elemen minimum dengan elemen pertama
			swap(array[i], array[imin]);
	}
}
// fungsi untuk memulai program diatas
int main(){
	int n;
	cout << "Masukkan jumlah elemen:"; // memasukkan jumlah elemen yang diinginkan
	cin >> n;
	int arr[n]; //membuat array dengan jumlah elemen yang diberikan
	cout << "Masukkan elemen:" << endl;
	for(int i = 0; i<n; i++){
		cin >> arr[i]; // dimasukkannya elemen yang sudah diinputkan oleh user kedalam array
	}
	// untuk memunculkan array yang belum disorting
	cout << "Array sebelum sorting:";
	display(arr, n);
	selectionSort(arr, n); // dilakukannya penyortiran array
	cout << "Array sesudah sorting:";
	display(arr, n); // fungsi untuk memunculkan array yang sudah disortir
}
