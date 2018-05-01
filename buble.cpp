#include <iostream>
using namespace std;

int main (){
	int data[]={2,1,3,5,4,6,7,8};
	int i = 8, j;
	bool did_swap;
	int temp;
	while (i > 0){
		did_swap = false;
		j = 1;
		while ( j < i) {
			if (data[j-1] > data[j]){
				temp = data [j-1];
				data[j-1] = data [j];
				data [j] = temp;
				did_swap =true;
			}
			j++;
		}
			if (did_swap = false) {
			break;
			}
			i = i -1;
                cout << " tahap ke- "<< i <<" : ";
				for (int x=0; x<8 ; x++) {
					cout<<data[x]<<" ";
				}
				cout<<endl;
	}
}
