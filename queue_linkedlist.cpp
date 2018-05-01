#include <iostream>
using namespace std;

int pil;

void buat_baru(int nilai);
void enque();
void deque();
void tampil();
void pilih();
int nilai;

struct queue {
	int data;
	queue *next;
} *baru, *front=NULL, *rear=NULL, *hapus, *bantu;

int main(){
	do {
		cout<<"\t*** Menu Queue linked list ***\n"<<endl;
		cout<<"\t1. Masuk Antrian (enque)"<<endl;
		cout<<"\t2. Keluar Antrian (deque)"<<endl;
		cout<<"\t3. Tampilkan Antrian"<<endl;
		cout<<"\t4. Selesai"<<endl;
		cout<<"\tMasukkan Pilihan anda = "; cin>>pil;
		pilih();
	}while (pil != 4);

}
void pilih(){
	if (pil==1){
	enque();
	}else if (pil==2){
	deque();
	}else if (pil==3){
	tampil();
	}else{
		cout<<"selesai"<<endl;
	}
}
void buat_baru(int nilai){
	baru=new queue;
	cout<<"~~~ Input data =  ";cin>>nilai;
	baru->data=nilai;
	baru->next=NULL;
}
void enque(){
	
	int nilai=0;
	buat_baru(nilai);
	if (front==NULL){
		front=baru;
		rear=baru;
		rear->next=NULL;
	}else{
		rear->next=baru;
		rear=baru;
		rear->next=NULL;
	cout<<endl<<endl;
	}
}
void deque(){
	if (front==NULL){
		cout<<"!!! Antrian Kosong !!!"<<endl;
	}else{
		hapus=front;
		front=front->next;
		delete hapus;
	}
	cout<<endl;
}
void tampil(){
//cek apakah linked list kosong?
	if(front == NULL){
		cout<<"!!! Antrian kosong !!!"<<endl;
		
	}
	//jika tidak apakah terdiri dari 1 atau n node
	else if(front->next == NULL){
		cout<<"Isi dari Antrian adalah = "<<front->data<<endl;
	}
	//jika lebih dari >1 maka baca semua node
	else{
		cout<<"Isi dari Antrian adalah = ";
		bantu=front;
		while (bantu != NULL){
			cout<<bantu->data<<" ";
			bantu = bantu->next;
		}
	}cout<<endl;	
}
