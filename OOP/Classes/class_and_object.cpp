#include<iostream>
using namespace std;
class Person{
     public:
     int myNum;
};
int main(){
    Person obj;
    obj.myNum = 5;
    cout<< obj.myNum;
    return 0;
}