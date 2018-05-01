#include<iostream>
using namespace std;
int main(){
	int i, t, n;
	t=0;
	n=25;
	for(i=0;i<=5;i+2){
		t=t+n;
		cout<<t;
		n=n+5;
	}
}
