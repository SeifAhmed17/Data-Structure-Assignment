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

    //copy constructor
    Stack(Stack<t> &x) : size(x.size) , top(x.top){
      arr = new t[size];
      for( int i = 0 ; i <= top ; i++){
        arr[i] = x.arr[i];
      }
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
            cout << arr[i] << " ";
        cout << endl;
    }

    int Size(){
        return size;
    }
    
};

int main() {
    Stack<int> word(10);
    for (int i = 0; i < 10; i++) {
        word.insert(i);
    }
    cout << word.Size() << endl;
    word.display();
}