#include <iostream>
using namespace std;
void selection_sort (int n);
int main(){
	int n;
	int a[6]={5,2,7,8,3,1};
	for (int i=0 ; i<6 ; i++){
		cout << a[i]<< " ";
	}


}
void selection_sort (int n){
	int a[6], temp;
	
	for (int i=1 ; i<n ; i++){
		for (int j=1 ; j<i ; j++){
			if (a[i] > a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		for (int i=0 ; i<n ; i++){
			cout<<a[i]<<endl;
		}
	}
}
