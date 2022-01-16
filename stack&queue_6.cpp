/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;


bool areBracketsBalanced(string a)
{  
    stack<char> s;
    char x;
    for(int i=0;i<a.length();i++){
        if(a[i]=='{'||a[i]=='['||a[i]=='(')
        {
            s.push(a[i]);\
            continue;
        }
       
            if(s.empty())
            return false;
        switch (a[i]) {
        case ')':
            
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

           
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    
     return (s.empty());
}


int main()
{
    string expr = "{()}[]";

    
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
