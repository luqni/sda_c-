#include <iostream>
using namespace std;

struct node2P{
    int data;
    node2P *next;
    node2P *prev;
} *baru, *bantu, *hapus, *head=NULL;
bool isempty();
void membuatnode(int nilai);
void tambahdepan(int nilai);
int jumlah_node();
void tampil();

int counter=0;

int main(){
    int pilihan, nilai;
    do{

        cout<<"Menu double linked list circular"<<endl;
        cout<<"1. Tambah Depan"<<endl;
        cout<<"2. Tampil"<<endl;
        cout<<"3. Jumlah node"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Masukkan pilihan = " ;cin>>pilihan;
        if (pilihan == 1){
            tambahdepan(nilai);
        }if (pilihan == 2) {
            tambahdepan(nilai);
        }if (pilihan == 3){
            cout<<"Jumlah Node Adalah = "<<jumlah_node();
            cout<<endl;
        }

    }while (pilihan != 4);

}
void membuatnode(int nilai){
    baru=new node2P;
    baru->data=nilai;
    baru->next=baru;
    baru->prev=baru;
}
bool isempty(){
    if (head == NULL ){
        return true;
    }else{
        return false;
    }
}
void tambahdepan(int nilai){
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
int jumlah_node(){
    return counter;
}
void tampil(){

}
