class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size();
        vector<pair<double,int>>A(n);
        for(int i = 0; i < n; i++){
            A[i].first = (double)val[i]/(double)wt[i];
            A[i].second = wt[i];
        }
        sort(A.begin(),A.end(),greater<pair<double,int>>());
        double ans = 0;
        
        for(int i = 0; i < n; i++){
           if(capacity >= A[i].second){
               ans += A[i].first * A[i].second;
               capacity -= A[i].second;
           }else{
               ans += capacity * A[i].first;
               return ans;
           }
        }
        return ans;
    }
};
