//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

void Merge(vector<int> &A,int start,int mid,int end){
    int i = start;
    int j = mid + 1;
    int k = 0;
    int B[end - start + 1];
    while(i <= mid && j <= end){
        if(A[i] < A[j])B[k++] = A[i++];
        else B[k++] = A[j++];
    }
    while(i <= mid)B[k++] = A[i++];
    while(j <= end)B[k++] = A[j++];
    k = 0;
    for( i = start; i <= end; i++){
        A[i] = B[k++];
    }
    return ;
}
void MergeSort(vector<int> &A,int start,int end){
    if(start>=end)return ;
    int mid = (start + end) >> 1;
    MergeSort(A,start,mid);
    MergeSort(A,mid + 1, end);
    Merge(A,start,mid,end);
    return ;
}

class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        int n = arr.size();
        MergeSort(arr,0,n - 1);
        if( n % 2 == 0){
            return (arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
        }else{
            return arr[n / 2];
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findMedian(arr) << endl;
    }
}

// } Driver Code Ends