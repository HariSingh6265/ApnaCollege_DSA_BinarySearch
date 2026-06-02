class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        
        // Single element array
        if (n == 1) return A[0];
        
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Edge cases for boundaries
            if (mid == 0) return (A[0] != A[1]) ? A[0] : -1;
            if (mid == n-1) return (A[n-1] != A[n-2]) ? A[n-1] : -1;

            // Mid itself is the single element
            if (A[mid] != A[mid-1] && A[mid] != A[mid+1]) return A[mid];

            if (mid % 2 == 0) {
                if (A[mid] == A[mid-1]) end = mid - 1;
                else st = mid + 1;
            } else {
                if (A[mid] == A[mid-1]) st = mid + 1;
                else end = mid - 1;
            }
        }

        return -1;
    }
};