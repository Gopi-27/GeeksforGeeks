//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    
cout << "~" << "\n";
}
        return 0;
}


// } Driver Code Ends

struct Node{
	struct Node* prev;
	char ch;
	struct Node* next;
};

struct Node* Top = NULL;
// Function to add at the  top of stack
void Push(char val){
	struct Node* nn = (struct Node*)malloc(sizeof(struct Node));
	nn->prev = NULL;
	nn->ch = val;
	nn->next = NULL;
	if(Top == NULL){
		Top = nn;
		return ;
	}
	nn->prev = Top;
	Top->next = nn;
	Top = nn;
	return ;
}
// Function To delete at Top of the stack
void Pop(){
	Top = Top->prev;
	return;
}
// Function To Check Wheather The Stack is Empty or not
int IsEmpty(){
	if(Top == NULL)return 1;
	else return 0;
}
//return the address of the string
char* reverse(char *s, int len)
{
    //code here
    Top = NULL;
    for(int i = 0; i < len; i++){
        Push(s[i]);
    }
    int idx = 0;
    while( !IsEmpty()){
        s[idx++] = Top->ch;
        Pop();
    }
    return s;
    
}