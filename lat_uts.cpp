#include<iostream>
using namespace std;
void sort(data[10]);
int main(){
	
}
void sort(data[10]){
	int temp, min, min_id;
	for (int i=0; i<n; i++){
		min=data[i];
		min_id=i;
		for (int j=i+1; j<n; j++){
			if (data[j]<min){
				min=data[j];
				min_id=j;
			}
		}
		temp=data[i];
		data[i]=data[min_id];
		data[min_id]=temp;
	}
}
