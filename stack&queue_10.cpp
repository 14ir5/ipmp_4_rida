/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <bits/stdc++.h>

using namespace std;
stack <int> s;
void printNGE(int a[],int n){
    for(int i=0;i<n;i++){
        if (s.empty()) {
            s.push(a[i]);
            continue;
        }
        while (s.empty() == false 
               && s.top() < a[i]) 
        {
            cout<<a[i]<<" is the NGE of "<<s.top()<<endl;
            s.pop();
        }
        s.push(a[i]);
    }
    while (s.empty() == false ) 
        {
            cout << s.top() << " --> " << -1 << endl;
            s.pop();
        }
}
int main()
{
    int arr[] = { 11, 13, 21, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}