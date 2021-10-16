#include<iostream>
using namespace std;

class umur{
    private :
    int x, y;

    public:
    void assign(int tahunlahir, int tahunini){
        x=tahunlahir;
        y=tahunini;
    }
    int usia(){
        return x-y;
    }
};

int main(){
    umur obj;
    obj.assign(2021, 1990);
    cout<<"Berarti Usia Kalian Sekarang Adalah "<<obj.usia()<<" Tahun";
    return 0;
}