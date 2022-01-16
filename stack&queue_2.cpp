/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//stack using two queues
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue <int>q1,q2;
    int sze;
    public:
    Stack(){
        sze=0;
    }
    void push(int x){
        sze++;
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>q=q1;
        q1=q2;
        q2=q;
    }
    void pop(){
        if(q1.empty())
        return;
        q1.pop();
        sze--;
    }
    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }
    

    int size()
    {
    
        return sze;
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "current size: " << s.size()
         << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << "current size: " << s.size()
         << endl;
    return 0;
}
