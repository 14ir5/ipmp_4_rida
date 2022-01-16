/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//TWO STACKS IN ONE ARRAY
#include <iostream>

using namespace std;
int top1=-1;
int top2;
int n;
int a[1000];
void push1(int x){
    
    if(top1+1<top2){
          top1++;
          a[top1]=x;
    }
      
    else{
        
       cout << "Stack Overflow"
                 << " By element :" << x << endl;
            return;
    }
    
}
void push2(int x){
    
    if(top1+1<top2){
        --top2;
         a[top2]=x;
    }
       
    else{
           cout << "Stack Overflow"
                 << " By element :" << x << endl;
            return;
        }
    
}
int pop1(){
    if(top1!=-1){ 
       
        int temp=a[top1];
        top1--;
        return temp;
    }
    else{
        cout<<"stack is empty"<<endl;
        exit(1);
    }
   
}
int pop2(){
    if(top2!=n){ 
        int temp=a[top2];
        top2++;
        return temp;
    }
    else{
        cout<<"stack is empty"<<endl;
        exit(1);
    }
}
int main()
{
    
    cout<<"enter size o array"<<endl;
    cin>>n;
    top2=n;
    push1(5);
    push2(10);
    push2(15);
    push1(11);
    push2(7);
    cout << "Popped element from stack1 is "
         << pop1();
    push2(40);
    cout << "\nPopped element from stack2 is "
         << pop2();
    return 0;
}
