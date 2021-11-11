// 20200801177 - Ahmad Andri - UTS - PBO
// Jawaban nomor 4

#include <iostream>
using namespace std;

class input{
	public:
		string a,b,c;
		void inp(){
			cout<<"\nMasukkan First name :";
			cin>>a;
			cout<<"Masukkan Middle Name :";
			cin>>b;
			cout<<"Masukkan Last Name :";
			cin>>c;
			cout<<"FULL NAME : " ;
			cout<<a<<" "<<" "<<b<<" "<<c<<endl;
		}
		};

int main(){

// Deklarasi menu agar dapat melakukan looping
menu :
   int a;
   char c;
   cout << "Menu " << endl;
   cout << "0. Keluar"<<endl;
   cout << "1. input"<<endl;
   cout << "Pilih : ";
   cin>> a;

// Menyelekse antara 0 dan 1   
if(a==0){
  	cout<<"\nthanks";}

// Ketika memilih 1 maka class input akan terpanggil
  else if(a==1){
  	input b;
  	b.inp();

// Jika pengguna ingin memasukkan kembali biodatanya 
  	cout<<"\ningin ke awal (y/t) : ";
	cin>>c;
	if (c=='y'||c=='Y'){
	goto menu;}
	else if (c=='t'||c=='T'){
	cout<<"\nThanks ";
    exit(0);}
  }
  }