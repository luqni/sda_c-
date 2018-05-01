#include<iostream>
using namespace std;
void selection_sort_ascendes(int dataku[5]);
void selection_sort_descendes(int dataku[5]);
void buble_sort_ascendes(int dataku[5]);
void buble_sort_descendes(int dataku[5]);
void insertion_sort_ascendes(int data[6]);
void insertion_sort_descendes(int data[6]);

int main(){
	int n, k, l, m;
	int dataku[5];
	cout<<"Nama = Muhammad Luqni Baehaqi \n";
	cout<<"Prodi = Sistem Informasi\n";
	cout<<"NIM = 0110115024\n";
	cout<<endl;
	do{
	cout<<"\tMenu Utama\n";
	cout<<" 1. Selection sort\n 2. Bubble sort\n 3. insertion sort\n 4. Exit\n";
	cin>>n;
	
	if(n==1){
		do{
			cout<< "1. Ascendes 2. Descendes"<<endl;
			cout<<"masukkan pilihan = ";cin>>l;
			if(l==1){
				 for( int c=0; c<5; c++ ){
        			cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    				}
    					selection_sort_ascendes(dataku);

    					cout << endl;
    		}else if (l==2){
    			 for( int c=0; c<6; c++ ){
        			cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    				}
    				selection_sort_descendes(dataku);

   						 cout << endl;
    				
			}
		}while(l !=2);

	}else if(n==2){
		do{
			cout<< "1. Ascendes 2. Descendes"<<endl;
			cout<<"masukkan pilihan = ";cin>>k;
			if(k==1){
	 			for( int c=0; c<5; c++ ){
	 	
        		cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
   		 		}
    			buble_sort_ascendes(dataku);

   		 		cout << endl;
   		 	}else if (k==2){
   		 		for( int c=0; c<5; c++ ){
	        		cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
   		 		}
    			buble_sort_descendes(dataku);
   		 		cout << endl;		
			}
		}while (k !=2);
	}else if(n==3){
		do{
			cout<< "1. Ascendes 2. Descendes"<<endl;
			cout<<"Masukkan pilihan = ";cin>>m;
			if(m==1){
				for( int c=0; c<5; c++){
					cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
   		 		}
    			insertion_sort_ascendes(dataku);

   		 		cout << endl;
   		 	}else if (m==2){
   		 		for( int c=0; c<5; c++ ){
	        		cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
   		 		}
    			insertion_sort_descendes(dataku);
   		 		cout << endl;		
			}
					
		}while (m !=2);
	}

	
	}while (n !=4);
	
}
void selection_sort_ascendes(int dataku[5]){
	 int min;
    int min_id;
    int temp;

    for( int i = 0; i < 5; i++ ){
        min = dataku[i];
        min_id = i;
    for( int j = i+1; j < 5; j++ ){
        if( dataku[j] < min ){
            min = dataku[j];
            min_id = j;
        }
    }
        temp = dataku[i];
        dataku[i]=dataku[min_id];
        dataku[min_id]=temp;

        cout << "Tahap ke-" << i << " : ";
        for( int n=0; n<5; n++ ){
            cout << dataku[n] <<" ";
        }
        cout << endl;
    }

}
void selection_sort_descendes(int dataku[5]){
	 int min;
    int min_id;
    int temp;

    for( int i = 0; i < 6; i++ ){
        min = dataku[i];
        min_id = i;
    for( int j = i+1; j < 6; j++ ){
        if( dataku[j] > min ){
            min = dataku[j];
            min_id = j;
        }
    }
        temp = dataku[i];
        dataku[i]=dataku[min_id];
        dataku[min_id]=temp;

        cout << "Tahap ke-" << i << " : ";
        for( int n=0; n<5; n++ ){
            cout << dataku[n] <<" ";
        }
        cout << endl;
    }

}
void buble_sort_ascendes(int dataku[5]){
	int i,j, temp;
	bool did_swap;
	i=5;
	while(i > 0){
		did_swap = false;
		j=1;
			while(j < i){
				if(dataku[j-1] > dataku[j]){
					temp=dataku[j-1];
					dataku[j-1]=dataku[j];
					dataku[j]=temp;
					did_swap = true;
				}
				 j=j+1;
			}
				 if (did_swap = false){
				 	break;
				 }
				 i=i-1;
		cout << "Tahap ke-" << i << " : ";
        for( int a=0; a<5; a++ ){
            cout << dataku[a] <<" ";
        }
        cout << endl;
	}
				 
}
void buble_sort_descendes(int dataku[5]){
	int i,j, temp;
	bool did_swap;
	i=5;
	while(i > 0){
		did_swap = false;
		j=1;
			while(j < i){
				if(dataku[j-1] < dataku[j]){
					temp=dataku[j-1];
					dataku[j-1]=dataku[j];
					dataku[j]=temp;
					did_swap = true;
				}
				 j=j+1;
			}
				 if (did_swap = false){
				 	break;
				 }
				 i=i-1;
		cout << "Tahap ke-" << i << " : ";
        for( int a=0; a<5; a++ ){
            cout << dataku[a] <<" ";
        }
        cout << endl;
	}
				 
}
void insertion_sort_ascendes(int data[6]){
    int temp,i;

    for( int j=1; j<6; j++ ){
        i = j-1;
        temp = data[j];
        while( i>=0 && temp<data[i] ){
            data[i+1] = data[i];
            i--;
        }

        data[i+1] = temp;

    cout << "Tahap ke-" << i << " : ";
        for( int c=0; c<6; c++ ){
            cout << data[c] <<" ";
        }
        cout << endl;
    }
}
void insertion_sort_descendes(int data[6]){
    int temp,i;

    for( int j=1; j<6; j++ ){
        i = j-1;
        temp = data[j];
        while( i>=0 && temp > data[i] ){
            data[i+1] = data[i];
            i--;
        }

        data[i+1] = temp;

    cout << "Tahap ke-" << i << " : ";
        for( int c=0; c<6; c++ ){
            cout << data[c] <<" ";
        }
        cout << endl;
    }
}


