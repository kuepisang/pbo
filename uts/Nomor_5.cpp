// 20200801177 - Ahmad Andri - UTS - PBO
// Jawaban No. 5

#include<iostream>
using namespace std;

int main(){
    int n, s, i, j;

    cout<<"Masukkan jumlah baris : ";
    cin>>n;
    for(i=1; i<n; i++){
        for(s=1; s<n; s++)
        cout<<" ";
        for(j=1; j<=i; j++)
        cout<<"*";
        cout<<"\n";
    }
    return 0;
}