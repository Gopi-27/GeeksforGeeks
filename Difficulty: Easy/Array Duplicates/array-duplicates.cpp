//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
       sort(arr.begin(),arr.end());
       vector<int>Ans;
       int n = arr.size();
       int idx = 1;
       while(idx < n){
           if(arr[idx] == arr[idx - 1]){
               Ans.push_back(arr[idx]);
            while(idx < n &&  arr[idx] == arr[idx - 1])idx++;
           }else idx++;
       }
       return Ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.findDuplicates(a);
        sort(result.begin(), result.end());

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no duplicates are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends