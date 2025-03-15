//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high) >> 1;
            if(arr[mid] == 1){
                high = mid - 1;
            }else{
                low  = mid + 1;
            }
        }
        if(low == n)return -1;
        return low;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.transitionPoint(arr) << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends