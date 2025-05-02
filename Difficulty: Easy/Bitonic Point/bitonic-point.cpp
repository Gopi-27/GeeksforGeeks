//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        while(1){
            int mid = (low + high) >> 1;
            if(mid == 0 || mid == n - 1)return arr[mid];
            else if(arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]){
                low = mid + 1;
            }else if(arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1]){
                high = mid - 1;
            }else return arr[mid];
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        int value;

        // Read the entire line of integers
        string line;
        // cin.ignore(); // Ignore the newline after the test case input
        getline(cin, line);
        stringstream ss(line);

        // Parse integers and add them to the vector
        while (ss >> value) {
            arr.push_back(value);
        }

        Solution ob;
        auto ans = ob.findMaximum(arr);
        cout << ans << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends