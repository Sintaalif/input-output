
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head = NULL;
node *posisi;
int option = 0;
int init(int nilai){
	node *baru;
	baru = new node;
	baru->data = nilai;
	baru->next = NULL;
	if (head == NULL){
		head = baru;
		head->next = NULL;
	}
	else{
		baru->next = head;
		head = baru;
	}
	return 0;
}

void tambah_depan(){
	node *baru;
	baru = new node;
	cout<<"Masukkan data : ";
	cin>>baru->data;
	baru->next=NULL;
	if (head==NULL){
		head = baru;
	head->next = NULL;
}
	else {
		baru->next = head;
		head = baru;
	}
}
void tambah_tengah(){
node *baru, *bantu;
int posisi_sisip;
	if(head != NULL){
	cout<<"Akan disisip setelah Data Ke ? : ";
	cin>>posisi_sisip;
	baru =new node;
	bantu=head;   
		for(int i=1;i<posisi_sisip-1;i++) {
			if(bantu->next != NULL)
				bantu=bantu->next;
			else {
				break; 
			}
			}
			cout << "Masukkan data : ";
			cin >> baru->data;
			baru->next=bantu->next;
			bantu->next=baru;
	}
	else{
		cout<<"Belum ada data !! silahkan isi data dulu....";
	}
} 
void tambah_belakang(){
	node *temp, *temp2;
        temp = new node;
	cout<<"Masukkan data";
	cin>>temp->data;
	temp->next=NULL;
	if (head==NULL){
		head = temp;
		posisi = head;
	}
	else{
		temp2=head;
		while(temp2->next!=NULL){
			temp2=temp2->next;
		}
		temp2->next = temp;
	}
}
void hapus_depan(){
	node *temp1,*temp2;
	if(head==NULL)
		cout<<"List kosong !"<<endl;
	else {
	temp1=head;
		if(temp1->next==NULL){
			delete temp1;
	head=NULL;
		}
		else {
		while(temp1->next!=NULL){
		temp2 = temp1;
		temp1=temp1->next;
	}
		delete temp1;
		temp2->next=NULL;
		}
	}
	
	}
void hapus_belakang(){
	node *temp;
	temp = head;
	head=head->next;
	delete temp;	
	}
void tampilkan_data(){
	node *temp;	
	temp = head;
	cout<<endl;
	cout<<"Data [";	
	if (temp == NULL)
		cout<<"List kosong"<<endl;
		else {	
			while (temp!=NULL){
			cout<<" "<<temp->data<<",";
			if (temp == posisi)
		cout<<" <<PosisiNode";
		temp=temp->next;
			}
		cout<<" ]";
		}
}
void hapus_tengah(){
int banyakdata,posisi_hapus,poshapus;
node *hapus, *bantu;
if(head != NULL){
	cout<<" Akan dihapus pada data ke : ";
	cin>>posisi_hapus;
	banyakdata=1;
	bantu=head;
	while(bantu->next != NULL){
		bantu=bantu->next;
		banyakdata++;
	}
	if((posisi_hapus<1)||(posisi_hapus>banyakdata)){
	cout<<"Belum ada data !! masukkan Data Dahulu ! \n";}		
	else{
		bantu=head;
		poshapus=1;
		while(poshapus<(posisi_hapus-1)){
			bantu=bantu->next;
			poshapus++;
		}
	hapus=bantu->next;
	bantu->next=hapus->next;
	delete hapus;
	}		
}
else {cout<<"Data Masih kosong ! ";}
}
int main(){
	head=NULL;
	init(1);
	init(2);
	init(3);
	init(4);
	init(5);
	init(6);		
option:
	tampilkan_data();
	cout<<endl;
	cout<<"Program Node"<<endl;
	cout<<"Menu : "<<endl;
	cout<<"1. Tambah Node Depan"<<endl;
	cout<<"2. Tambah Node Belakang"<<endl;
	cout<<"3. Hapus Node Depan"<<endl;
	cout<<"4. Hapus Node Belakang"<<endl;
	cout<<"5. Tambah Node Tertentu"<<endl;
	cout<<"6. Hapus Node Tertentu"<<endl;
	cout<<"Masukkan pilihan : ";
	cin>>option;
	switch(option){
		case 1 : tambah_depan();
			break;
		case 2 : tambah_belakang();
			break;
		case 3 : hapus_depan();
			break;
		case 4 : hapus_belakang();
			break;
		case 5 : tambah_tengah();
			break;
		case 6 : hapus_tengah();
			break;
		default : cout<<"Pilihan salah !"<<endl;
	}
	tampilkan_data();
	cout<<endl;
	goto option;
	return 0;
}
