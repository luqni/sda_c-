#include <iostream>

using namespace std;

struct node {
	int data;
	node * left;
	node * right;
} * root, * baru, *P, *Q;

void buatnode(){
	int input;
	cout<<"Masukkan Nilai : ";cin>>input;
	baru = new node;
	baru->data = input;
	baru->left = NULL;
	baru->right = NULL;
}

void tambahnode(){
	buatnode();
	//penelusuran
	if (root == NULL){
		root = baru;
	}else{
		P=root;
		Q=root;
		while ((Q != NULL) && (P->data != baru->data)){
			P=Q;
			if (baru->data < P->data){
				Q = Q->left;
				
			}else{
				Q= Q->right;
			}
		}
		//penempatan
		if (P->data == baru->data){
			cout<<"Data duplikad"<<endl;
		}else{
			if (baru->data <P->data){
				P->left = baru;
			}else{
				P->right = baru;
			}
		}
	} 
	 
}

void preorder(node *aRoot){

	if (aRoot != NULL){
		cout<<aRoot->data<<" ";
		preorder(aRoot->left);
		preorder(aRoot->right);
	}
}

void inorder(node *aRoot){
	if (aRoot != NULL){
		inorder(aRoot->left);
		cout<<aRoot->data<<" ";
		inorder(aRoot->right);
	}
}

void postorder(node *aRoot){
	if (aRoot != NULL){
		postorder(aRoot->left);
		postorder(aRoot->right);
		cout<<aRoot->data<<" ";
	}
}


int main(){
	short pilihan=0;
	do{
		cout<<"Menu"<<endl;
		cout<<"1. Tambah node"<<endl;
		cout<<"2. Tampil data tree dengan metode preorder"<<endl;
		cout<<"3. Tampil data tree dengan metode inorder"<<endl;
		cout<<"4. Tampil data tree dengan metode postorder"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Masukkan pilihan : ";cin>>pilihan;
		switch (pilihan){
			case 1 : tambahnode();
				break;
				
			case 2 :
				cout<<"Isi data pada tree : ";
				preorder(root);
				break;
			case 3 :
				cout<<"Isi data pada tree : ";
				inorder(root);
				break;
			case 4 :
				cout<<"Isi data pada tree : ";
				postorder(root);
				break;
			default : cout<<"pilihan tidak ada"<<endl;
				
		}
		cout<<endl;
	}while (pilihan != 5);
	return 0;	
}
