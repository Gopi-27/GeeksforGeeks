//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int fmax = arr[0];
        int smax = -1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] >= smax){
                if(arr[i] > fmax){
                    smax = fmax;
                    fmax = arr[i];
                }else if ( arr[i] < fmax){
                    smax = arr[i];
                }
            }
        }
        return smax;
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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends