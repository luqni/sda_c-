#include<iostream>
using namespace std;
int main(){
	int n, i, ketemu;
	int f_dicari, data[10];
	
	cout<<" masukkan jumlah data = "; cin>>n;
	for (int p=0; p<n; p++){
		cout<< " Masukkan data nama = ";cin>>data[p];
	}
	i=0;
	cout<< "Masukkan nama yang dicari = ";cin>>f_dicari;
	ketemu=0;
	while ((i<10)&&ketemu==0){
		if(data[i] == f_dicari){
    ketemu=1;
    cout<<" \n Pencarian sequential "<<f_dicari<<" Ada Pada Indeks ke - " <<i;
    	}else{
    i=i+1;
	}
if(ketemu == 1){

cout<<"\n Data ada dalam larik!!! "<<endl;
}else{
cout<<"\n Data tidak ada dalam larik!!!"<<endl;
	}
	}
}
