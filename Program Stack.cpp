#include<iostream>
#include<stack>

using namespace std;

int main(){
	string warna_mata;
	int max;
	
	stack<string>wm;
	
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
			cout<<" "<<wm.top();
			wm.pop();
			
		}
		
}
