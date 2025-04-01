//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        // code here
        string ans = "";
        int idx = s.size() - 1;
        while(idx >= 0){
            int left = idx;
            int right = idx;
            while(left >= 0 && s[left] != ' '){
                left--;
            }
            if((right - left) > 0){
                for(int i = left + 1; i <= right; i++){
                    ans += s[i];
                }
                if(left != 0)ans += s[left];
            }
            idx = left - 1;
            
        }
        if(ans[ans.size() - 1] == ' '){
            ans[ans.size() - 1] = '\0';
        }return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;     // Read the number of test cases
    cin.ignore(); // Consume the newline character after reading the integer

    while (t--) {
        string s;
        getline(cin, s); // Read the string input

        string str = s.substr(1, s.size() - 2); // Remove surrounding quotes
        Solution obj;                       // Create an object of the Solution class
        string ans = obj.reverseWords(str); // Reverse the words in the string
        cout << '"';                        // Print opening quote
        cout << ans;                        // Print the result
        cout << '"';                        // Print closing quote
        cout << endl;                       // Print a newline
    }
    return 0; // Return 0 to indicate successful execution
}

// } Driver Code Ends