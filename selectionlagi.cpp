#include<iostream>
using namespace std;

void selection_sort_ascendes(int data[6]);
void selection_sort_descendes(int data[6]);
void bubble_sort_ascendes(int data[6]);
void bubble_sort_descendes(int data[6]);
void insertion_sort_ascendes(int data[6]);
void insertion_sort_descendes(int data[6]);

int main(){
    int dataku[6];

    for( int c=0; c<6; c++ ){
        cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    }
    selection_sort_ascendes(dataku);

    cout << endl;

    for( int c=0; c<6; c++ ){
        cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    }
    selection_sort_descendes(dataku);

    cout << endl;

    for( int c=0; c<6; c++ ){
        cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    }
    bubble_sort_ascendes(dataku);

    cout << endl;

    for( int c=0; c<6; c++ ){
        cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    }
    bubble_sort_descendes(dataku);

    cout << endl;

    for( int c=0; c<6; c++ ){
        cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    }
    insertion_sort_ascendes(dataku);

    cout << endl;

    for( int c=0; c<6; c++ ){
        cout << " dataku ke-[ " <<c<< " ] = ";cin>>dataku[c];
    }
    insertion_sort_descendes(dataku);

    cout << endl;
}
void selection_sort_ascendes(int data[6]){
    int min;
    int min_id;
    int temp;

    for( int i = 0; i < 6; i-- ){
        min = data[i];
        min_id = i;
    for( int j = i+1; j < 6; j-- ){
        if( data[j] < min ){
            min = data[j];
            min_id = j;
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
void selection_sort_descendes(int data[6]){
    int min;
    int min_id;
    int temp;

    for( int i = 0; i < 6; i++ ){
        min = data[i];
        min_id = i;
    for( int j = i+1; j < 6; j++ ){
        if( data[j] > min ){
            min = data[j];
            min_id = j;
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
void bubble_sort_ascendes(int data[6]){
    int i,j;
    bool did_swap;
    int temp;

    i = 6;
    while( i > 0 ){
        did_swap = false;
        j = 1;
            while( j < i ){
                if( data[j-1] > data[j] ){
                    temp = data[j-1];
                    data[j-1] = data[j];
                    data[j] = temp;
                    did_swap = true;
                }
                j++;
            }

            if( did_swap = false ){
                break;
            }
            i = i-1;

        cout << "Tahap ke-" << i << " : ";
        for( int a=0; a<6; a++ ){
            cout << data[a] <<" ";
        }
        cout << endl;
    }
}
void bubble_sort_descendes(int data[6]){
    int i,j;
    bool did_swap;
    int temp;

    i = 6;
    while( i > 0 ){
        did_swap = false;
        j = 1;
            while( j < i ){
                if( data[j-1] < data[j] ){
                    temp = data[j-1];
                    data[j-1] = data[j];
                    data[j] = temp;
                    did_swap = true;
                }
                j++;
            }

            if( did_swap = false ){
                break;
            }
            i = i-1;

        cout << "Tahap ke-" << i << " : ";
        for( int a=0; a<6; a++ ){
            cout << data[a] <<" ";
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


