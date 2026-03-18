#include <iostream>
#include<stack>
#include <bits/basic_string.h>
using namespace std ;
string RemoveStar(string exp)
{
    string final="";
    stack <char> s;
    for(int i=0 ; i<exp.length() ; i++)
    {
        if(exp[i]!='*')
        {
            s.push(exp[i]) ;
        }
        else if (exp[i]=='*')
        {
            if(!s.empty())
            s.pop() ;
        }
    }
    while(!s.empty())
    {
        final=s.top()+final;
        s.pop() ; 
    }

    return final ;
}

int main()
{
    string expression ;
    cout<<"Enter Expression " <<endl ;
    cin>> expression ;
    cout<<RemoveStar(expression) <<endl;


}