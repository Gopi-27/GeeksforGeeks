//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int carry = 0;
        int i = s1.size() - 1;
        int j = s2.size() - 1 ;
        string Ans = "";
        while(i >= 0 && j >= 0){
            int val1 = s1[i] - '0';
            int val2 = s2[j] - '0';
            int sum = val1 + val2 + carry;
            switch(sum){
                case 0 :
                    Ans = '0' + Ans;
                    carry = 0;
                break;
                case 1 :
                    Ans = '1' + Ans;
                    carry = 0;
                break;
                case 2 :
                    Ans = '0' + Ans;
                    carry = 1;
                break;
                default :
                    Ans = '1' + Ans;
                    carry = 1;
                break;
            }
            i--;
            j--;
        }
        while(i >= 0){
            int val1 = s1[i] - '0';
            int sum = val1 + carry;
            switch(sum){
                case 0 :
                    Ans = '0' + Ans;
                    carry = 0;
                break;
                case 1 :
                    Ans = '1' + Ans;
                    carry = 0;
                break;
                default :
                    Ans = '0' + Ans;
                    carry = 1;
                break;
             
            }
            i--;
        }
        while( j >= 0){
            int val2 = s2[j] - '0';
            int sum = val2 + carry;
            switch(sum){
                case 0 :
                    Ans = '0' + Ans;
                    carry = 0;
                break;
                case 1 :
                    Ans = '1' + Ans;
                    carry = 0;
                break;
                default :
                    Ans = '0' + Ans;
                    carry = 1;
                break;
                
            }
            j--;
        }
        if(carry == 1) Ans = '1' + Ans;
        int idx = 0;
        while(Ans[idx] == '0')idx++;
        return &Ans[idx];
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends