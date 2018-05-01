#include <iostream>
#include <cstdlib>
using namespace std;
void sort (int arr[10]);
int main(){
	int n, arr[10];
	cout<< "Masukkan Jumlah data = "; cin>>n;
	for (int i=0 ; i<n ; i++){
		cout<<"Masukkan data anda= [" <<i<< "] = ";cin>>arr[i];
	}
	sort (arr);	
}
void sort (int arr[10]){
	int min, min_index, n;
	for (int i=0 ; i<n ; i++){
		min=arr[i];
		min_index=i;
		for (int j=i ; j<n ; j++){
			if (arr[j] < min){
				min=arr[j];
				min_index=j;
			}
		}
		swap (arr[i], min_index);
		for ( int i=0 ; i<n ; i++){
		cout<< arr[i];
	}
	}
	
}
