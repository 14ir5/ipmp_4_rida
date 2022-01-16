/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//queue using 2stack
//s2 is the queue
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack <int> s1,s2;
  
    public:
    void enQueue(int x){
        while(s2.empty()==0){
            s1.push(s2.top());
            s2.pop();
        }
        s2.push(x);
        while(s1.empty()==0){
            s2.push(s1.top());
            s1.pop();
        }
    }
    int deQueue(){
        if(s2.empty()){
            cout<<"queue is empty"<<endl;
            exit(0);
        }
        int x=s2.top();
        s2.pop();
        return x;
        s2.pop();
    }
    
};
int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout << q.deQueue() << " deleted"<<'\n';
    cout << q.deQueue() << " deleted"<<'\n';
    cout << q.deQueue() << " deleted"<<'\n';

    return 0;
}
