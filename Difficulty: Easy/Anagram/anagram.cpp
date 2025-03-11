//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
    if( s1.size() != s2.size())return false;
    int frr1[26] = {0};
    int frr2[26] = {0};
    for(int i = 0; s1[i] != '\0'; i++){
        frr1[s1[i] - 'a']++;
        frr2[s2[i] - 'a']++;
    }   
    for(int i = 0; i < 26; i++){
        if(frr1[i] != frr2[i])return false;
    }
    return true;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends