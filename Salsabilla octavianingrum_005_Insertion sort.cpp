#include <iostream>
using namespace std;

int main(){

	//inisialisasi variabel
	int input_batas;

	cout<<"Masukkan batas array	: ";
	cin>>input_batas;
	cout<<endl;

	cout<<"Masukkan elemen array	:\n";

	//Looping untuk memasukkan angka
	int input_angka[input_batas];

	for(int loop_1=0; loop_1<input_batas; loop_1++){
		cout<<"masukan angka ke "<<loop_1<<" :";
		cin>>input_angka[loop_1];
	}
	cout<<endl;

	//Proses Sorting
	for(int loop_1=1; loop_1<input_batas; loop_1++){

		int key = input_angka[loop_1];
		int loop_2 = loop_1-1;

		while(loop_2>=0 && input_angka[loop_2] > key){
			input_angka[loop_2+1] = input_angka[loop_2];
			loop_2--;
		}

		input_angka[loop_2+1] = key;
	}

	//Perintah menampilkan hasil sorting
	cout<<"hasil akhir"<<endl;
	for(int loop_3=0; loop_3<input_batas; loop_3++){
		cout << "[" << input_angka[loop_3] << "] ";
	}
}
