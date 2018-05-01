#include <iostream>
using namespace std;
void binary (int n);
int main(){
	int inputdata[10]={1,3,4,5,6,9,10,11,13,15};
	for (int i=0 ; i<10 ; i++){
		cout<<inputdata[i]<< " ";
	}
	cout<<binary (n);
	
}
void binary (int n){
	int inputdata[10]={1,3,4,5,6,9,10,11,13,15};
	int m,i,  l, r, n;
	bool ketemu = false;
	cout <<"Masukkan data yang mau di cari = "; cin>>i;
	l=0;
	r=n-1;
	while (l<=r && !ketemu){
		m=(l+r)/2;
		if (inputdata[m]==i){
			ketemu = true;
			break;
			cout <<endl;
		}else if  (i<inputdata[m]){
			r = m-1;
		}else if (i>inputdata[m]) {
			l = m+1;
		}
	}
	if (ketemu=true){
		cout << "Data di temukkan di indek =  [" <<m<< "]  "<<endl;
		
	} else {
		cout << "Data tidak ditemukan"<<endl;
	}
}

	


