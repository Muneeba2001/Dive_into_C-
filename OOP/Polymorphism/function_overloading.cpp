#include<iostream>
using namespace std;
class myfunction{
    public:
    void func(int x){
        cout<< "The value of x is "<<x<<endl;
    }
    void func(double x){
        cout<< "The value of x is "<<x<<endl;
    }
    void func(int x, int y){
        cout<< "The value of x is "<<x<<"\n"<<"The value of y is "<<y<<"\n";
    }
};
int main(){
    myfunction obj;
    obj.func(5);
    obj.func(2.5);
    obj.func(25, 65);
    return 0;
}