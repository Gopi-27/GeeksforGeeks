//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> parr;
        vector<int> narr;
        for(int b : arr){
            if( b >= 0)parr.push_back(b);
            else narr.push_back(b);
        }
        int p = parr.size();
        int n = narr.size();
        int i = 0;
        int j = 0;
        int k = 0;
        while(i < p && j < n){
            arr[k++] = parr[i++];
            arr[k++] = narr[j++];
        }
        while(i < p)arr[k++] = parr[i++];
        while(j < n)arr[k++] = narr[j++];
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends