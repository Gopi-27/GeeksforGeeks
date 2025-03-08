//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
void Merge(vector<int> &A,int start,int mid, int end){
    int i = start;
    int j = mid + 1 ;
    int B[end - start + 1];
    int k = 0;
    while(i <= mid && j <= end){
        if(A[i] < A[j])B[k++] = A[i++];
        else B[k++] = A[j++];
    }
    while(i <= mid)B[k++] = A[i++];
    while(j <= end)B[k++] = A[j++];
    k = 0;
    for(i = start; i <= end; i++){
        A[i] = B[k++];
    }
    return ;
}
void MergeSort(vector<int> &A, int start, int end){
    if(start >= end)return ;
    int mid = (start + end) / 2;
    MergeSort(A,start,mid);
    MergeSort(A,mid+1,end);
    Merge(A,start,mid,end);
    return ;
}

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        MergeSort(arr , 0 , n-1);
        return arr[k-1];
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends