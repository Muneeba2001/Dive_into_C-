#include<iostream>
using namespace std;
int main(){
    int array[10], i, values;
    cout<<"Enter 5 Elements of Array: \n";
    for(i=0; i<5; i++){
        cin>>array[i];
    }
    cout<<"\n Enter Element to Insert: ";
    cin>>values;
    array[i]= values;
    cout<<" The new Array \n";
    for(i=0; i<6; i++){
        cout<<array[i];
    }
    return 0;
}