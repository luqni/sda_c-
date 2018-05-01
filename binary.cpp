#include<iostream>
using namespace std;
int binary (int dataku[10]);
void selection_sort_ascendes(int dataku[10]);
int k, j, n;
int main(){
	int dataku[10];
	cout<< "Masukkan jumlah data =";
	cin>>k;
	for( int c=0; c<k; c++ ){
    	cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];	
    }
    cout<< "Data anda = ";
    for (int j=0; j<k; j++){
    	cout<< dataku[j]<< " ";
	}
    
    selection_sort_ascendes(dataku);

    cout << endl;
    binary (dataku);
}

void selection_sort_ascendes(int dataku[10]){
	 int min;
    int min_id;
    int temp;

    for( int i = 0; i < k; i++ ){
        min = dataku[i];
        min_id = i;
    for( int j = i+1; j < k; j++ ){
        if( dataku[j] < min ){
            min = dataku[j];
            min_id = j;
        }
    }
        temp = dataku[i];
        dataku[i]=dataku[min_id];
        dataku[min_id]=temp;
    }
}
int binary(int dataku[10]){
	int temp, kanan, kiri, tengah, x;
	bool ketemu = false;
	cout<<" \n Masukkan angka yang mau di cari : ";
	cin>>x;
	kiri=0;
	kanan=n-1;
	while(kiri<=kanan){
		tengah=(kiri+kanan)/2;
		
		if(dataku[tengah] == x){
			cout<< "Data anda ketemu !\n";
			cout<< "Di index ke - "<<tengah;
			ketemu==true;
			break;
		}else if (x<dataku[tengah]){
			kanan=tengah-1;
		}else {
			kiri=tengah+1;
		}
	}
	if (ketemu==true){
		
		cout<< "ditemukan";
	}else {
		cout<< "tidak ada";
	}

}

