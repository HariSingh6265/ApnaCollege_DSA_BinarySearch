#include <iostream>
using namespace std;


//search in a rotated rsorted array
int main(){
    // int size = 9;
    int size;
    cout<< "Enter size of Array: ";
    cin>> size;

    int arr[size];
    for(int i=0; i < size; i++){
        cout<< "Enter Elements of array: ";
        cin>>arr[i];
    }

    int target;

    cout << "Enter the target element to search in an array: ";
    cin >> target;

    int start = 0;
    int end = size-1; 

    while (start <= end){

        int mid = start + (end-start)/2;

        if (arr[mid] == target){
            
            cout<< mid;
            return 0;
        }

        else if (arr[start] <= arr[mid]){ // left half sorted
            if(target >= arr[start] && target <= arr[mid]){
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        else { // right half sorted
           if(target >= arr[mid] && target <= arr[end]){
                start = mid+1;
            }
            else {
                end = mid-1;

            }
        }

    }

    return -1;
}