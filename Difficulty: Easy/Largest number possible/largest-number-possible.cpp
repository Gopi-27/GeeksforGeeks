//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string findLargest(int n, int s) {
        // code here
        if (s > (9 * n))return "-1";
        if(s == 0 && n > 1)return "-1";
        string str = "";
        for(int i = 0; i < n; i++){
            if((s - 9) >= 0){
                str.append(1,'9');
                s -= 9;
            }else{
                str.append(1,s + '0');
                s -= s;
            }
            
        }
        return str;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, S;
        cin >> N >> S;

        Solution ob;
        cout << ob.findLargest(N, S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends