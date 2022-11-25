#include <iostream>

using namespace std;

struct Siswa{
	string nama;
	int nim;
};

int main()
{
	int data;
	cout<<"Jumlah data : ";
	cin>>data;
	cout<<"\n";
	
	Siswa s[50];
	
	for(int i = 0 ;i  < data; i++){
		cout<<"Nama Mahasiswa/i ke-"<<i+1<<"	: ";
		cin>>s[i].nama;
		cout<<"NIM Mahasiswa/i ke-"<<i+1<<"	: ";
		cin>>s[i].nim;

	}
	
	for (int j = 0; j < data - 1; j++){
    	for (int k = 0; k < data - 1; k++){
    		if (s[k].nim > s[k+1].nim){
    			swap (s[k].nim, s[k+1].nim);
    			swap (s[k].nama, s[k+1].nama);
    			cout << endl;
			}
		}
	}
	
	cout << "\n--------------------------------------\n";
	cout << " Urutan Mahasiswa Berdasarkan NIM : ";
	cout << endl;

	for (int l = 0; l < data; l++){
		cout << "  " << s[l].nama<< " "<< s[l].nim << "\n";
	}
	
}
