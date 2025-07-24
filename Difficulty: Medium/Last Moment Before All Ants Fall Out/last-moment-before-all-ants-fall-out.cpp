class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
        int maxi = 0;
        for(auto it : left){
            maxi = max(it,maxi);
        }
        for(auto it : right){
            maxi = max(n - it,maxi);
        }
        return maxi;
    }
};