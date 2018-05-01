#include <iostream>
using namespace std;
void selection_sort (int dataku[6]);
int main(){
	int dataku[6]={5,2,7,8,3,1};
	for( int c=0; c<5; c++ ){
        cout <<dataku[c];
    }
    selection_sort(dataku);

    cout << endl;
}
void selection_sort(int dataku[6]){
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

