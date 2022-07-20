#include<iostream>
using namespace std;

class node{
	public:
		node *next;
		int data;
		node(){
			next=NULL;
			data=0;
		}
		node(int d){
			data=d;
		}
};

class Queue{
	public:
	node *front;
	node *rear;
	Queue(){
		front=rear=NULL;
	}
	
	void AddMember(int d){       //Enqueue
		node *n=new node;
		n->data=d;
		if(isEmpty()){
			front=rear=n;
			return;	
		}
		rear->next=n;
		rear=n;
	}
	
	void RemoveMember(){           //Dequeue
		if(!isEmpty()){
				node *todel=new node;
				todel=front;
				front=front->next;
				todel->next=NULL;
				delete(todel);
		}
		else{
				cout<<"\t\t\t\t Antrian Keluar\n";
			}
	}
	
	bool isEmpty(){
		if(front==NULL){
			return true;
		}
		else{
			return false;
		}
	}
	
	void display(){
		cout<<endl;
		if (front == NULL) {
	            printf("\nAntrian kosong\n");
	    }
	    else{
	        	node *temp=front;
				while(temp!=NULL){
					cout<<temp->data<<"->";
					temp=temp->next;
				}
		    }
	}
};
int main(){
	int pilih,nomor;
	Queue obj;
	string nama,menu;
//	obj.AddMember(2);
//	obj.AddMember(1);
//	obj.AddMember(8);
//	obj.display();
//	obj.RemoveMember();
//	obj.display();
do{
	cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
	cout << "\t\t\t\t                           Bubble Cafe                           "<< endl;
 	cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
 	cout << "\t\t\t\t 1. Ambil Antrian\n";
    cout << "\t\t\t\t 2. Keluar Antrian\n";
    cout << "\t\t\t\t 3. Check Antrian" <<endl;
    cout << "\t\t\t\t 4. Hapus" <<endl;
    cout << "\t\t\t\t 5. Keluar Program\n";
    cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
    cout << "\t\t\t\t Masukan Pilihan : ";
    cin >> pilih;
    
    switch(pilih){
    	case 1:
    		obj.AddMember(nomor);
    		cout << "\t\t\t\t Masukan Nama Anda : ";
    		cin >> nama;
    		cout << "\t\t\t\t Masukan Nomor Antrian : ";
			cin >> nomor; 
			cout << "\t\t\t\t Maukan Menu Pesanan : ";
			cin >>menu;
			cout <<"\t\t\t\t Silahkan Customer atas Nama "<<nama <<" Dengan Nomor " <<nomor <<" Menunggu Pesanan\n";
			break;
			
		case 2:
			obj.RemoveMember();
			break;
			
		case 3:
			obj.display();
	}	
		
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	}while(pilih!=4);
}
