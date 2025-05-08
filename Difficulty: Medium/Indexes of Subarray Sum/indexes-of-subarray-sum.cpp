//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int> Ans;
        Ans.push_back(- 1);
        int sum = 0;
        int left = 0;
        int right = 0;
        int n = arr.size();
        while(right <= n && left < n){
            while(sum < target && right < n)sum += arr[right++];
            if(sum == target){
                Ans[0] = left + 1;
                Ans.push_back(right);
                return Ans;
            }
            while(target < sum)sum -= arr[left++];
            if(right == n && sum != target)return Ans;
        }
        return Ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends