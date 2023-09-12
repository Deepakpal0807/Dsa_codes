#include <bits/stdc++.h>
using namespace std;
bool solve(string str)
{
    // here the concept of last in first out so here we use stack
    stack<char> s;
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        char x = str[i];
        // cout<<x<<" "<<endl;

        switch (x)
        {
        case '{':
            s.push('{');
            break;
        case '[':
            s.push('[');
            break;
        case '(':
            s.push('(');
            break;
        case '}':
               if(s.empty()){
                return false;
               }
            if (s.top() == '{')
                s.pop();
            else
                return false;
            break;
        case ']':
        if(s.empty()){
                return false;
               }
            if (s.top() == '[')
                s.pop();
            else
                return false;
            break;
        case ')':
        if(s.empty()){
                return false;
               }
            if (s.top() == '(')
                s.pop();
            else
                return false;
            break;
        }
    }
  
   return s.empty();
}
int main()
{

    string str;
    str="{([])}(())";

    solve(str) ? cout << "Valid !" << endl : cout << "Not valid !" << endl;
}