/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int evpostfix(char* expr)
{
   
    stack <int> st;
    int i;
 
    for (i = 0; expr[i]; ++i)
    {
        
        if (isdigit(expr[i]))
           st. push(expr[i] - '0');
 
      
        else
        {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (expr[i])
            {
            case '+': st.push(val2 + val1); break;
            case '-': st.push(val2 - val1); break;
            case '*': st.push(val2 * val1); break;
            case '/': st.push(val2/val1); break;
            }
        }
    }
    return st.top();
}
 

int main()
{
    char expr[100];
   cout<<"enter expression:"<<endl;
    cin>>expr;
    cout<<"postfix evaluation: "<<evpostfix(expr);
    return 0;
}


