/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
class NSER{
    int size;
    int *a;
    stack<int>st;
    public:
    NSER(int n){
        size=n;
        a=new int[n];
    }
    void ele(){
        for(int i=0;i<size;i++){
            cout<<"enter array element "<<i+1<<endl;
            cin>>a[i];
        }
    }
    void NSEryt(){
        st.push(a[0]);
        for (int i=1; i<size; i++){
            if(st.empty()){
                st.push(a[i]);
                continue;
            }
            while (!st.empty() && a[i]<=st.top()){
                cout << st.top()<< " --> "<<a[i]<<endl;
                st.pop();
            }
          
            st.push(a[i]);
        }
        while (!st.empty()){
            cout <<st.top()<<" --> -1 "<<endl;
            st.pop();
        }
    }
    
};
int main()
{
    int n;
    cout<<"enter no.of elements in array"<<endl;
    cin>>n;
    NSER test(n);
    test.ele();
    test.NSEryt();
    return 0;
}

