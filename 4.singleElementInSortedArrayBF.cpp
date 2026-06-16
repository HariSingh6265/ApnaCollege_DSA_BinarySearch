#include <iostream>
#include <vector>
using namespace std;


class Solution{
    public:
   
    int singlElementInSortedArray(vector<int> &arr){
     int n = arr.size()-1;
     for(int i = 1; i < n-1; i++){
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                cout << i;
            }
        }
        return -1;
    }
    
};

     int main(){
     vector<int> arr = {1, 1, 2, 2, 4, 4, 9, 5, 5, 6, 6};
     Solution obj;
     obj.singlElementInSortedArray(arr);
     return 0;
}