//{ Driver Code Starts
#include <limits.h>
#include <stdio.h>
#include <string.h>

// Forward declaration of the solution function
char* infixToPostfix(char* exp);

// Driver program to test above functions
int main() {
    int t;
    scanf("%d", &t);
    getchar(); // Consume newline after reading t

    while (t--) {
        char exp[1000];
        scanf("%s", exp); // Read the expression as a string

        // Call the infixToPostfix function and print the result
        printf("%s\n", infixToPostfix(exp));
        printf("~\n"); // Print tilde after each result
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
void Pop(){
	Top = Top->prev;
	return;
}
int IsEmpty(){
	if(Top == NULL)return 1;
	else return 0;
}
int Value(char c){
	if(c == '+' || c == '-')return 1;
	else if(c == '*')return 2;
	else if(c == '/')return 2;
	else return 3;
	
}



// Function to convert infix expression to postfix expression
char* infixToPostfix(char* str) {
    Top = NULL;
    int idx = 0;
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '^' || str[i] == '/' || str[i] == '(' || str[i] == ')'){
			if(str[i] == '('){
				Push(str[i]);
			}else if(str[i] == ')'){
				while( Top->ch != '('){
					str[idx++] = Top->ch;
					Pop();
				}
				Pop();
			}else {
				while( !IsEmpty()  && Top->ch != '(' && Value(str[i]) <= Value(Top->ch) ){
					str[idx++] = Top->ch;
					Pop();
				}	
				Push(str[i]);					
			}
					
		}else {
			str[idx++] = str[i];
		}
	}
	while(!IsEmpty()){
		str[idx++] = Top->ch;
		Pop();
	}
	str[idx] = '\0';
	return str;
    
}
