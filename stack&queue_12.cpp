/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
class Stack{
    int *a;
    int size;
    int top1=-1,top2,top3,start2;
    public:
    Stack(int n){
        size=n;
        a = new int[n];
        top2=size/3-1;
        top3=n;
        start2=size/3;
    }
    void push1(int x);
    void push2(int x);
    void push3(int x);
    int pop1();
    int pop2();
    int pop3();
    void gettop1();
    void gettop2();
    void gettop3();
    void printarray();
};

void Stack::push1(int x){
    if(top1+1==start2){
        if(top2+1==top3){
            cout<<"stack overflow"<<endl;
            exit(1);
        }
        else{
            for(int i=top2;i>=start2;i--)
            a[i+1]=a[i];
            top2++;
            start2++;
            top1++;
            a[top1]=x;
        }
    }
    else{
        top1++;
        a[top1]=x;
    }
}
void Stack::push2(int x){
    
    if(top2+1==top3){
        if(top1+1==start2){
             cout<<"stack overflow"<<endl;
        }
        else{
            for(int i=start2;i<=top2;i++)
                a[i-1]=a[i];
                start2--;
                a[top2]=x;
            
        }
    }
    else{
       top2++;
       a[top2]=x;
    }

}
void Stack::push3(int x){
   if(top2+1==top3){
       if(top1+1==start2){
           cout<<"stack overflow"<<endl;
       }
       else{
           for(int i=start2;i<=top2;i++)
                a[i-1]=a[i];
                start2--;
                top2--;
                top3--;
                a[top3]=x;
       }
   } 
   else{
       top3--;
       a[top3]=x;
   }
}
void Stack::printarray(){
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int Stack::pop1(){
    int temp=a[top1];
    top1--;
    return temp;
}
int Stack::pop2(){
    int temp=a[top2];
    top2--;
    return temp;
}
int Stack::pop3(){
    int temp=a[top3];
    top1++;
    return temp;
}
void Stack::gettop1(){
    cout<<"top1="<<top1<<endl;;
}
void Stack::gettop2(){
    cout<<"top2 = "<<top2<<endl;
}
void Stack::gettop3(){
    cout<<"top3 = "<<top3<<endl;
}
int main()
{
    Stack st(6);
    st.push1(12);
    st.push1(8);
    st.push1(16);
    st.push2(56);
    st.push3(6);
    st.printarray();
    
    st.push3(88);
    st.printarray();
    return 0;
}
