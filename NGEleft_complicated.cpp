/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
class NGEL{
    int size;
    int *a;
    stack<int>st;
    public:
    NGEL(int n){
        size=n;
        a=new int[n];
    }
    void ele(){
        for(int i=0;i<size;i++){
            cout<<"enter array element "<<i+1<<endl;
            cin>>a[i];
        }
    }
    void NGEleft(){
        st.push(a[size-1]);
        for(int i=size-2;i>=0;i--){
            if(st.empty()){
                st.push(a[i]);
                continue;
            }
            while(st.empty()==false&&st.top()<a[i]){
                cout<<st.top()<<"--> "<<a[i]<<endl;
                st.pop();
            }
            st.push(a[i]);
        }
        while(st.empty()==false){
            cout<<st.top()<<"--> -1"<<endl;
            st.pop();
        }
    }
    
};
int main()
{
    int n;
    cout<<"enter no.of elements in array"<<endl;
    cin>>n;
    NGEL test(n);
    test.ele();
    test.NGEleft();
    return 0;
}
