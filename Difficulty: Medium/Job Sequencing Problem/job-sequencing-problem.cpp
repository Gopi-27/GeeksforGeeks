class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        int n = deadline.size();
        vector<vector<int>>Job(n + 1);
        
        for(int i = 0; i < n; i++){
            Job[deadline[i]].push_back(profit[i]);
        }
        priority_queue<int>pq;
        int cnt = 0;
        int money = 0;
        
        for(int i = n; i >= 1; i--){
            for(auto m : Job[i]){
                pq.push(m);
            }
            if(!pq.empty()){
                cnt++;
                money += pq.top();
                pq.pop();
            }
        }
        return {cnt,money};
    }
};