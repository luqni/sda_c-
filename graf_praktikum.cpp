#include <iostream>

using namespace std;

int jumlahVerteks = 0;
int A [5][5];
int asal;
int tujuan;
void inisialisasi(){
	jumlahVerteks = 5;
}

void bentukGraf();
void infoGraf();
//int A [5][5];


int main(){
	int pilih;

	do {
		cout<<"Menu Graph Muhammad Luqni Baehaqi"<<endl;
		cout<<"1. Masukkan graph"<<endl;
		cout<<"2. Tampilkan"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Masukkan pilihan = ";cin>>pilih;
		if (pilih == 1){
			bentukGraf();
		}
		if (pilih == 2){
			infoGraf();
		}
		else {
			
		}
	}while (pilih != 3);
	
}


void bentukGraf(){
	int asal, tujuan, nilai;
	char jawab;
	while (jawab != 't' && jawab != 'T'){
		//input dari
		cout<<"Masukkan asal = ";cin>>asal; 
		//input ke
		cout<<"Masukkan tujuan = ";cin>>tujuan;
		//input bobot/nilai
		cout<<"masukkan bobotnya = ";cin>>nilai;
		A [asal][tujuan]= nilai;
		//A [tujuan][asal] = nilai;
		cout<<"Apakah ingin menambah hubungan ? (y/t) = ";
		cin>>jawab;
	}
}
void infoGraf(){
	for (int i = 0; i<=5; i++){
		switch(i){
			case 0 : cout<<"Verteks A -----> ";
			break;
			case 1 : cout<<"Verteks B -----> ";
			break;
			case 2 : cout<<"Verteks C -----> ";
			break;
			case 3 : cout<<"Verteks D -----> ";
			break;
			case 4 : cout<<"Verteks E -----> ";
			break;
			
		}
		for (int j = 0; j<=5; j++){
			if (A [i][j] != 0){
				switch(j){
					case 0 : cout<<"Verteks A -----> ";
					break;
					case 1 : cout<<"Verteks B -----> ";
					break;
					case 2 : cout<<"Verteks C -----> ";
					break;
					case 3 : cout<<"Verteks D -----> ";
					break;
					case 4 : cout<<"Verteks E -----> ";
					break;
			
				}
				cout<<" dengan bobot "<<A[i][j]<<" : ";
			}
		}cout<<endl;
	}
}
