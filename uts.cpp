#include <iostream>
#include <math.h>
using namespace std;
int hitung (int n); //deklarasi fungsi
int main(){
	int n;
	cout << "Masukkan nilai = "; cin>>n;
	cout << "Hasil  adalah "<<hitung (n)<<endl; //fungsi berbeda dengan fungsi di atasnya
}
int hitung (int n){	//fungsi tidak sama dengan fungsi deklarasi
	if (n==1){
		cout<<n<< " ";
		return 1;
	}else {
		cout<<n<<" ";
		return (pow(1, n)*n+hitung(n-1));
	}
}

