#include <bits/stdc++.h>
using namespace std;

template <class t>
class Stack {
private:
    int size{};
    int top{};
    t* arr{};

public:
    Stack(int size) : size(size), top(-1) {
        arr = new t[size];
    }

    void insert(t value) {
        if (isfull())
            cout << "the stack is full" << endl;
        else
            arr[++top] = value;
    }

    t peek() {
        return arr[top];
    }

    void pop() {
        if (isEmpty())
            cout << "the stack is empty" << endl;
        else
            top--;
    }

    bool isfull() {
        return top == size - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        for (int i = 0; i <= top; i++)
            cout << arr[i];
        cout << endl;
    }
};

int main() {
    string s;
    cin >> s;

    long long n = s.size();
    Stack<char> word(n);

    for (int i = 0; i < n; i++) {
        if (s[i] == '*')
            word.pop();
        else
            word.insert(s[i]);
    }

    word.display();
}