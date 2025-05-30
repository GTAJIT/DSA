def is_operator(c):
    return c in {'+', '-', '*', '/', '^'}

def precedence(op):
    if op in {'+', '-'}:
        return 1
    if op in {'*', '/'}:
        return 2
    if op == '^':
        return 3
    return 0

def infix_to_postfix(expression):
    stack = []
    postfix = []
    for char in expression:
        if char.isalnum():
            postfix.append(char)
        elif char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                postfix.append(stack.pop())
            stack.pop()
        elif is_operator(char):
            while stack and precedence(stack[-1]) >= precedence(char):
                postfix.append(stack.pop())
            stack.append(char)
    while stack:
        postfix.append(stack.pop())
    return ''.join(postfix)

def infix_to_prefix(expression):
    expression = expression[::-1]
    expression = ''.join(['(' if char == ')' else ')' if char == '(' else char for char in expression])
    postfix = infix_to_postfix(expression)
    return postfix[::-1]

expression_a = "  ( (a+b)*(c-d))/((e-f)*g)"
expression_b = "((2+4)*7)/(6*5)"
print(expression_a)
expression_a = expression_a.replace(" ", "")
expression_b = expression_b.replace(" ", "")

print("Expression A:")
print("Infix:", expression_a)
print("Postfix:", infix_to_postfix(expression_a))
print("Prefix:", infix_to_prefix(expression_a))

print("\nExpression B:")
print("Infix:", expression_b)
print("Postfix:", infix_to_postfix(expression_b))
print("Prefix:", infix_to_prefix(expression_b))