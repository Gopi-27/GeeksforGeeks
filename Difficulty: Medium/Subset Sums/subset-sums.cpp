class Solution {
  public:
    void GetSub(vector<int>&arr,int i ,int n,int sum ,vector<int>&ans){
        if(i == n){
            ans.push_back(sum);
            return ;
        }
        // picking;
        sum += arr[i];
        GetSub(arr,i + 1,n,sum,ans);
        sum -= arr[i];
        GetSub(arr,i + 1,n,sum,ans);
        return ;
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>ans;
        GetSub(arr,0,n,0,ans);
        return ans;
        
    }
};