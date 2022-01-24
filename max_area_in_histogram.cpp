/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int a[100],b[100],c[100],n;
void rytNSE(){
    stack <int>st;
    st.push(0);
    for(int i=1;i<n;i++){
        if(st.empty()){
            st.push(i);
            continue;
        }
        while(st.empty()==false&&a[i]<a[st.top()]){
            c[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(st.empty()==false){
        c[st.top()]=st.top();
        st.pop();
    }
}
void leftNSE(){
    stack<int> st;
    for(int i=0;i<n;i++){
        while(st.empty()==false&&a[st.top()]>a[i])  //all elements that popped out are elements bigger than a[i]
                                                //for elements after a[i] nse will be either a[i] or nse of a[i,cnnot be the popped ut elements
        {
            st.pop();
        }
        if (st.empty())
            b[i]=i;
            else  
            b[i]=st.top();
            st.push(i);//{6, 2, 5, 4, 5, 1, 6}
    }        
}
int main()
{
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    leftNSE();
    rytNSE();
    int max=0,area;
    for(int i=0;i<n;i++){
        area=(c[i]-b[i]+1)*a[i];
        if(area>max)
        max=area;
        
    }
    cout<<area;
    return 0;
}
