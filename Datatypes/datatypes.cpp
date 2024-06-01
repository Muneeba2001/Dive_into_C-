#include<iostream>
#include <typeinfo> // library use to get the type of variables
using namespace std;
int main(){
    int a =10;
    cout<< " The integer only takes number: " <<  a << endl;
    cout << "The type of a is "<<typeid(a).name() <<endl;

    char b = 'z';
    cout<< "The char only takes single character: "<< b << endl;

    bool c = true;
    bool d = false;
    cout<< "The Boolean only takes the true(1) and false(0) "<< c << " and " <<d << endl;

    string myString = "Hello Wolrd 123";
    cout<< "The String takes all kind of variables either it's number or character: "<< myString <<endl;
    return 0;
}