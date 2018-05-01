#include<iostream>

using namespace std;

struct node{
	int data;
	node *next;	
}*baru, *head=NULL, *tail=NULL, *bantu, *prev, *temp;

void membuatNode(int nilai);
void tambahDepan();
void tambahTengah();
void tambahBelakang();
void baca();
void ubahDepan();
void ubahTengah(int nilaiBaru , int posisi);
void ubahBelakang(int nilaiBaru);
void hapusDepan();
void hapusTengah(int posisi);
void hapusBelakang();

int main(){
	int pilihan=0,  posisi, nilaiBaru;
	do{
		cout<<"MENU SINGLE LINKED LIST"<<endl;
		cout<<"1. Tambah Depan"<<endl;
		cout<<"2. Tambah Tengah"<<endl;
		cout<<"3. Tambah Belakang"<<endl;
		cout<<"4. Hapus Depan"<<endl;
		cout<<"5. Hapus Tengah"<<endl;
		cout<<"6. Hapus Belakang"<<endl;
		cout<<"7. Tampilkan semua"<<endl;
		cout<<"8. Ubah data depan"<<endl;
		cout<<"9. Ubah Tengah"<<endl;
		cout<<"10.Ubah Data Belakang"<<endl;
		cout<<"11.Selesai"<<endl;
		cout<<"Pilihan Anda : ";
		cin>>pilihan;
		if(pilihan == 1 ){
			tambahDepan();
			cout<<"Data berhasil di simpan "<<endl;
		}else if(pilihan == 2) {
			cout<<"Masukan posisi = "; cin>>posisi;
		}else if (pilihan == 3){
			tambahBelakang();
		}else if(pilihan == 4){
			hapusDepan();
		}else if(pilihan==5){
			cout<<"Masukkan posisi = "; cin>>posisi;
			hapusTengah(posisi);
		}else if (pilihan == 6){
			hapusBelakang();
		}else if(pilihan == 7){
			baca();
		}else if(pilihan == 8){
			ubahDepan();
		}else if(pilihan == 9){
			cout<<"Masukkan posisi = "; cin>>posisi;
			ubahTengah(nilaiBaru, posisi);
		}else if (pilihan == 10){
			ubahBelakang(nilaiBaru);
		}else {
			cout<<"Pilihan yang anda masukkan salah"<<endl;
		} 
	}while(pilihan != 11);
	

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
	if(head == NULL){
		head = baru;
		tail = baru;
		tail->next = NULL;
	}else{
		baru->next=head;
		head=baru;
	}
}
void tambahTengah(int posisi){
	if (posisi == 1){
	baru->next=head->next;
	head->next=baru;
	}else {
		bantu=head;
		bantu=bantu->next;
		for (int i=1; i<=posisi; i++){
			baru->next = bantu->next;
			bantu->next=baru;
		}
	}
	
	
}
void tambahBelakang(){
	tail->next=baru;
	tail=baru;
}
void baca(){
//cek apakah linked list kosong?
	if(head == NULL){
		cout<<"Linked list kosong"<<endl;
		
	}
	//jika tidak apakah terdiri dari 1 atau n node
	else if(head->next == NULL){
		cout<<"Isi dari linked list adalah "<<head->data<<endl;
	}
	//jika lebih dari >1 maka baca semua node
	else{
		cout<<"Isi dari linked list adalah= ";
		bantu=head;
		while (bantu != NULL){
			cout<<bantu->data<<" "<<endl;
			bantu = bantu->next;
		}
	}	
}
void ubahDepan()
{
	int databaru=0;
	if(head != NULL){
		cout<<"Masukan data baru :"; cin>>databaru;
		head->data = databaru;
		cout<<"Data berhasil diubah"<<endl;
			
	}else{
		cout<<"linked list kosong"<<endl;
	}
	
}
void ubahTengah(int nilaiBaru, int posisi){
	node *bantu;
	bantu=head; //posisikan bantu = head
	for (int p=1; p<=posisi; p++){
		bantu=bantu->next;
	} bantu->data=nilaiBaru;
}
void ubahBelakang(int nilaiBaru){
	int databaru=0;
	if(head != NULL){
		cout<<"Masukan data baru :"; cin>>databaru;
		tail->data = databaru;
		cout<<"Data berhasil diubah"<<endl;
			
	}else{
		cout<<"linked list kosong"<<endl;
	}
	
}
void hapusDepan()
{
	if(head !=NULL ){
		if(head->next == NULL){
			head = NULL;
			tail = NULL;
		}	
		cout<<"Data berhasil di hapus"<<endl;
	}else{
		cout<<"Linked list kosong"<<endl;
	}
}
void hapusTengah(int posisi){
	node *bantu, *bantu1;
	
	for (int i=1; i<=posisi; i++){
		bantu=bantu->next;
		bantu1=bantu->next;
		bantu->next=bantu1->next;
		bantu1->next=NULL;
	} cout<<"nilai yang dihapus = "<<bantu->data;
}
void hapusBelakang(){
	prev = head;
	temp = head->next;
	while (temp->next != NULL) {
		temp = temp->next;
		prev = prev->next;
	}
	prev->next = NULL;
	delete temp;
	tail = prev;
}



