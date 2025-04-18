//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

struct Node{
    struct Node* prev;
    char ch;
    struct Node* next;
};
struct Node* top = NULL;
void Push(char val){
    struct Node* nn = (struct Node*)malloc(sizeof(struct Node));
    nn->prev = NULL;
    nn->ch = val;
    nn->next = NULL;
    if(top == NULL){
        top = nn;
        return;
    }
    top->next = nn;
    nn->prev = top;
    top = nn;
    return;
}
void Pop(){
    top = top->prev;
    return ;
}
int IsEmpty(){
    if(top == NULL)return 1;
    else return 0;
}
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
         top = NULL;
    int flag = 1;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            Push(s[i]);
        }else if(!IsEmpty() && s[i] == ')' && top->ch == '(' ){
            Pop();
        }else if(!IsEmpty() && s[i] == '}' && top->ch == '{'){
            Pop();
        }else if(!IsEmpty() && s[i] == ']' && top->ch == '['){
            Pop();
        }else{
            flag = 0;
            break;
        }
    }
    if(flag == 1 && top == NULL)return true;
    else return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends