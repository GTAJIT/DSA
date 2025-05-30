#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(const string& expression) {
    stack<char> stack;
    string postfix;
    for (char ch : expression) {
        if (isalnum(ch)) {
            postfix += ch;
        } else if (ch == '(') {
            stack.push(ch);
        } else if (ch == ')') {
            while (!stack.empty() && stack.top() != '(') {
                postfix += stack.top();
                stack.pop();
            }
            stack.pop();
        } else if (isOperator(ch)) {
            while (!stack.empty() && precedence(stack.top()) >= precedence(ch)) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(ch);
        }
    }
    while (!stack.empty()) {
        postfix += stack.top();
        stack.pop();
    }
    return postfix;
}

string infixToPrefix(const string& expression) {
    string reversedExpression = expression;
    reverse(reversedExpression.begin(), reversedExpression.end());
    for (char& ch : reversedExpression) {
        if (ch == '(') ch = ')';
        else if (ch == ')') ch = '(';
    }
    string postfix = infixToPostfix(reversedExpression);
    reverse(postfix.begin(), postfix.end());
    return postfix;
}

int main() {
    string expressionA = "((a+b)*(c-d))/((e-f)*g)";
    string expressionB = "((2+4)*7)/(6*5)";

    cout << "Expression A:" << endl;
    cout << "Infix: " << expressionA << endl;
    cout << "Postfix: " << infixToPostfix(expressionA) << endl;
    cout << "Prefix: " << infixToPrefix(expressionA) << endl;

    cout << "\nExpression B:" << endl;
    cout << "Infix: " << expressionB << endl;
    cout << "Postfix: " << infixToPostfix(expressionB) << endl;
    cout << "Prefix: " << infixToPrefix(expressionB) << endl;

    return 0;
}