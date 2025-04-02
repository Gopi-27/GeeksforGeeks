//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        string ans = "";
        int afrr[26] = {0};
        int Afrr[26] = {0};
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] >= 'a' && s[i] <= 'z')afrr[s[i] - 'a']++;
            else Afrr[s[i] - 'A']++;
        }
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                if(afrr[s[i] - 'a'] != 0){
                    ans += s[i];
                    afrr[s[i] - 'a'] = 0;
                }
            }else {
                if(Afrr[s[i] - 'A'] != 0){
                    ans += s[i];
                    Afrr[s[i] - 'A'] = 0;
                }
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends