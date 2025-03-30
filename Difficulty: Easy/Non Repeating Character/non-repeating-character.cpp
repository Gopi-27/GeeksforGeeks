//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        int frr[26] = {0};
        for(int i = 0; s[i] != '\0'; i++){
            frr[s[i] - 'a']++;
        }
        for(int i = 0; s[i] != '\0'; i++){
            if(frr[s[i] - 'a'] == 1)return s[i];
        }
        return '$';
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends