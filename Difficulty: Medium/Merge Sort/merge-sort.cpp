//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

void Merge(vector<int>& A,int start,int mid ,int end){
    int i = start;
    int j = mid + 1;
    int k = 0;
    vector<int>B (end - start + 1);
    while(i <= mid && j <= end){
        if(A[i] < A[j])B[k++] = A[i++];
        else B[k++]= A[j++];
    }
    while(i <= mid)B[k++] = A[i++];
    while(j <= end)B[k++] = A[j++];
    k = 0;
    for(i = start; i <= end; i++){
        A[i] = B[k];
        k++;
    }
    return;
}


class Solution {
  public:
    void mergeSort(vector<int>& arr, int start, int end) {
        // code here
        if(start >= end)return ;
        int mid = (start + end) >> 1;
        mergeSort(arr, start,mid);
        mergeSort(arr,mid+1,end);
        Merge(arr,start,mid,end);
        return ;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends