#include<iostream>
using namespace std;
class myClass{
    public:
    void myMethod(){
        cout<< "My Methods";
    };
};
int main(){
    myClass obj;
    obj.myMethod();
    return 0;
}