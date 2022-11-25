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
    	for (int j = 0; j < data - 1; j++){
    		if (s[j].nim > s[j+1].nim){
    			swap (s[j].nim, s[j+1].nim);
    			swap (s[j].nama, s[j+1].nama);
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
