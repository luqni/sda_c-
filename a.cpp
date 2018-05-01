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
		cout << endl;
	sequencial ( arr );
	
}
void sequencial (int arr [10]) {
	int f_dicari;
	int i=0;
	int ketemu=0;
	cout << " Masukkan nilai yang dicari = ";cin >> f_dicari;
	 while (i < 10){
	 	if (arr[i]==f_dicari){
	 		cout << "Pencarian sequencial = "<< f_dicari << " Ada pada Index " <<i;
	 		cout << endl;
	 		ketemu++;
		 }
		 	i=i+1;
	 }
	 if (ketemu==0){
	 	cout<<"Data tidak ditemukan\n";
	 }else {
	 	cout << "Data di temukan pada larik sebanyak " << ketemu << " Data " <<endl;
	 }
}
