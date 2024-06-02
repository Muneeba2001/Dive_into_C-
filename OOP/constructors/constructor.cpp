#include<iostream>
using namespace std;
class myConstructor{
    public:
    myConstructor(){
        cout<< "Constructor!";
    };
};
int main(){
    myConstructor obj;
    return 0;
}