#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string operators = "+-*/^";
    stack<char> operand_stack, operator_stack;
    int t;
    cin >> t;
    string expr;
    while(t--){
        cin >> expr;
        for(char& c : expr) {

            if(operators.find(c) == string::npos && c != ')'){
                operand_stack.push(c);

            } else if (operators.find(c) != string::npos ) {
                if(!operand_stack.empty() && operand_stack.top() != '(' ){
                    cout << operand_stack.top();
                    operand_stack.pop();
                }
                operator_stack.push(c);
            }

            bool lastWasOpening = false;
            // if closing parenthesis, pop operand stack until opening popped too
            if(c == ')'){
                if(!operand_stack.empty() && operand_stack.top() != '(' )
                    cout << operand_stack.top();
                if(operand_stack.top() == '(')
                    lastWasOpening = true;
                operand_stack.pop();
                cout << operator_stack.top();
                operator_stack.pop();
                if(!lastWasOpening)
                    operand_stack.pop();
            }

        }
        cout<<"\n";
    }
    return 0;
}