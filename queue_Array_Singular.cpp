//digabung dengan yang queue linked list dijadikan menu.
#include <iostream>
using namespace std;

const int Maxqueue=5;
int a[Maxqueue];
int front=-1, rear=-1;
short counter=0;

bool isempty();
bool isfull();
void enque();
void deque();
void tampil();
void cek_front();
void cek_rear();

int main(){
	int pilihan=0;
	do{
		cout<<"Menu Queue Array"<<endl;
		cout<<"1. Tambah antrian (enque)"<<endl;
		cout<<"2. Hapus antrian (deque)"<<endl;
		cout<<"3. Tampilkan antrian"<<endl;
		cout<<"4. exit"<<endl;
		cout<<"Masukkan pilihan = ";cin>>pilihan;
		if (pilihan == 1){
			enque();
		}else if (pilihan == 2){
			deque();
		}else if (pilihan == 3 ){
			tampil();
			cout<<endl;
		}
		
	}while(pilihan !=4);
}

/*bool isempty(){
	if (counter == 0 ){
		return true;
	}else{
		return false;
	}
}
bool isfull(){
	if (counter == Maxqueue){
		return true;
	}else {
		return false;
	}
}*/
void enque(){
	if (counter == Maxqueue){
		cout<<"Maaf antrian sudah penuh"<<endl;
	}else{
		if (counter == 0){
			front=0;
			rear=0;
			cout<<"Masukkan data queue anda = ";cin>>a[front];
			cout<<"Data anda sudah disimpan"<<endl;
			counter++;
			
		}else{	
				cek_rear();
				rear++;
				counter++;
				cout<<"Masukkan data queue anda = ";cin>>a[rear];
				cout<<"Data anda sudah disimpan"<<endl;
				
		}
		
	}
}


void tampil(){

	if (counter == 0){
		cout<<"Maaf data tidak bisa ditampilkan karena queueu anda kosong"<<endl;
	}else{
		cout<<"Isi Stack Anda Adalah"<<endl;
		for (int i=0; i<Maxqueue ; i++){
			if (a[i] !=0){
				cout<<a[i]<<" ";
			}else {
				cout<<"  ";
			}
		}
	}
}
void deque(){//realisasi dari prosedur diatas
		if (counter == 0){
			cout<<"Maaf Antrian kosong"<<endl;
		}else{
			a[front]=0;
			cek_front();
			front++;
		cout<<"Data tersebut berhasil dikeluarkan dari antrian."<<endl;
		counter --;
	}
}
void cek_front(){
	if (front == Maxqueue-1){
		front = -1;
	}
}
void cek_rear(){
	if (rear == Maxqueue-1){
		rear = -1;
	}
}
