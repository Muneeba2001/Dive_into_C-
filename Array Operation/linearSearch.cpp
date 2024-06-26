// Find the most minimum value in the array: Linear searching where you take first index 
// and comapare it with the whole array

#include<iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main(){
  vector<int> arr={10, 5, 20, 13, 29, 3};
   int minValue = arr[0];
   for(int i =1; i<arr.size(); ++i){
         if(arr[i]<minValue){
            minValue=arr[i];
         }
   }
   cout<< "The minimun Value: "<<minValue;
   return 0;
}