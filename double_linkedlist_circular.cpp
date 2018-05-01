#include <iostream>
using namespace std;
struct node2p {
    int data;
    node2p *next;
    node2p *prev;
} *head, *bantu, *bantu1, *baru;

void buatnode();
void tambahdepan(int nilai);
bool isempty();
void jumlahnode();
int pilihan;
int counter;
int main(){
    do {

        cout<<"Double Linked List Circular"<<endl;
        cout<<"1. Inisialisasi"<<endl;
        cout<<"2. Deklarasi"<<endl;
        cout<<"3. Tambah Depan"<<endl;
        cout<<"Masukkan Pilihan = ";cin>>pilihan;
        if (pilihan == 1){
            cout<<"Sudah DiInisialisasi"<<endl;
            cout<<endl;
        }
        if (pilihan == 2){
            cout<<"Sudah DiDeklarasikan"<<endl;
            cout<<endl;
        }
        if (pilihan == 3){
            cout<<"Masukkan Nilai = ";cin>>nilai;
            cout<<endl;
        }else{

        }
    }while (pilihan != 4);
}
void buatnode (int nilai){

    baru = new node2p;
    baru->data=nilai;
    head->next=baru;
    head->prev=baru;
}
bool isempty(){
    if (head == NULL){
        return true;
    }else{
        return false;
    }
}
void tambahdepan(){
    cout<<"Input nilai : ";cin>>nilai;
	membuatnode(nilai);
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
