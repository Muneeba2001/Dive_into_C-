#include<iostream>
using namespace std;
int insert(){
    int array[10], i, n, item;
    cout<<"Enter size of array \n";
    cin>>n;
    cout<<"Enter Element in Array \n";
    for(i=0; i<n; i++){
        cin>> array[i];
    }
    cout<<"Enter the Element at the beginning";
    cin>>item;
    n++;
    for(i=n; i>1; i--){
       array[i-1] = array[i-2];
    }
        array[0] = item;
        cout<<"Resultant Array Element: ";
        for(i=0; i<n; i++){
            cin>> array[i];
        }
};
int main(){
    insert();
    return 0;
}