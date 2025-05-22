// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        long long int ans = 1;
        int n = arr.size();
        int zcnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0)zcnt++;
            else ans  *= arr[i];
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                if(zcnt == 1){
                    arr[i] = ans;
                }else{
                    arr[i] = 0;
                }
            }else {
                if(zcnt > 0)arr[i] = 0;
                else arr[i] = ans / arr[i];
            }
        
        }
        
        return arr;
    }
};
