#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;	
} *bantu, *top, *baru, *prev, *temp;
void inisialisasi();
void membuatNode(int nilai);
void tambahDepan();
bool isempty();
void baca();
void hapusDepan();
const int maxstack=10;
short counter=0;
int main(){
	int pilihan;
	inisialisasi();
	do {
		cout<<"Menu Stack"<<endl;
		cout<<"1. Deklarasi"<<endl;
		cout<<"2. Inisialisasi"<<endl;
		cout<<"3. Cek kosong"<<endl;
		cout<<"4. Cek penuh"<<endl;
		cout<<"5. Penambahan (push)"<<endl;
		cout<<"6. Pengambilan (Pop)"<<endl;
		cout<<"7. Pengaksesan"<<endl;
		cout<<"Masukkan pilihan = ";
		cin>>pilihan;
		if (pilihan == 3){
			if (isempty()){
				cout<<"Data stack kosong"<<endl;
			}else{
				cout<<"Data stack tidak kosong"<<endl;
			}
		}else if (pilihan == 4){
			if (counter != maxstack){
				cout<<"stack belum penuh"<<endl;
			}else {
				cout<<"stack sudah penuh"<<endl;
			}
		
			
		}else if (pilihan == 5){
			if (counter == maxstack){
				cout<<"Maaf stack penuh"<<endl;
			}else{
			tambahDepan();
			counter ++;
			cout<<"Data berhasil ditambahkan"<<endl;
			}
		}else if (pilihan == 6){
			if (isempty()){
				cout<<"Stack Kosong"<<endl;
			}else{
				hapusDepan();
			}
		}else if (pilihan == 7){
			baca();
		}

	}while (pilihan != 4);
}
void inisialisasi(){
	*bantu, *top=NULL, *baru=NULL, *prev, *temp;
}
bool isempty(){
	if (top == NULL){
		return true;
	}else{
		return false;
	}
	
}
void membuatNode(int nilai)
{
	baru = new node;
	baru->data = nilai;
	baru->next = NULL;
}
void tambahDepan()
{
	int nilai=0;
	cout<<"Input nilai : ";cin>>nilai;
	membuatNode(nilai);
	if(top == NULL){
		top = baru;
	}else{
		baru->next=top;
		top=baru;
	}
}
void baca(){
//cek apakah linked list kosong?
	if(top == NULL){
		cout<<"stack kosong"<<endl;
		
	}
	//jika tidak apakah terdiri dari 1 atau n node
	else if(top->next == NULL){
		cout<<"Isi dari stack adalah "<<top->data<< " ";
	}
	//jika lebih dari >1 maka baca semua node
	else{
		cout<<"Isi dari stack adalah= ";
		bantu=top;
		while (bantu != NULL){
			cout<<bantu->data<<" ";
			bantu = bantu->next;
		}
	} cout<<endl;	
}
void hapusDepan()
{
	prev = top;
	temp = top->next;
	while (temp->next != NULL) {
		temp = temp->next;
		prev = prev->next;
	}
	temp->next = NULL;
	delete prev;
	top = temp;
	
}

