#include<iostream>
using namespace std;
void selection(int data[5]);
int main(){
	
}
void selection(int data[5]){
	int min, min_id, temp, i;
	for (int i=0; i<3; i++){
		min=data[i];
		min_id=i;
		for (int j=i+1; j<4; j++){
			min=data[j];
			min_id=j;
		}
	}
	temp=data[i];
	data[i]=data[min_id];
	data[min_id]=temp;
	
	cout<<"tahap ("<<i<<") = ";
	for(int n=0; n<5; n++){
		cout<<data [n];
	}
	cout<<endl;
}
