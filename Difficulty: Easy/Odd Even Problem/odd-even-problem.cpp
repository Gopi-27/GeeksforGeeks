//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string oddEven(string s) {
        // code here
        int frr[27] = {0};
        for(int i = 0; s[i] != '\0'; i++){
            frr[(s[i] - 'a') + 1]++;
        }
        int ans = 0;
        for(int i =  1; i < 27; i++){
            if( i % 2 == 1 && frr[i] % 2 == 1)ans++;;
            if(i % 2 == 0 && frr[i] > 0 && frr[i] % 2 == 0)ans++; 
        }
        
        if(ans % 2 == 0)return "EVEN";
        else return "ODD";
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
        cout << "~\n";
    }
}

// } Driver Code Ends