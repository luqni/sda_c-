#include<iostream>
using namespace std;
int main(){
	int n, temp, j, angka [12], min, min_indx,x, kanan, kiri, tengah, k;
	bool ketemu=false;
	cout<< "Masukkan Jumlah data : ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<< "Angka ke - [" <<i<< "] : ";
		cin>>angka[i];
	}
	cout<<" Data anda adalah = ";
	for (int j=0; j<n; j++){
		cout<< angka[j]<<" ";
		k=j;
	}
		
	for(int i=0; i<n; i++){
		min=angka[i];
		min_indx=i;
		for(int j=i+1; j<n; j++){
			if(angka[j] < min){
			min=angka[j];
			min_indx=j;
			}
		
		}
		temp = angka[i];
        angka[i]=angka[min_indx];
        angka[min_indx]=temp;
	}
	//cout<< "Data terurut = ";
	//for(int i=0; i<n; i++){
		//cout<<angka[i]<<" ";		
	//}
	cout<<" \n Masukkan angka yang mau di cari : ";
	cin>>x;
	kiri=0;
	kanan=n-1;
	while(kiri<=kanan){
		tengah=(kiri+kanan)/2;
		
		if(angka[tengah] == x){
			cout<< "Data anda ketemu !\n";
			cout<< "Di index ke - "<<tengah;
			ketemu=true;
			break;
		}else if (x<angka[tengah]){
			kanan=tengah-1;
		}else {
			kiri=tengah+1;
		}
	}
	if (ketemu==false){
		
		cout<< "tidak ada";
	}

}




