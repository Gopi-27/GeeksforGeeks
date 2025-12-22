// User function template for C++
class Solution {
  public:
    int GetCount(vector<int>& A){
        int low = 0;
        int high = A.size() - 1;
        while(low <= high){
            int mid = (low + high) >> 1;
            if(A[mid] == 0)low = mid + 1;
            else high = mid - 1;
        }
        return A.size() - low;
    }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        int maxi = 0;
        int ans = -1;
        for(int i = 0; i < n; i++){
            int ocnt = GetCount(arr[i]);
            if(ocnt > maxi){
                maxi = ocnt;
                ans = i;
            }
        }
        return ans;
    }
};