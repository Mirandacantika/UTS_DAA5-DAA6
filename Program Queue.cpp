#include<iostream>
#include<queue>

using namespace std;

int main(){
	string warna_mata;
	int max;
	
	queue<string>wm;
	
	cout<<"Banyaknya data : ";
	cin>>max;
	
	for(int i=0; i<max; i++){
		cout<<"Warna Mata Kamu : "; 
		cin>>warna_mata;
		
		wm.push(warna_mata);
	}
	
	cout<<"Urutan keluar : ";
	cout<<endl;
		for(int j=0; j<max; j++){
			cout<<" "<<wm.front();
			wm.pop();
			
		}
		
}
