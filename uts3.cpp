#include <iostream>
using namespace std;
int permutasi2 (int n, int r);
int faktorial (int a);
int main(){
	int n , r;
	cout<<"masukkan n = ";cin>>n;
	cout<<"masukkan r = ";cin>>r;
	cout<<"hasil = "<<permutasi2(n, r);
	cout<<endl;
}
int faktorial(int a){
	int hasil=1;
	for(int i=1;i<=a;i++){
		hasil=hasil*i;
	}
	return hasil;
}		
int permutasi2(int n, int r){
	if (n<r)
		return (0);
	else 
		return (faktorial(n)/faktorial(n-r));
}



