class Solution {
  public:
    int GetIdx(vector<int>& A,int key){
        int low = 0;
        int high = A.size() - 1;
        while(low <= high){
            int mid = (low + high) >> 1;
            if(A[mid] >= key)high = mid - 1;
            else low = mid + 1;
        }
        return high + 1;
    }
    vector<int> printKClosest(vector<int>&arr, int k, int x) {
        // Code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int idx = GetIdx(arr,x);
        
        int left = idx - 1;
        int right = idx;
        
        if(idx < n && arr[idx] == x)right = idx + 1;
        
        vector<int>Ans;
        
        while(k > 0 && left >= 0 && right < n){
            if( x - arr[left] >= arr[right] - x)Ans.push_back(arr[right++]);  
            else Ans.push_back(arr[left--]);
            
            k--;
        }
        
        while(k > 0 && left >= 0){
            Ans.push_back(arr[left--]);
            k--;
        }
        
        while(k > 0 && right < n){
            Ans.push_back(arr[right++]);
            k--;
        }
        
        return Ans;
        
        
    }
};


