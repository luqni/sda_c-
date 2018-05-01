#include <iostream>
using namespace std;

void isempty();//deklarasi prosedur untuk mengecek kosong
void cekpenuh();//deklarasi prosedur untuk mengecek penuh
void baca();//deklarasi prosedur untuk menampilkan stack
void tambah();//deklarasi prosedur untuk menambahkan data stack
void hapus();//deklarasi prosedur untuk menghapus stack
int stack [10];//deklarasikan stack global dimana kita batasi data hanya 10 saja
int n=0;

int main(){//biasanya fungsi main berisi menu dan fungsi-fungsi yang penting atau identik
	int pilihan; //mendeklarasikan suatu tipe data untuk pilihan di menu
	do{
		cout<<endl;
		cout<<"*----- Menu Stack Array -----*"<<endl;//menampilkan daftar menu
		cout<<"1. Cek Kosong "<<endl;
		cout<<"2. Cek Penuh "<<endl;
		cout<<"3. Tambah "<<endl;
		cout<<"4. Tampil "<<endl;
		cout<<"5. Hapus "<<endl;
		cout<<"6. Exit "<<endl;
		cout<<" Masukkan Pilihan anda = ";cin>>pilihan;
		cout<<endl;
		if (pilihan == 1){//jika kita pilih satu maka akan menampilkan prosedur isempty() atau cek kosong
			isempty();//pemanggilan prosedur
		}else if (pilihan == 2 ){
			cekpenuh();//pemanggilan prosedur
		}else if (pilihan == 3){
			tambah();//pemanggilan prosedur
		}else if (pilihan == 4){
			baca();//pemanggilan prosedur
		}else if (pilihan == 5){
			hapus();//pemanggilan prosedur
		}
	}while (pilihan != 6);
		
		

}
void isempty(){//realisasi dari prosedur diatas
	int i=0;
	if (stack[i] == 0){
		cout<<"Data stack anda kosong"<<endl;
	}else {
		cout<<"Stack anda tidak kosong"<<endl;
	}
}
void cekpenuh(){//realisasi dari prosedur diatas
	if (stack[10] >= 10){
		cout<<"Stack anda sudah penuh"<<endl;
	}else{
		cout<<"Stack anda belum penuh"<<endl;
	}
}
void tambah(){//realisasi dari prosedur diatas

	if (stack[10] >= 10){
		cout<<"Maaf data stack anda sudah penuh..."<<endl;
	}else{
		for (int i=n ; i<=n; i++){
			cout<<"Masukkan data stack anda = ";cin>>stack[i];
		}
		cout<<"Data anda sudah disimpan"<<endl;
		n++;//agar n bergerak naik sampai 10
	}
	
}
void baca(){//realisasi dari prosedur diatas
	int i=0;
	if (stack[i] == 0){
		cout<<"Maaf data tidak bisa ditampilkan karena stack anda kosong"<<endl;
	}else{
		cout<<"Isi Stack Anda Adalah"<<endl;
		for (int i=n-1; i>=0 ; i--){
			cout<<stack[i]<<" ";
		}
	}
}
void hapus(){//realisasi dari prosedur diatas
	for(int i=n-1; i<n; i++)
	{
		stack[i] = stack[i+1];
	}
	cout<<"Data tersebut berhasil dikeluarkan dari stack."<<endl;
	n--;//data akan dikurangi satu persatu ke arah n kecil
}
