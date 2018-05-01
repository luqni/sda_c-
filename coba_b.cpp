#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int arr[10];
	int n;
	cout<<" Masukkan jumlah data = "; cin>>n;
	cout<<endl;
	for (int i=0 ; i<n ; i++){
		cout<<" Masukkan angka = ";
		cin>>arr[i];
	}
	for (int i=0 ; i<n ; i++){
		for (int j=i+1 ; j<n ; j++){
			
			int temp;
			if (arr[i] > arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for (int i=0 ; i<n ; i++){
		cout<< arr[i] << endl;
	}
}
