#include <iostream>
using namespace std;

struct node {
	int data;
	node * next;
} *baru ,*head, * tail, * bantu, * hapus;
bool isempty();
void buat_node (int nilai);
void tambah_depan();
void tampil();
int nilai;
void hapus_depan();
void hapus_belakang();
int caridata(int key);
void tambah_tengah(int nilai, int key);

int main(){
	int pilihan, key, nilai;
	do {
		cout<<"Menu single linked list"<<endl;
		cout<<"1. Tambah depan "<<endl;
		cout<<"2. Tampil"<<endl;
		cout<<"3. hapus depan"<<endl;
		cout<<"4. hapus belakang"<<endl;
		cout<<"5. Tambah tengah"<<endl;
		cout<<"6. exit"<<endl;
		cout<<"Masukkan pilihan anda : ";cin>>pilihan;
		if (pilihan == 1){
			tambah_depan();
		}else if (pilihan == 2){
			tampil();
		}else if (pilihan == 3){
			hapus_depan();
		}else if (pilihan == 4){
			hapus_belakang();
			
		}else if (pilihan == 5){
			cout<<"Masukkan nilai key : ";cin>>key;
			cout<<"Masukkan nilai : ";cin>>nilai;
			tambah_tengah(nilai, key);
		}
		
		
	}while (pilihan != 6);
	
}
bool isempty(){
	if (head == NULL){
		return true;
	}else{
		return false;
	}
}
void buat_node (int nilai){
	baru = new node;
	cout<<"Masukkan nilai : ";cin>>nilai;
	baru->data=nilai;
	baru->next = NULL;
}
void tambah_depan(){
	buat_node (nilai);
	if (head == NULL){
		head = baru;
		tail=baru;
		tail->next=NULL;
	}else{
		baru->next = head;
		head = baru;
	}
}
void tampil(){
	
	if (head == NULL){
		cout<<"Data anda kosong : "<<endl;
	}else if ( head->next == NULL){
		cout<<"Linked list anda : "<<head->data;
	}else{
		cout<<"Linked list anda... : ";
		bantu = head;
			while (bantu != NULL){
			cout<<bantu->data<<" ";
			bantu = bantu->next;
		}
	}cout<<endl;
}
void hapus_depan(){
	hapus = head;
	head = head->next;
	delete hapus;
}
void hapus_belakang(){
	hapus = tail;
	bantu = head;
	while (bantu->next != tail){
		bantu=bantu->next;
	}
	tail = bantu;
	tail->next = NULL;
	delete hapus;
}
int caridata(int key){
	bantu = head;
	int posisi = 0;
	while (bantu != NULL){
		posisi++;
		if (bantu->data == key){
			break;
		}
		bantu = bantu->next;
	}
	if (bantu == NULL){
		return 0;
	}else{
		return posisi;
	}
}
void tambah_tengah (int nilai, int key){
	if (isempty()==true){
		cout<<"Maaf data kosong"<<endl;
	}else{
		if (caridata(key) != NULL){
			buat_node(nilai);
			bantu=head;
			bantu=bantu->next;
		}
	}
}
