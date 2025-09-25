class Solution {
  public:
    int rec(int level,int sum_left,vector<int>& A,vector<vector<int>>&Dp){
        //pruning
        
        //base case
        if(level == A.size()){
            if(sum_left == 0)return 1;
            return 0;
        }
        // cache check
        if(Dp[level][sum_left] != -1)return Dp[level][sum_left];
        //compute
        int ans = 0;
        // non - pick
        ans = rec(level + 1,sum_left,A,Dp);
        
        // pick
        if(sum_left >= A[level]){
            ans += rec(level + 1,sum_left - A[level],A,Dp);
        }
        
        
        // save and return
        return Dp[level][sum_left] = ans;
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        vector<vector<int>>Dp(n,vector<int>(target + 100,-1));
        return rec(0,target,arr,Dp);
        
    }
};