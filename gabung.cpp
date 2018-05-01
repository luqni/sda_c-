#include <iostream>
#include <cstdlib>
using namespace std;
void sort_selection (int arr[]);
int main(){
	int arr[10]= {10,9,8,7,6,5,4,3,2,1};
	for (int i = 0; i < 10; i++){
		cout<< arr[i] << " , ";
	}
	cout<<endl << endl;
	sort_selection (arr);
}
void sort_selection (int arr[]){
	int min, min_index;
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
}

