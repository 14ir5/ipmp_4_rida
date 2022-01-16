/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//stack with push(),pop(),getmin()[each in  O(1) time]

#include<bits/stdc++.h>
using namespace std;
int a[1000],top=-1;
int mn=0;
void push(int x){
    
    
    if(top==-1){
        top++;
            mn = x;
            a[top]=x;
            cout <<  "Number Inserted: " << x << "\n";
            return;
    }
    
    else if(x<mn){
        top++;
        a[top]=2*x-mn;
        mn=x;
        cout <<  "Number Inserted: " << x << "\n";
         cout <<  "Value in stack " << a[top]<< "\n";
    }
    else{
        top++;
        a[top]=x;
        cout <<  "Number Inserted: " << x << "\n";
    }
    
}
void pop(){
    if(a[top]<mn)
    mn=2*mn-a[top];
    top--;
    
}
void getMin()
 {
        if (top==-1)
            cout << "Stack is empty\n";
        else
            cout <<"Minimum Element in the stack is: "
                 << mn << "\n";
}
int main(){
    push(2);
    push(3);
    push(4);
    getMin();
    pop();
    push(1);
    getMin();
    pop();
    getMin();
    return 0;
}