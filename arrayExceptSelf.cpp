#include <iostream>
#include<vector>
using namespace std;


class Solution{
    public:

    vector<int>productExceptSelf (vector <int> &nums){
        int n = nums.size(); 
        vector<int> ans(n,1); //naya vector banaya 'ans' jisme we'll store our products ke answers, Which has same no. of elements as in 'nums'

        for(int i = 0; i < n; i++){
            int prod = 1;
            for(int j = 0; j < n; j++){
                if(i != j){
                    prod = prod * nums[j];
                }
                ans[i] = prod;
            }    
        }
        return ans;   
    }
};

     int main(){
        Solution sol;
        vector<int> nums = {2, 4, 6, 8};
        vector<int> result =  sol.productExceptSelf(nums);

        cout << "Output: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";}
     return 0;
}