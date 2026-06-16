#include <iostream>
#include <vector>
using namespace std;


class Solution{
    public:

    int peakIndexInMountainArray(vector<int> &arr){
        int n = arr.size()-1;
        int st = 1;
        int end = n-1;

        while (st <= end)
        {
            int mid = st + ((end-st)/2);
            if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1] )
            {
                cout << mid;
            }

            if (arr[mid] < arr[mid+1])
            {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
            
            
        }
        
    
return -1;
}
};

     int main(){
     vector<int> arr = {0,3,18,9,5,2};
     Solution obj;
     obj.peakIndexInMountainArray(arr);

     return 0;
}