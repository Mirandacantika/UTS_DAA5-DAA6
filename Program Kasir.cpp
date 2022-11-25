#include <iostream>

using namespace std;

struct barang{
	string nama;
	int harga;
	int beli;
};

int main()
{
	int total;
	int jlh;
	cout << "Banyaknya barang: "; cin >> jlh;
	cout << endl;
	
		barang s[50];

	for (int i = 0; i < jlh; i++){
		
		cout << "Nama barang	: "; cin >> s[i].nama;
		cout << "Harga barang	: "; cin >> s[i].harga;
		
		s[i].beli = s[i].harga;
		total = s[i].beli + total;
		cout << endl;
	}
	
	cout << "\n Struk Belanja Anda\n";
	cout << "______________________";
	cout<<endl;
	for (int k = 0; k < jlh; k++){

		cout << "Nama barang	: " << s[k].nama;
		cout << endl;
		cout << "Harga barang	: " << s[k].harga;
		cout << endl;
		cout <<"_______________________\n";
	}
	cout << "Total Seluruhnya: " << total;
	cout << endl;
		
}
