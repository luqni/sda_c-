#include <iostream>
using namespace std;
struct node{
int data;
node *next;
}*head, *tail;
void init();//prosedur
int kosong();
void tampil();
void isidepan(int databaru);
void isibelakang(int databaru);
int main ()
{
    int pil, databaru;
    do {
        cout<<endl;
        cout<<endl;
        cout<<"single linked list"<<endl;
        cout<<"1. isi depan "<<endl;
        cout<<"2. tampil "<<endl;
        cout<<"3.exit"<<endl;
        cout<<"pilhan (1/2/3) = ";
        cin>>pil;

        switch(pil){
            case 1 : {
                cout<<endl;
                cout<<"masukkan data : ";cin>>databaru;
                cout<<endl;
                isidepan(databaru);
                break;
            }
            case 2 : {
                cout<<endl;
                tampil();
                break;
            }
        }
    } while (pil!=3);

}
void init(){
head=NULL;
}
int kosong(){
    if(head==NULL){
        return 1;
    }else{
        return 0;
    }
}
void tampil(){
    node *bantu;
    bantu=head;
    if(kosong()==NULL){
        while(bantu!=NULL){
            cout<<bantu->data<<" ";
            bantu=bantu->next;
        }
    }
    cout<<"Masih kosong\n";
}
void isidepan(int databaru){
    node *baru;
    baru=new node;
    baru->data=databaru;
    baru->next=NULL;
    if(kosong()==1){
        head=baru;
        head->next=NULL;
    }else {
    baru->next=head;
    head=baru;
    }
    cout<<"data anda sudah disimpan :) \n";
}
void isibelakang(int databaru){
	node *baru;
	baru->data=databaru;
	baru->next;
	if (kosong()==1){
		head=baru;
		head->next;
	}else{
		baru->next=tail;
		tail=baru;
	}
}
