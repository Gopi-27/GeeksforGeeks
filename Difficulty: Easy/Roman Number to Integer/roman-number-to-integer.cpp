//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
int Value(char ch){
    if(ch == 'I')return 1;
    else if(ch == 'V')return 5;
    else if(ch == 'X')return 10;
    else if(ch == 'L')return 50;
    else if(ch == 'C')return 100;
    else if(ch == 'D')return 500;
    else return 1000;
}

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int len = s.size();
        int ans = 0;
        ans = Value(s[len - 1]);
        for(int i = len - 2; i >= 0; i--){
            if(Value(s[i]) >= Value(s[i + 1]))ans += Value(s[i]);
            else ans -= Value(s[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends