#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node *prev;
	
} *baru, *head, *bantu;

bool isempty();
void buatnode(int nilai);
void tambahdepan(int nilai);

int jumlahnode();
int counter;

int main(){
	int pilihan, nilai;
	do{
		cout<<"Menu Grahp"<<endl;
		cout<<"1. Tambah"<<endl;
		cout<<"2. Lihat Data Sebelumnya"<<endl;
		cout<<"3. Lihat Data Sekarang"<<endl;
		cout<<"4. Lihat Data Setelahnya"<<endl;
		cout<<"5. Keluar"<<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin>>pilihan;
		if (pilihan == 1){
			tambahdepan(nilai);
			cout<<"Data berhasil ditambah"<<endl;
		}
		if (pilihan == 2){
			
		}
		if (pilihan == 3){
			
		}
		if (pilihan == 4){
			
		}
		else {
		}
	}while (pilihan != 5);	
	
}
bool isempty(){
	if (counter == 0){
		return true;
	}else{
		return false;
	}
}
void buatnode(int nilai){
	baru = new Node;
	baru->data = nilai;
	baru->next = baru;
	baru->prev = baru;
}
int jumlahnode(){
	return counter;
}
void tambahdepan(int nilai){
		cout<<"Input nilai : ";cin>>nilai;
	buatnode(nilai);
	if(isempty()){
		baru->next = baru;
        baru->prev = baru;
        head = baru;
	}else{
	    bantu = head->prev;
	    baru->next=head;
	    head->prev=baru;
	    baru->prev=bantu;
	    bantu->next=baru;
	    head=baru;
	}counter++;
}
