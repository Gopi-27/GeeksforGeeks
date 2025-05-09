//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
        // code here.
        for(int i = 0; s[i] != '\0'; i++){
            if(k == 0)return s;
            int maxidx = - 1;
            char temp = s[i] + 1;
            for(int j = i + 1; s[j] != '\0'; j++){
                if(s[j] >= temp){
                    maxidx = j;
                    temp = s[j];
                }
            }
            if(maxidx != -1){
                k--;
                swap(s[i],s[maxidx]);
            }
        }
        return s;
    }
};


//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends