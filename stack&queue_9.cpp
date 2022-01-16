/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void spanstock(int a[],int n){
    stack <int> st;
    int S[100];
     S[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
       
        while(!st.empty()&&a[i]>a[st.top()]){
            st.pop();
        }
         S[i] = (st.empty()) ? (i + 1) : (i - st.top());
         st.push(i);
    }
   for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout<<endl;
        for (int i = 0; i < n; i++)
        cout << S[i] << " ";
}
int main()
{
    int arr[] = { 11, 13, 21, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    spanstock(arr, n);
    
    return 0;
}
