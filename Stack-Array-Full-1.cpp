#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int n=0;
int stack[10];		//deklarasi batas stack

void cek_kosong();
void cek_penuh();
void penambahan();
void hapus();
void tampil();

int main()
{
	short pil;
	
	do
	{
		cout<<"*** Aplikasi Stack - Array ***"<<endl;
		cout<<endl;
		cout<<"1. Deklarasi"<<endl;
		cout<<"2. Inisialisai"<<endl;
		cout<<"3. Cek Kosong"<<endl;
		cout<<"4. cek Penuh"<<endl;
		cout<<"5. Penambahan"<<endl;
		cout<<"6. Pengambilan"<<endl;
		cout<<"7. Pengaksesan"<<endl;
		cout<<"8. Keluar Program"<<endl;
		cout<<"Masukkan pilihan anda : ";cin>>pil;
		system("cls");
		
		if(pil == 1)
		{
			cout<<"Stack ini sudah dideklarasikan."<<endl;
		}
		else if(pil == 2)
		{
			cout<<"Stack ini sudah diinisialisasikan."<<endl;
		}
		else if(pil == 3)
		{
			cek_kosong();
		}
		else if(pil == 4)
		{
			cek_penuh();
		}
		else if(pil == 5)
		{
			penambahan();
		}
		else if(pil == 6)
		{
			hapus();
		}
		else if(pil == 7)
		{
			tampil();
		}
	}while(pil != 8);
}

void cek_kosong()
{
	int i=0;
	
	if (stack[i] == 0)
	{
		cout<<"Stack ini kosong"<<endl;
	}
	else 
	{
		cout<<"Stack ini tidak kosong"<<endl;
	}
}

void cek_penuh()
{
	if(n == 10)
	{
		cout<<"Stack ini sudah penuh."<<endl;
	}
	else
	{
		cout<<"Stack ini belum penuh."<<endl;
	}
}

void penambahan()
{
	if(n >= 10)
	{
		cout<<"Stack ini sudah penuh."<<endl;
	}
	else
	{
		for(int i=n; i<=n; i++)
		{
			cout<<"Masukkan nilai anda : ";cin>>stack[i];
		}
		cout<<"Data berhasil ditambahkan"<<endl;
		n++;
	}
}

void hapus()
{
	for(int i=n-2; i<n; i++)
	{
		stack[i] = stack[i+1];
	}
	cout<<"Data tersebut berhasil dikeluarkan dari stack."<<endl;
	n--;
}

void tampil()
{
	cout<<"Isi stack ini adalah sebagai berikut"<<endl;
	for(int i=n-1; i>=0; i--)
	{
		cout<<stack[i]<<endl;
	}
}
