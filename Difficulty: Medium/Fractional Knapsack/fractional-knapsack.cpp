class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size();
        //        1kg value, avail wt
        vector<pair<double,int>>perKg(n);
        
        for(int i = 0; i < n; i++){
            perKg[i] = {((double)val[i])/wt[i],wt[i]};
        }
        
        sort(perKg.begin(),perKg.end());
        
        int idx = n - 1;
        double ans = 0;
        
        while(capacity > 0 && idx >= 0){
            
            if(capacity >= perKg[idx].second){
                
                ans += perKg[idx].first * perKg[idx].second;
                
                capacity -= perKg[idx].second;
                
            }else{
                
                ans += perKg[idx].first * capacity;
                return ans;
                
            }
            
            idx--;
            
        }
        return ans;
    }
};
