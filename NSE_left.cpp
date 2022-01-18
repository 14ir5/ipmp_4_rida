/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
class NSEL{
    int size;
    int *a;
    stack<int>st;
    public:
    NSEL(int n){
        size=n;
        a=new int[n];
    }
    void ele(){
        for(int i=0;i<size;i++){
            cout<<"enter array element "<<i+1<<endl;
            cin>>a[i];
        }
    }
    void NSEleft(){
        for (int i=0; i<size; i++){
            while (!st.empty() && st.top() >= a[i])
            st.pop();
            if (st.empty())
            cout <<a[i]<<" --> -1 "<<endl;
            else  
            cout << a[i] << " --> "<<st.top()<<endl;
            st.push(a[i]);
    }
    }
    
};
int main()
{
    int n;
    cout<<"enter no.of elements in array"<<endl;
    cin>>n;
    NSEL test(n);
    test.ele();
    test.NSEleft();
    return 0;
}

