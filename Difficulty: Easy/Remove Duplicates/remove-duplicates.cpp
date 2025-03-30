//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        int frr[26] = {0};
        for(int i = 0; s[i] != '\0'; i++){
            frr[s[i] - 'a']++;
        }
        string ans = "";
        for(int i = 0; s[i] != '\0'; i++){
            if(frr[s[i] - 'a'] != -1){
                ans = ans + s[i];
                frr[s[i] - 'a'] = -1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends