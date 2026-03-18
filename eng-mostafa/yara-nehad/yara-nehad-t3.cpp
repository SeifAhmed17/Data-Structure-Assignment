#include<iostream>
using namespace std ;
const int max_size=100;
class stack 
{
    int top ;
    int item[max_size];

    public:
    stack():top(-1) {}
    void push(int element)
    {
        if(top>=max_size-1)
        {cout<<"stack full" <<endl;}
        else
        {
            top++ ;
            item[top]=element;
        }
    }
    bool is_empty()
    {
       if(top<0) 
        return true ;
       else 
        return false ;
    }
    void pop()
    {
        if(is_empty())
        {cout<<"stack emoty" ;}
        else 
        top--;
    }

    //Task3
    int sizeofStack()
    {
        return top;
    }

    void display ()
    {
        for(int i=top;i>=0;i--)
            cout<<item[i] <<" " ;
    }
};
int main()
{
stack s1;
s1.push(10);
s1.push(20);
s1.push(40);
s1.push(50);
//s1.pop() ;
s1.display();
cout << "size of stack "<<s1.sizeofStack();

}