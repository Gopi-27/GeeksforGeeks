//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*Complete the function below*/
int IsPalindrome ( int n){
    int org = n ;
    int rn = 0;
    while(n > 0){
        int rem = n % 10;
        rn = (rn * 10) + rem ;
        n = n / 10;
    }
    if (org == rn)return org;
    else return -1;
}


class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        int cnt = 0;
        for(int b : arr){
            if(b == IsPalindrome(b))cnt++;
        }
        if(cnt == n)return true ;
        else return false ;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.isPalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends