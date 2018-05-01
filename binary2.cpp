#include <iostream>
#include <cstdlib>
using namespace std;
void binary (int n);
int arr[10];
int main (){
	int n;
	int inputdata[10]={1,3,4,5,6,9,10,11,13,15};
	for (int i=0 ; i<n ; i++){
		cout <<arr[i]<< " ";
	
	binary (n);
}
void binary (int n){
	int m, x, l, r;
	bool ketemu = false;
	int inputdata[10]={1,3,4,5,6,9,10,11,13,15};
	for (int i=0 ; i<n ; i++){
		cout <<arr[i]<< " ";
	}
	cout<<endl;
	cout <<"Masukkan data yang mau di cari = "; cin>>x;
	l=0;
	r=n-1;
	while (l<=r && !ketemu){
		m=(l+r)/2;
		if (arr[m]==x){
			ketemu = true;
			break;
			cout <<endl;
		}else if  (x<arr[m]){
			r = m-1;
		}else if (x>arr[m]) {
			l = m+1;
		}
	}
	if (ketemu=true){
		cout << "Data di temukkan di indek =  [" <<m<< "]  "<<endl;
		
	} else {
		cout << "Data tidak ditemukan"<<endl;
	}
}

