// User function Template for C++

class Solution {
  public:
    void GetSub(vector<int>&arr,int i,int n,vector<int>ans,vector<vector<int>>& Res){
        if(i == n){
            Res.push_back(ans);
            return ;
        }
        // picking;
        ans.push_back(arr[i]);
        GetSub(arr,i + 1,n,ans,Res);
        ans.pop_back();
        GetSub(arr,i + 1,n,ans,Res);
        return ;
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>>Res;
        vector<int>ans;
        GetSub(arr,0,arr.size(),ans,Res);
        sort(Res.begin(),Res.end());
        return Res;
    }
};