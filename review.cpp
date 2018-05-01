#include <iostream>
using namespace std;

void selection_desc(int dataku[6]);

int main(){
	int n, dataku;
	cout<<"Masukkan jumlah data : ";cin>>n;
	for( int c=0; c<n; c++){
        cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    }
    selection_desc(dataku);

    cout << endl;
}
void selection_desc(int data[6]){
	int min, min_id, temp;
	for (int i=0; i<6; i++){
		min=data[i];
		min_id=i;
		for (int j=i+1 ; j<6; j++){
			if (data[j] > min){
				min=data[j];
				min_id=j;
			}
		}
		
		temp = data[i];
        data[i]=data[min_id];
        data[min_id]=temp;
        
        cout << "Tahap ke-" << i << " : ";
        for( int n=0; n<6; n++ ){
            cout << data[n] <<" ";
        }
        cout << endl;
	}
}
