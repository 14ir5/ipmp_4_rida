/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//middle element

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*next,*prev;
};
struct node* top=NULL,*mid=NULL;
int size=0;
void push(int x){
       
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        newnode->prev=NULL;
        if (size==0)
        {
            top = newnode;
            mid = newnode;
           
            size++;
            return;
        }
         
        top->next=newnode;
        newnode->prev=top;
        top=top->next;
        
        if (size%2==1)
        {
            mid = mid->next;
        }
        size++;
}
void pop(){
    if (size!=0)
        {
            if (size==1)
            {
                top = NULL;
                mid = NULL;
            }
            else
            {
                top = top->prev;
                top->next = NULL;
                if (size%2==0)
                {
                    mid = mid->prev;
                }
            }
            size--;
        }
}
void findmiddle(){
    if(mid!=NULL)
    cout<<"middle element = "<<mid->data;
}
void deletemiddle(){
    if (size!=0)
        {
            if (size==1)
            {
               top = NULL;
                mid = NULL;
            }
            else if (size==2)
            {
                top =top->prev;
                mid = mid->prev;
                top->next =NULL;
            }
            else
            {
                mid->next->prev = mid->prev;
                mid->prev->next = mid->next;
                if (size%2==0)
                {
                    mid = mid->prev;
                }
                else
                {
                    mid = mid->next;
                }
            }
            size--;
        }
}
int main(){
    
    push(2);
    push(3);
    findmiddle();
    push(4);
    findmiddle();
    pop();
    push(1);
    findmiddle();
    pop();
    deletemiddle();
    push(7);
    findmiddle();
 
    return 0;
}