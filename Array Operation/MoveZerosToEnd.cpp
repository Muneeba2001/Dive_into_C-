#include <iostream>
using namespace std;

void moveZeros(int arr[], int size){
    int left = 0;  // Pointer to track where non-zero elements should be placed
    
    // Iterate through the array
    for(int right = 0; right < size; right++){
        // If current element is non-zero, move it to the left pointer position
        if(arr[right] != 0){
            arr[left++] = arr[right];
        }
    }
    
    // Fill the remaining positions with zeros
    while(left < size){
        arr[left++] = 0;
    }
}

int main(){
    // Example usage:
    int nums[] = {0, 1, 0, 3, 12};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    cout << "Original Array: ";
    for(int i = 0; i < size; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    
    moveZeros(nums, size);
    
    cout << "Modified Array: ";
    for(int i = 0; i < size; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
