#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int singleElementInSortedArray(vector<int>& arr){
        int st = 0, end = arr.size()-1;
        while (st <= end){ 
            int mid = st + (end - st)/2;
            if (arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1])
            {
                cout << arr[mid];
            }
            
            if (arr[mid] == arr[mid-1])
            {
                end = mid-1;
            }

        else 
            {
                st = mid+1;
            }
        }
    return -1;    
    }

};

     int main(){
        vector<int> arr = {1,1,2,3,3,4,4,8,8};
         Solution obj;
         obj.singleElementInSortedArray(arr);
     return 0;
}