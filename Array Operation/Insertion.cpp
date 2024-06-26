#include<iostream>
using namespace std;
int main(){
    int array[10], i, n, item;
    cout<<"Enter size of array \n";  // asking for the size of the array
    cin>>n; // Input the size of the array
    cout<<"Enter Element in Array \n";  // asking for the elements of array
    for(i=0; i<n; i++){
        cin>> array[i]; // as elements are entering in the form of the array
    }
    cout<<"Enter the Element at the beginning";   // adding the element at the begining
    cin>>item;  // input it in the array
    n++;   // Increment the number of size by one for the insertion
    for(i=n; i>1; i--){       // loop is working in the form of decrement
       array[i-1] = array[i-2];    // here where array i element is being minus
                                   // by 1 there equal it it the i minus 2
    }
        array[0] = item;  // Assign the element on first index
        cout<<"Resultant Array Element: ";
        for(i=0; i<n; i++){  // Here you'll print the array
            cin>> array[i];
        }
        getch();
        return 0;
};
