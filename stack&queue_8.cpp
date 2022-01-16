/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <bits/stdc++.h>

using namespace std;
list<int> dq;
unordered_map<int, list<int>::iterator> ma;
int size;
void cache(int x);
void display();
int main()
{
    int n,data;
    cout<<"enter thr cache size"<<endl;
    cin>>size;
    cout<<"enter the no.of mem ref"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter reference "<<i+1<<endl;
        cin>>data;
        cache(data);
    }
display();
    return 0;
}
void cache(int x){
    if(ma.find(x)==ma.end()){
        if (dq.size() == size){
            int last = dq.back();
            dq.pop_back();
            ma.erase(last);
        }
    }
    else{
        dq.erase(ma[x]);
    }
    dq.push_front(x);
    ma[x]=dq.begin();
}
void display()
{
    for (auto it = dq.begin(); it != dq.end();
         it++)
        cout << (*it) << " ";
 
    cout << endl;
}