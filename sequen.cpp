#include <iostream>
using namespace std;
void sequencial (int arr [10]);
int main () {
	int arr [10];
	int n;
	cout << " Masukkan jumlah data = ";cin >> n;
	for (int i= 0 ; i<n ; i++){
		cout << " Masukkan angka pada index [" << i << " ] = " ; cin >> arr [i];
	}
		cout<<"Data Awal"<<endl;
		for (int k=0 ; k<n ; k++){
			cout<<arr[k]<< " ";
		}
	sequencial ( arr );
	
}
void sequencial (int arr [10]) {
	int f_dicari;
	int i=0;
	cout << " Masukkan nilai yang dicari = ";cin >> f_dicari;
	int ketemu=0;
	 while ((i < 10)&& ketemu==0){
	 	if (arr[i]==f_dicari){
	 		ketemu=1;
	 		cout << "Pencarian sequencial = "<< f_dicari << " Ada pada Index " <<i;
		 }  else {
		 	i=i+1;
		 }
	 }
	 if ( ketemu ==1){
	 	cout<< " Data di temukkan dalam larik" <<endl;
	 } else {
	 	cout << " Data tidak ditemukan " <<endl;
	 }
}
