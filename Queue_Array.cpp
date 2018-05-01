#include<iostream>
using namespace std;

void deklarasi ();
void inisialisasi();
void cekkosong();
void cekpenuh();
void tambah();
void pengambilan();
void tampilkan();
int A[10];

int main(){
	int pilihan=0;
	do{
	cout<<"Menu Queue Array"<<endl;
	cout<<"1. Deklarasi"<<endl;
	cout<<"2. Inisialisasi"<<endl;
	cout<<"3. Cek Kosong"<<endl;
	cout<<"4. Cek Penuh"<<endl;
	cout<<"5. Masukka Data"<<endl;
	cout<<"6. Keluarkan Data"<<endl;
	cout<<"7. Tampilkan Queue"<<endl;
	cout<<"8. Keluar"<<endl;
		if (pilihan == 1){
		deklarasi();
		}
	}while (pilihan !=8);

}
void deklarasi(){
	int font, rear;
	A[10];
}
