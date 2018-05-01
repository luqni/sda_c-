#include <iostream>
using namespace std;
void binary (int n);
int main (){
	int arr [10], n;

cout << " Masukkan jumlah data = ";cin >> n;
	for (int i= 0 ; i<n ; i++){
		cout << " Masukkan angka pada index [" << i << " ] = " ; cin >> arr [i];
	}
		cout<<"Data Awal"<<endl;
		for (int k=0 ; k<n ; k++){
			cout<<arr[k]<< " ";
		}
		binary (n);
	
}
void binary (int n){
	int m, x, l ,r;
	int arr[10];
	int ketemu = 0;
	cout <<"Masukkan data yang mau di cari = "; cin>>x;
	l=0;
	r=n-1;
	while (l<=r){
		m=(l+r)/2;
		if (x==arr[m]){
			cout << "Data di temukkan di indek =  [" <<m<< "]  ";
			cout <<endl;
			ketemu++;
		}else if  (x<arr[m]){
			r = m-1;
		}else {
			l = m+1;
		}
	}
}
