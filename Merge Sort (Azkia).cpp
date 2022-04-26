#include <iostream>
using namespace std;

// deklrasi variabel
void merge(int arr[], int l, int m, int r) {
  int i = l;
  int j = m + 1;
  int k = l;

  // membuat temp array 
  int temp[5];

  while (i <= m && j <= r) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      i++;
      k++;
    } else {
      temp[k] = arr[j];
      j++;
      k++;
    }

  }

  // menyalin elemen yang tersisa di babak kedua jika ada  
  while (i <= m) {
    temp[k] = arr[i];
    i++;
    k++;

  }

  // menyalin elemen yang tersisa di babak kedua jika ada 
  while (j <= r) {
    temp[k] = arr[j];
    j++;
    k++;
  }

  // menyalin temp array ke array asli 
  for (int p = l; p <= r; p++) {
    arr[p] = temp[p];
  }
}

// l untuk indeks sebelah kiri and r untuk indeks sebelah kanan di subarray dari array untuk disortir  
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
      
    // mencari titik tengah
    int m = (l + r) / 2;

    // Rekrusif mergesort bagian pertama dan kedua
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // merge
    merge(arr, l, m, r);
  }
}

//menampilkan hasil sorting
void show(int A[], int size)		
{
	int i;
	for (i = 1; i <= size; i++)
	    cout << "[" << A[i] << "]" << " ";
}

int main() {
  int size;
  cout << "Masukkan jumlah array : ";
  cin >> size;
  //int arr_size = sizeof(myarray)/sizeof(myarray[0]);
  int arr[size];


  cout << "Enter integers in any order: " << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  
  // memanggil mergesort(array,kanan,kiri) 
  mergeSort(arr, 0, size); 
  
  // menampilkan hasil sorting melalui looping input
  cout << "After Sorting" << endl;
  show(arr, size);			//memanggil fungsi show(hasil sorting)
  
  cout<<" "<<endl;
  return 0;
}
