#include<iostream>

using namespace std;

struct node2P{
	int data;
	node2P *next;
	node2P *prev;
}*baru, *head=NULL, *tail=NULL, *bantu, *prev, *temp;
int cariData(int key);
bool isempty();
int jumlah_node();
void membuatNode(int nilai);
void tambahDepan();
void tambahTengahsetelah(int key, int nilai);
void tambahTengahSebelum(int key, int nilai);
void tambahbelakang();
void baca();
void ubahDepan();
void ubahTengahsetelah(int key, int nilai);
void ubahTengahsebelum(int key, int nilai);
void ubahBelakang(int nilaiBaru);
void hapusDepan();
void hapusTengahsetelah(int key);
void hapusTengahsebelum(int key);
void hapusBelakang();
int counter=0;
int main(){
	int pilihan=0,  posisi, nilaiBaru, key, nilai;
	do{
        cout<<"Nama\t: Muhammad Luqni Baehaqi"<<endl;
        cout<<"NIM\t: 0110115024"<<endl;
        cout<<endl;
		cout<<"MENU DOUBLE LINKED LIST NON CIRCULAR"<<endl;
		cout<<"1. Tambah Depan"<<endl;
		cout<<"2. Tambah tengah setelah angka x"<<endl;
		cout<<"3. Tambah tengah sebelum angka x"<<endl;
		cout<<"4. Tambah Belakang"<<endl;
		cout<<"5. Hapus Depan"<<endl;
		cout<<"6. Hapus Tengah Setelah angka x"<<endl;
		cout<<"7. Hapus Tengah Sebelum angka x"<<endl;
		cout<<"8. Hapus Belakang"<<endl;
		cout<<"9. Tampilkan semua"<<endl;
		cout<<"10. Ubah data depan"<<endl;
		cout<<"11. Ubah Tengah setelah x"<<endl;
		cout<<"12. Ubah Tengah sebelum x"<<endl;
		cout<<"13.Ubah Data Belakang"<<endl;
		cout<<"14.Jumlah Node"<<endl;
		cout<<"Pilihan Anda : ";
		cin>>pilihan;
		if(pilihan == 1 ){
			tambahDepan();
			cout<<"Data berhasil di simpan "<<endl;
		}else if(pilihan == 2) {
			cout<<"Masukan angka yang mau disisip = "; cin>>key;
			cout<<"Masukkan nilai = ";cin>>nilai;
			tambahTengahsetelah(key,nilai);

		}else if (pilihan == 3){
		    cout<<"Masukan angka yang mau disisip = "; cin>>key;
			tambahTengahSebelum(key,nilai);
		}else if (pilihan == 4){
            tambahbelakang();
		}else if(pilihan == 5){
			hapusDepan();
		}else if(pilihan==6){
			cout<<"Masukkan angka  = "; cin>>key;
            hapusTengahsetelah(key);
		}else if (pilihan == 7){
            cout<<"Masukkan angka = ";cin>>key;
            hapusTengahsebelum(key);
		}else if (pilihan == 8){
			hapusBelakang();
		}else if(pilihan == 9){
			baca();
		}else if(pilihan == 10){
			ubahDepan();
		}else if(pilihan == 11){
			cout<<"Masukkan key = "; cin>>key;
			cout<<"Masukkan angka = ";cin>>nilai;
			ubahTengahsetelah(key, nilai);
		}else if (pilihan == 12){
            cout<<"Masukkan key = ";cin>>key;
            cout<<"Masukkan angka = ";cin>>nilai;
            ubahTengahsebelum(key, nilai);
		}else if (pilihan == 13){
			ubahBelakang(nilaiBaru);
		}else if (pilihan == 14){
		    cout<<endl;
            cout<<"Jumlah Node Adalah = "<<jumlah_node()<<endl;
            cout<<endl;
		}else {
			cout<<"Pilihan yang anda masukkan salah"<<endl;
		}
	}while(pilihan != 14);


}
int cariData(int key){
    bantu = head;
    int posisi=0;
    while(bantu!=NULL){
        posisi++;
        if(bantu->data==key){
            break;
        }
        bantu=bantu->next;
    }
    if (bantu == NULL){
        return 0;
    }else{
        return posisi;
    }
    //return posisi;
}
void membuatNode(int nilai)
{
	baru = new node2P;
	baru->data = nilai;
	baru->next = NULL;
	baru->prev = NULL;
}
bool isempty(){
    if (head == NULL || tail == NULL){
        return true;
    }else{
        return false;
    }
}
int jumlah_node(){
    return counter;
}
void tambahDepan()
{
	int nilai=0;
	cout<<"Input nilai : ";cin>>nilai;
	membuatNode(nilai);
	if(isempty()){
		head = baru;
		tail = baru;
		tail->next = NULL;
	}else{
		baru->next=head;
		head->prev=baru;
		head=baru;
	}counter++;
}

void tambahTengahsetelah(int key, int nilai){
	node2P *bantu1 = NULL;
	if(isempty()){
        cout<<endl;
        cout<<"Double linked list kosong"<<endl;
	}else{
        if (cariData(key)!=0){
            membuatNode(nilai);
            bantu1=bantu->next;
            bantu->next=bantu1;
            bantu1->prev=baru;
            bantu->next=baru;
            baru->prev=bantu;
            baru->next=bantu1;

            counter++;
            cout<<endl;
            cout<<"penambahan berhasil";

        }else{
            cout<<"Maaf data tidak ditemukan"<<endl;
        }
	}

}
void tambahTengahSebelum(int key, int nilai){
	node2P *bantu1 = NULL;
	if(isempty()){
        cout<<endl;
        cout<<"Double linked list kosong"<<endl;
	}else{
        if (cariData(key)!=0){
            membuatNode(nilai);
            bantu1=bantu->prev;
            bantu->prev=bantu1;
            bantu1->next=baru;
            bantu->prev=baru;
            baru->next=bantu;
            baru->prev=bantu1;

            counter++;
            cout<<endl;
            cout<<"penambahan berhasil";

        }else{
            cout<<"Maaf data tidak ditemukan"<<endl;
        }
	}
}
void tambahbelakang(){
    int nilai=0;
	cout<<"Input nilai : ";cin>>nilai;
	membuatNode(nilai);
	if(isempty()){
		head = baru;
		tail = baru;
		tail->next = NULL;
	}else{
		baru->prev=tail;
		tail->next=baru;
		tail=baru;
	}counter++;
	cout<<"Data sudah ditambahkan"<<endl;
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
			cout<<bantu->data<<" ";
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
void ubahTengahsetelah(int key, int nilai){
    node2P *bantu1 = NULL;
    if(isempty()){
        cout<<endl;
        cout<<"Double linked list kosong"<<endl;
	}else{
        if (cariData(key)!=0){
            bantu1=bantu->next;
            bantu1->data=nilai;
            cout<<endl;
            cout<<"Data berhasil diubah";

        }else{
            cout<<"Maaf data tidak ditemukan"<<endl;
        }
	}

}
void ubahTengahsebelum(int key, int nilai){
node2P *bantu1 = NULL;
    if(isempty()){
        cout<<endl;
        cout<<"Double linked list kosong"<<endl;
	}else{
        if (cariData(key)!=0){
            bantu1=bantu->prev;
            bantu1->data=nilai;
            cout<<endl;
            cout<<"Data berhasil diubah";

        }else{
            cout<<"Maaf data tidak ditemukan"<<endl;
        }
	}
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
	if(isempty()){
        cout<<"Linked list kosong"<<endl;

	}else{
		bantu=head->next;
		head->next=NULL;
		head=bantu;
        counter--;
    }
}
void hapusTengahsetelah(int key){
	node2P *bantu1 = NULL, *bantu2 = NULL;
	if(isempty()){
        cout<<endl;
        cout<<"Double linked list kosong"<<endl;
	}else{
        if (cariData(key)!=0){

            bantu1=bantu->next;
            bantu2=bantu1->next;
            bantu2->prev=bantu;
            bantu->next=bantu2;
            delete bantu1;

            counter--;
            cout<<endl;
            cout<<"penghapusan berhasil";

        }else{
            cout<<"Maaf data tidak ditemukan"<<endl;
        }
	}

}
void hapusTengahsebelum(int key){
node2P *bantu1 = NULL, *bantu2 = NULL ;
	if(isempty()){
        cout<<endl;
        cout<<"Double linked list kosong"<<endl;
	}else{
        if (cariData(key)!=0){

            bantu1=bantu->prev;
            bantu1->prev=bantu2;
            bantu=bantu1->prev;
            bantu2->next=bantu;
            bantu->prev=bantu2;
            delete bantu1;


            counter--;
            cout<<endl;
            cout<<"penghapusan berhasil";

        }else{
            cout<<"Maaf data tidak ditemukan"<<endl;
        }
	}


}
void hapusBelakang(){
	if(isempty()){
        cout<<"Linked list kosong"<<endl;

	}else{
		bantu=tail->prev;
		bantu->next=NULL;
		tail=bantu;
        counter--;
    }
}



