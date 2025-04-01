//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int IsAlpha(char ch){
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))return 1;
    return 0;
}

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        int left = 0;
        int right = str.size() - 1;
        while(left <= right){
            while(!IsAlpha(str[left]))left++;
            while(!IsAlpha(str[right]))right--;
            if(left < right)swap(str[left],str[right]);
            left++;
            right--;
        }
        return str;
        
    } 
};


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    
cout << "~" << "\n";
}
return 0;
}


// } Driver Code Ends