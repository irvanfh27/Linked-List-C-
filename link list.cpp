#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;

}*head=NULL, *tail=NULL, *baru, *bantu, *bantu2;

int ke, nilai, menu, pilih;

void buatNode();
void tambahDepan();
void tampilData();
void tambahBelakang();
void tambahTengah();
void ubahDepan();
void ubahBelakang();
void ubahTengah();
void hapusDepan();
void hapusTengah();
void hapusBelakang();

int main(){
	do{

		cout<<"1. Input"<<endl;
		cout<<"2. Tampil"<<endl;
        cout<<"3. Hapus Data"<<endl;
        cout<<"3. Exit"<<endl;
		cout<<"Masukan Pilihan : ";cin>>menu;
		cout<<endl;

		if(menu == 1){
			cout<<"1. Tambah Depan "<<endl;
			cout<<"2. Tambah Belakang"<<endl;
			cout<<"3. Tambah Tengah"<<endl;
			cout<<"4. Ubah Depan"<<endl;
			cout<<"5. Ubah Belakang"<<endl;
			cout<<"6. Ubah Tengah"<<endl;
			cout<<"Masukan Pilihan : "; cin>>pilih;
			if(pilih == 1){
			tambahDepan();
			}else if(pilih == 2){
				tambahBelakang();
			}else if(pilih==3){
				tambahTengah();
			}else if(pilih==4){
                ubahDepan();
			}else if(pilih==5){
                ubahBelakang();
			}else if(pilih==6){
                ubahTengah();
			}

		}else if(menu == 2){
			tampilData();
		}else if(menu == 3){
			cout<<"Terimakasih "<<endl;
		}else{
			cout<<"Masukan Menu Dengan Benar "<<endl;
		}
	}while(menu != 3 );

return 0;

}
void buatNode(int nilai){

	baru= new node;
	baru->data=nilai;
	baru->next=NULL;
}

void tambahDepan(){

	cout<<"Input Data Depan : "; cin>>nilai;
	buatNode(nilai);
	if (head==NULL){
		head=baru;
		tail=baru;
		tail->next = NULL;
	}else{
		baru->next=head;
		head=baru;
	}
	cout<<"Data Berhasil DItambahkan"<<endl;

}
void tampilData(){
	if(head==NULL){
		cout<<"Link List Kosong"<<endl;
	}else if(head -> next == NULL){
		cout<<"List List "<<head -> data<<endl;;
	}else {

	bantu=head;
	cout<<"List Bantu : ";
	while(bantu != NULL){
		cout<<bantu->data<<"  ";
		bantu=bantu->next;

		}
		cout<<endl;
	}
}
void tambahBelakang(){
	cout<<"Input Data Belakang : "; cin>>nilai;
	buatNode(nilai);
	if (head==NULL){
		head=baru;
		tail=baru;

}else{
		tail->next=baru;
		tail=baru;

}

}
void tambahTengah(){
cout<<"\nTambah Tengah Setelah angka - \n";cin>>ke;
cout<<"\nMasukkan Nilai--> \n";cin>>nilai;
	buatNode(nilai);
	if (head ==NULL){
cout<<"Linked List Kosong"<<endl;
}else {
bantu=head;

  for(int i=1; i<ke; i++){
	bantu=bantu->next;
}
bantu2=bantu->next;
baru->next=bantu2;
bantu->next=baru;
cout<<"Data Berhasil Ditambahkan "<<endl;


}

}
void ubahDepan(){
     if(head == NULL){
        cout<<"Linked List "<<endl;

     }else{

     cout<<"Input Data "; cin>>nilai;
     head->data=nilai;cout<<endl;
     cout<<"Data Berhasil Diubah "<<endl;

     }
  }
void ubahBelakang(){
  if(head == NULL){
        cout<<"Linked List "<<endl;

     }else{

     cout<<"Input Data "; cin>>nilai;
     tail->data=nilai;cout<<endl;
     cout<<"Data Berhasil Diubah "<<endl;

     }
  }

void ubahTengah(){
cout<<"Urutan Data yang ingin diubah ";cin>>ke;
if(head==NULL){
cout<<"Linked List Kosong"<<endl;
}else{
cout<<"Input Data "; cin>>nilai;
bantu=head;
for(int i=1; i<ke; i++){
        bantu=bantu->next;
        }
    bantu->data=nilai;
    cout<<"Data Berhasil Diubah "<<endl;
    }

}

void hapusDepan(){
if (head==NULL){
cout<<"Linked List Kosong"<<endl;
}else{
//head=head->next;
cout<<"Data Yang Dihapus adalah "<<head->data<<endl;
head=bantu;
bantu=head->next;
cout<<"Data Berhasil Dihapus"<<endl;
}
}
void hapusTengah(){

}
void hapusBelakang(){
if (head ==NULL ){
cout<<"Linked List Kosong "<<endl;
}else {
cout<<"Data yang dihapus adalah"<<tail->data<<end;
bantu=head;
while(bantu->next != tail){
bantu=bantu->next;
}
tail=bantu;
bantu->next=NULL;
cout<<"Data Berhasil Dihapus "<<endl;
}
}
