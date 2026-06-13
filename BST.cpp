#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int>& nums, int target){
    int n = nums.size();
    int start = 0;
    int end = n-1;
    

    while(start <= end){
        int mid = (start + end)/2;

        if (nums[mid]== target){
            return mid;
        }
    

    else if (nums[mid] < target){
        start = mid+1;
    }

    else  {
        end = mid-1;
    }
    }
    return -1;
   
    }     
   
  



     int main(){
     vector<int> nums = {1,2,4,6,8,9,10};
     int target = 9;

     cout << binarySearch(nums, target);
     return 0;
}