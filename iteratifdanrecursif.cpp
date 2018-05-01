#include<iostream>
using namespace std;
int faktorial(int a);
int kombinasi(int n, int r);
void fibonaci();//iteratif
int fibonaci2(int n);//recursif
void permutasi();//iteratif
int permutasi2(int n, int r);//recursif
void perpangkatan(int y,int n);
int deret_m();//iteratif
int deret_m2(int n);//recursif
int deret_ge();//iteratif
int deret_ge2(int n);//recusif
int deret_ga();//iteratif
int deret_ga2(int n);//recursif
int y, m, q, p, b, c, d, e;
int main()
{
short pil;	
int angka, n, r;

      do{
        cout << "\n \tMENU UTAMA \n 1. FIBONACCI \n 2. KOMBINASI \n 3. PERMUTASI \n 4. PERPANGKATAN \n";
        cout<<" 5. DERET ASLI \n 6. DERET GENAP \n 7. DERET GANJIL \n 8. EXIT \n \tMASUKAN PILIHAN : "; 
		cin >> pil; cout << endl;
        if(pil==1){
			do{
				cout<<"1. iteratif \t 2. rekursif \n";
				cin>>p;
				if(p==1){
					fibonaci();
					cout<<endl;
				}else if (p==2){
					cout<<"masukkan n = "; cin>>n;
					cout<<"hasil = "<<fibonaci2(n);
					cout<<endl;
				}
			}while(p !=2);
		}else if(pil==2){
			do{
				cout<<"1. iteratif \t 2. rekursif \n";
				cin>>q;
				if(q==1){
					cout<<"Masukkan nilai n = "; cin>>n;
					cout<<"Masukkan nilai r = "; cin>>r;
					cout<<"hasil : "<<faktorial(n)/(faktorial(r)*faktorial(n-r));
					cout<<endl;
				}else if(q==2){
					cout<<"masukkan n = ";cin>>n;
					cout<<"masukkan r = ";cin>>r;
					cout<<"hasil = "<<kombinasi(n,r);
					cout<<endl;
				}
			}while(q !=2);
					
		}else if(pil==3){
			do{
				cout<<"1. iteratif \t 2. rekursif \n";
				cin>>b;
				if(b==1){
					cout<<"masukkan nilai n = ";cin>>n;
					cout<<"masukkan nilai r = ";cin>>r;
					cout<<"hasil = "<<faktorial(n)/faktorial(n-r);
					cout<<endl;
				}else if(b==2){
					cout<<"masukkan n = ";cin>>n;
					cout<<"masukkan r = ";cin>>r;
					cout<<"hasil = "<<permutasi2(n, r);
					cout<<endl;
				}
			}while(b !=2);
		}else if(pil==4){
			perpangkatan(y,n);
			cout<<endl;
		}else if(pil==5){
			do{
				cout<<"1. iteratif \t 2. rekursif \n";
				cin>>c;
				if(c==1){
					cout<<"hasil = "<<deret_m();
					cout<<endl;
				}else if (c==2){
					cout<<"masukkan n = ";cin>>n;
					cout<<"hasil = "<<deret_ga2(n);
				}
			}while(c !=2);
		}else if(pil==6){
			do{
				cout<<"1. iteratif \t 2. rekursif \n";
				cin>>d;
				if(d==1){
					cout << "hasil = "<<deret_ge();
				}else if (d==2){
					cout<<"masukkan n = ";cin>>n;
					cout<<"hasil = "<<deret_ge2(n);
				}
			}while(d !=2);
		}else if(pil==7){
			do{
				cout<<"1. iteratif \t 2. rekursif \n";
				cin>>e;
				if(e==1){
					cout<<"hasil = "<<deret_ga();
				}else if (e==2){
					cout<<"masukkan n = ";cin>>n;
					cout<<"hasil = "<<deret_ga2(n);
				}
			}while(e !=2);
		}else if(pil>8){
			cout<<"Pilihan yang anda masukkan salah"<<endl;
			cout<<"takan karakter angka lalu enter untuk kembali ke menu utama = "; cin>>angka;
		}
	}while(pil != 8);
}
int faktorial(int a){
	int hasil=1;
	for(int i=1;i<=a;i++){
		hasil=hasil*i;
	}
	return hasil;
}
int kombinasi(int n, int r){
	if (n<r)
		return (0);
	else 
		return (faktorial(n)/faktorial(n)*faktorial(n-r));
	}
int permutasi2(int n, int r){
	if (n<r)
		return (0);
	else 
		return (faktorial(n)/faktorial(n-r));
	}

void fibonaci(){
	int pertama=1,kedua=1, ketiga=1, selanjutnya,n;
	cout<<"\tFibonanci"<<endl;
	cout<<"Masukkan angka = ";cin>>n;
	cout<<pertama<<" , "<<kedua<<" , ";
	for(int i=3;i<=n;i++){
		selanjutnya=pertama+kedua+ketiga;
		cout<<selanjutnya<<" , ";
		pertama=kedua;
		kedua=ketiga;
		ketiga=selanjutnya;
	}
}
int fibonaci2(int n){
	if((n==1)||(n==2)||(n==3))
		return (1);
	else
		return (fibonaci2(n-1)+fibonaci2(n-2)+fibonaci2(n-3));
	} 
void perpangkatan(int y, int n){
	int  hasil=1;
		cout<<"masukkan bilangan = ";cin>>y;
		cout<<"Pangkat = ";cin>>n;
		for(int i=1;i<n;i++){
		hasil=hasil*y;
		cout<<y<<" x ";
	}
	cout<<y<<endl;
	cout<<"nilai dari "<<y<<" pangkat "<<n<<" = " <<hasil*y<<endl;

}
int deret_m(){
	int n, hasil=0;
	cout<<"masukkan nilai = ";cin>>n;
	for (int i=1; i<n;i++){
		hasil=hasil+i;
		cout<<i<<" + ";
	}
	cout<<n<<endl;
	return hasil+n;
}
int deret_m1(int n){
	if(n==1)
		return (1);
	else
		return(n+deret_m1(n-1));
	}
	
int deret_ge(){
	int n, hasil=0;
	cout<<"masukkan nilai = ";cin>>n;
	for (int i=1; i<n;i++){
		hasil=hasil+i*2;
		cout<<i*2<<" + ";
	}
	cout<<n*2<<endl;
	return hasil+n*2;
}
int deret_ge2(int n){
	if(n==1)
		return (2);
	else
		return (2*n+deret_ge2(n-1));
	}
int deret_ga(){
	int n, hasil=0;
	cout<<"masukkan nilai = ";cin>>n;
	for (int i=1; i<n;i++){
		hasil=hasil+(i*2)-1;
		cout<<(i*2)-1<<" + ";
	}
	cout<<(n*2)-1<<endl;
	return hasil+(n*2)-1;
}
int deret_ga2(int n){
	if(n==1)
		return (1);
	else
		return ((2*n)-1 + deret_ga2(n-1));
	}

		
			
