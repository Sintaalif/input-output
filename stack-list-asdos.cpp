#include<iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
}; Node*head;

void inisialisasi(){	
	head = NULL;
}

int antriankosong(){
	if(head == NULL)
	return 1;
	else
	return 0;
}

void antrianmasuk(int inputan){
	Node *baru;
	baru = new Node;
	baru->data = inputan;
	baru->next = head;
	head = baru;
}


void antriankeluar(){
	Node *bantu;
	int data;
	if (isEmpty()==0){
		bantu = head;
		data = bantu -> data;
		head = head -> next;
		delete bantu;
	}else 
		cout<<"Antrian kosong\n";
}


void cetakantrian(){
	Node *bantu;
	bantu = head;
	if (isEmpty()==0){
		while (bantu != NULL){
			cout<<bantu->data;
			cout<<endl;
			bantu = bantu->next;
		}
	}
	else cout<<"Antrian kosong\n";
}

void hapus(){
	Node *bantu,*hapus;
	bantu = head;
	if (isEmpty()==0){
		while(bantu!=NULL){
		hapus = bantu;
		bantu = bantu->next;
		delete hapus;
		}
		head = NULL;
	}
	else cout<<"Antrian kosong\n";
}

int main(){
	int inputan,menu;
	do{
		cout<<" ______________ \n";
		cout<<"| MENU PROGRAM |\n";
		cout<<"|______________|\n";
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Clear\n";
		cout<<"4. Print\n";
		cout<<"5. Exit\n";
		cout<<"menu : ";
		cin>>menu;
		if (menu<1||menu>5){
			cout<<"\n Maaf..pilihan anda salah!!!tolong ulangi lagi!!\n\n";
		}
		else{
			switch(menu){
				case 1 :
				{
					cout<<"Masukkan data= ";
					cin>>inputan;
					push(inputan);
					cout<<endl<<endl;
				}
				break;
				case 2 :
				{
					cout<<endl;
					pop();
					cout<<endl;	
				}
				break;
				case 3 :
				{
					cout<<endl;
					clear();
					cout<<endl;	
				}
				break;
				case 4 :
				{
					cout<<endl;
					printstack();
					cout<<endl;
				}
				break;
				}
			}
		}while(menu!=5);
		clear();
	return 0;
}
