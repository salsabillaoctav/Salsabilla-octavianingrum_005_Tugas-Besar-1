#include <iostream>
using namespace std;

//fungsi untuk mendapatkan nilai maksimum dari array
int getMax(int arr[], int size) 
{ 
    int max = arr[0]; 
    for (int i = 1; i < size; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
    return max; 
} 

//fungsi untuk melakukan perhitungan array sesuai digit 
void CountingSort(int arr[], int size, int div) 
{ 
    int output[size]; 
    int count[10] = {0}; 
  	
  	//simpan jumlah kemunculan dalam hitungan
    for (int i = 0; i < size; i++) 
        count[ (arr[i]/div)%10 ]++; 
  	
  	//mengubah hitungan sehingga hitungan tersebut berisi dan
  	//posisi hitungan menjadi output
    for (int i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  	
  	//membangun output array
    for (int i = size - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/div)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/div)%10 ]--; 
    } 
  	
  	//menyalin output array ke arr[i] sehingga arr[i] berisi nomor yang diurutkan menurut digit 
    for (int i = 0; i < size; i++) 
        arr[i] = output[i]; 
} 
  
void RadixSort(int arr[], int size) 
{ 
//memanggil pengurutan perhitungan beberapa kali dan berapa kali perhitungan disebut
//akan sama dengan jumlah digit yang dimiliki jumlah maksimum dalam array
    int m = getMax(arr, size); 
    for (int div = 1; m/div > 0; div *= 10) 
        CountingSort(arr, size, div); 		//menghitung sort
} 
  
int main()
{
	cout << "======= Radix Sort ========" << endl;
	cout << endl;
	//inisialisasi variable
	int size;		
	cout << "Masukkan Jumlah Array : " << endl;
	cin >> size;	//input jumlah array
	int arr[size];
	
	cout << "Masukkan Nilai Array : " << endl;
	
	//looping nilai array yang dimasukkan user
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	cout << endl;
	
	//memanggil function radix sort
	RadixSort (arr, size);
	
	cout << "Hasil array yang sudah disorting adalah : " << endl;
	
	//looping hasil yang telah disorting
	for(int i=0; i<size; i++){
		cout << "[" << arr[i] << "]" << " ";
	}
	
	return 0;
}
