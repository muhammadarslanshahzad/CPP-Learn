/*
 ----------------------- Day 28 ----------------------
 ----- Stack using Array    ----------
 --- Date: 05.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define n 100

class Stack{

    private:

        int * arr;
        int top;

    public:
        Stack(){
            arr = new int[n];
            top=-1;
        }

        void push(int a){
            if(top==n){
                cout<<"StackOverflow"<<endl;            
                return;
            }
            top ++;
            arr[top]=a;
        }

        void pop(){
            if(top==-1){
                cout<<"Stack is empty!"<<endl;
                return;
            }
            top--;
        }

        int Top(){
            if(top==-1){
                cout<<"No element and Stack is empty!"<<endl;
                return -1;
            }
            return arr[top];
        }

        bool is_empty(){
            return top==-1;
        }


};

int main(void){

    Stack st;
    cout<<"Stack is empty : "<<st.is_empty()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int a=st.Top();
    cout<<a<<" is top most element!"<<endl;

    st.pop();
    st.pop();
    st.pop();
    a=st.Top();
    cout<<a<<" is top most element!"<<endl;
    
    st.pop();
    a=st.Top();
    cout<<a<<" is top most element!"<<endl;
    

    return 0;
}

/**
 * Sample Output 
 * 
 *  Stack is empty : 1
    4 is top most element!
    1 is top most element!
    No element and Stack is empty!
    -1 is top most element!
 * 
 * 
 * */ 