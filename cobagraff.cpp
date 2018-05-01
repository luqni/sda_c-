#include<iostream>
using namespace std;
int jumlahVerteks = 5;
int A [5][5];
int asal;
int tujuan;


void bentukGraf();
void infoGraf();
//int A [5][5];

int main(){
	int pilihan;
	do {	
			cout<<"*****MENU UTAMA*****"<<endl;
			cout<<"Strutur Data Graf"<<endl;
			cout<<"1. Bentuk Graf"<<endl;
			cout<<"2. Info Graf"<<endl;
			cout<<"3. Exit"<<endl;
			cout<<"Masukkan Pilihan Anda = ";
			cin>>pilihan;
			
			if(pilihan==1){
				bentukGraf();
			}if(pilihan == 2){
				infoGraf();
			}
			
	} while (pilihan != 3);
		return 0;
	
}

void bentukGraf(){
	char jawab;
	int asal, tujuan, nilai;
	while(jawab != 'T' && jawab != 't'){
		//input dari
		//input ke
		//input bobot/nilai
		cout<<"Input verteks asal : ";
		cin>>asal;
		cout<<"Input verteks tujuan : ";
		cin>>tujuan;
		cout<<"Input nilai : ";
		cin>>nilai;
		A[asal][tujuan] = nilai;
		A[tujuan][asal] = nilai;
		cout<<"Apakah ingin menambahkan hubungannya ? (y/t)";
		cin>>jawab;
	}
}

void infoGraf(){
	for(int i=0; i<=5; i++){
		for(int j=0; j<=5; j++)
			if (A[i][j] !=0){
			switch (i){
				case 0: cout<<"Verteks A : ";
				break;
				case 1: cout<<"Verteks B : ";
				break;
				case 2: cout<<"Verteks C : ";
				break;
				case 3: cout<<"Verteks D : ";
				break;
				case 4: cout<<"Verteks E : ";
				break;
				}
				cout<<"dengan bobot "<<A[i][j]<<" : ";
			} cout<<endl;
			
	}
	for(int i=0; i<=5; i++){
		for(int j=0; j<=5; j++)
			if (A[i][j] !=0){
			switch (j){
				case 0: cout<<"Verteks A : ";
				break;
				case 1: cout<<"Verteks B : ";
				break;
				case 2: cout<<"Verteks C : ";
				break;
				case 3: cout<<"Verteks D : ";
				break;
				case 4: cout<<"Verteks E : ";
				break;
				}
				cout<<"dengan bobot "<<A[i][j]<<" : ";
			}cout<<endl;
			
	}
}


