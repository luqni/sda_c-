#include <iostream>
using namespace std;
void sort_bubble (int n);
int arr[10];
int main(){
	int n;
	cout<< "Masukkan jumlah data (maks 10) = "; cin >> n;
	if (n<=10) {
		for (int i=0; i<n ; i++){
			cout<< "Masukkan angka = "; cin >> arr[i];
		}
		cout<<"Data Awal"<<endl;
		for (int k=0 ; k<n ; k++){
			cout<<arr[k]<< " ";
		}
		cout<<endl;
		sort_bubble (n);
	}else {
		cout<<"Data yang anda masukkan melebihi batas"<< endl;
	}
}
void sort_bubble (int n){
	for (int i=0 ; i<n ; i++){
		for ( int j=1 ; j<n ; j++){
			int temp;
			if (arr[j] < arr[j-1]){
				temp= arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
				
				for (int k=0 ; k<n ; k++){
					cout<<arr[k]<< " ";
				}
				cout<<endl;
			}
		}
	}
	for (int k=0 ; k<n ; k++){
		cout<<arr[k]<< " ";
	}
}
