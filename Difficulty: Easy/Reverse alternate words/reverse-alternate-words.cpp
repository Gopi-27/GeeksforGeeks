//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

void Reverse(string &str,int left,int right){
    while(left < right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    return ;
}

class Solution{
    public:
    string reverseAlternate(string str)
{
    // code here 
    int len = str.size();
    int cnt = 0;
    int idx = 0;
    while(idx < len){
        int left = idx;
        int right = idx;
        while(right < len && str[right] != ' '){
            right++;
        }
        cnt++;
        if(cnt % 2 == 0){
            Reverse(str,left,right - 1);
        }
        idx = right + 1;
    }
    return str;
}
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.reverseAlternate(str)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends