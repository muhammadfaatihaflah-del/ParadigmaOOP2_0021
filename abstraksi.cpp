#include <iostream>
using namespace std;

class abstraksiklas{
    private:string x,y;
    public:
        //method mengisi nilai
        //private number
        void setxy(string a,string b){
            x = a;
            x = b;
        }
        //menampilkan nilai
        void display(){
            cout << "x = " << x <<endl;
            cout << "y = " << y <<endl;
        }
};

int main(){
    abstraksiklas ak;
}