#include <iostream>
#include <stack>
using namespace std;

stack<int> copyStack(stack<int> original) 
{
    stack<int> temp, copy;

    while (!original.empty()) 
    {
        temp.push(original.top());
        original.pop();
    }

    while (!temp.empty())
    {
        copy.push(temp.top());
        temp.pop();
    }

    return copy;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stack<int> newStack = copyStack(s);
    
    while (!newStack.empty()) 
    {
        cout << newStack.top() << " ";
        newStack.pop();
    }
    return 0;
}