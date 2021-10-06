//Pada program kali ini saya menggunakan library “iostream” dengan menggunakan “using namespace” untuk mendeklarasikan suatu kasus. 
//Kemudian saya menggunakan “int main” karena saya akan menggunakan suatu variabel berupa bilangan bulat. 

#include <iostream>

using namespace std;

int main()
{
    int a, b, umur;
//Kemudian saya menggunakan perinta console out atau “cout” untuk menampilkan output ke layar.
    cout<<"Masukkan Umur Andi : ";
    cin>>a;
    cout<<"Masukkan Umur Budi : ";
    cin>>b;

//disini saya akan menggunakan operator penjumlahan untuk menghitung jumlah umur mereka.
    umur = a + b;

    cout<<"Maka umur mereka sekarang adalah : "<<umur<<endl;

    
//“return 0”yang artinya fungsi main akan mengembalikan nilai 0 setelah selesai dieksekusi.    
    return 0;
}