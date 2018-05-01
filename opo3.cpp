#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int min, min_index;
	int arr[]= {10,9,8,7,6,5,4,3,2,1};
	for (int i = 0; i < 10; i++){
		cout<< arr[i] << " , ";
	}
	cout<< endl << endl;
	for (int i=0 ; i<10 ; i++){
		min=arr[i];
		min_index=i;
		for (int j=i ; j<10 ; j++){
			if (arr[j] < min){
				min=arr[j];
				min_index=j;
			}
		}
		swap(arr[i], arr[min_index]);
		
	}
	for (int i = 0; i < 10; i++){
		cout<< arr[i] << " , ";
	}
	return 0;
}
