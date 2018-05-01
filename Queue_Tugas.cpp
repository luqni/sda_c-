#include <iostream>
using namespace std;
//Queue Array, Deklarasi
const int Maxqueue=10;
int a[Maxqueue];
int front=-1, rear=-1;
short counter=0;

bool isempty();
bool isfull();
void enque1();
void deque1();
void tampil1();
//Queue Linkedlist, Deklarasi
void buat_baru(int nilai);
void enque2();
void deque2();
void tampil2();
int nilai;
int pil;

struct queue {
	int data;
	queue *next;
} *baru, *fronte=NULL, *reare=NULL, *hapus, *bantu;
int main (){
	int pilihan=0, mil=0, pil=0;
	do{
		cout<<"\t### MENU QUEUE ####"<<endl;
		cout<<"\t1. QUEUE ARRAY"<<endl;
		cout<<"\t2. QUEUE LINKED LIST"<<endl;
		cout<<"\t3. EXIT"<<endl;
		cout<<"\t Masukkan Pilihan Anda = ";cin>>pilihan;
		cout<<endl;
		if (pilihan == 1){//menu masuk ke queue array
				do{
					cout<<"\t~~~ MENU QUEUE ARRAY ~~~"<<endl;
					cout<<"\t1. Tambah antrian (enque)"<<endl;
					cout<<"\t2. Hapus antrian (deque)"<<endl;
					cout<<"\t3. Tampilkan antrian"<<endl;
					cout<<"\t4. exit"<<endl;
					cout<<"\tMasukkan pilihan = ";cin>>mil;
					cout<<endl;
					if (mil == 1){
						enque1();
						counter++;
					}else if (mil == 2){
						deque1();
					}else if (mil == 3 ){
						tampil1();
						cout<<endl;
					}

				}while(mil !=4);

		}else if (pilihan == 2){//menu masuk ke linked list
                do {
                    cout<<"\t*** Menu Queue linked list ***\n"<<endl;
                    cout<<"\t1. Masuk Antrian (enque)"<<endl;
                    cout<<"\t2. Keluar Antrian (deque)"<<endl;
                    cout<<"\t3. Tampilkan Antrian"<<endl;
                    cout<<"\t4. Selesai"<<endl;
                    cout<<"\tMasukkan Pilihan anda = "; cin>>pil;
                    cout<<endl<<endl;
                    if (pil==1){
                        enque2();
                    }else if (pil==2){
                        deque2();
                    }else if (pil==3){
                        tampil2();
                    }else{


                    }
                }while (pil != 4);

        }else{

        }
    }while(pilihan != 3);

}

//Realisasi Prosedur Queue Array

bool isempty(){
	if (counter == 0 ){
		return 1;
	}else{
		return 0;
	}
}
bool isfull(){
	if (counter == Maxqueue){
		return 1;
	}else {
		return 0;
	}
}
void enque1(){
	if (isfull()){
		cout<<"\tMaaf antrian sudah penuh"<<endl;
	}else{
		if (isempty()){
			front++;
			rear++;
			cout<<"\tMasukkan data queue anda = ";cin>>a[front];
			cout<<"\tData anda sudah disimpan"<<endl;

		}else{
				rear++;
				counter++;
				cout<<"\tMasukkan data queue anda = ";cin>>a[rear];
				cout<<"\tData anda sudah disimpan"<<endl;

		}

	}
}


void tampil1(){

	if (isempty()){
        cout<<"\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
		cout<<"\tMaaf data tidak bisa ditampilkan karena queueu anda kosong"<<endl;
        cout<<"\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	}else{
		cout<<"\tIsi Stack Anda Adalah ="<<endl;
		cout<<"\t";
		for (int i=0; i<=rear ; i++){
			cout<<a[i]<<" ";
		}
	}
}
void deque1(){//realisasi dari prosedur diatas
		if (isempty()){
			cout<<"\tMaaf Antrian kosong"<<endl;
		}else{
			for(int i=front; i<rear; i++)
			{
			a[i] = a[i+1];
			}
		cout<<"\tData tersebut berhasil dikeluarkan dari antrian."<<endl;
		counter --;
		rear--;
	}
}

//Reasilasi prosedur Queue Linkedlist



void buat_baru(int nilai){
	baru=new queue;
	cout<<"\t Input data =  ";cin>>nilai;
	baru->data=nilai;
	baru->next=NULL;
}
void enque2(){

	int nilai=0;
	buat_baru(nilai);
	if (fronte==NULL){
		fronte=baru;
		reare=baru;
		reare->next=NULL;
	}else{
		reare->next=baru;
		reare=baru;
		reare->next=NULL;
	cout<<endl<<endl;
	}
}
void deque2(){
	if (fronte==NULL){
		cout<<"\t!!! Antrian Kosong !!!"<<endl;
	}else{
		hapus=fronte;
		fronte=fronte->next;
		delete hapus;
	}
	cout<<endl;
}
void tampil2(){
//cek apakah linked list kosong?
	if(fronte == NULL){
		cout<<"\t!!! Antrian kosong !!!"<<endl;

	}
	//jika tidak apakah terdiri dari 1 atau n node
	else if(fronte->next == NULL){
        cout<<"\tIsi dari Antrian adalah = "<<endl;
        cout<<"\t--------------------------"<<endl;
        cout<<"\t";
		cout<<fronte->data<<endl;
        cout<<"\t--------------------------"<<endl;
	}
	//jika lebih dari >1 maka baca semua node
	else{
		cout<<"\tIsi dari Antrian adalah = "<<endl;
		cout<<"\t----------------------------"<<endl;
		cout<<"\t";

		bantu=fronte;
		while (bantu != NULL){
			cout<<bantu->data<<" ";
			bantu = bantu->next;
		}cout<<endl;
        cout<<"\t----------------------------"<<endl;
	}cout<<endl;
}
