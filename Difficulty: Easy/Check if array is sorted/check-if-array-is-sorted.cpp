//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        for(int i = 1; i < arr.size(); i++){
            if(arr[i-1] > arr[i])return false;
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(nums);
        cout << (ans ? "true" : "false") << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends