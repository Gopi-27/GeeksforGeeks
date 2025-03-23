//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

char extraChar(string &s1, string &s2) {

    // code here
    string s3 = s1 + s2;
    map<char,int>mpp;
    for(auto ch : s3)mpp[ch]++;
    for(auto b : mpp){
        if(b.second % 2 == 1)return b.first;
    }
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        cout << extraChar(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends