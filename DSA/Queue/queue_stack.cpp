/*
 ----------------------- Day 36 ----------------------
 ----- Queue using Stack    ----------
 --- Date: 13.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> st1;
    stack<int>st2;

    public:
        void push(int x){
            st1.push(x);
        }

        int pop(){
            if(st1.empty()==true && st2.empty() == true){
                cout<<"Queue is empty!"<<endl;
                return -1;
            }

            if(st2.empty()){
                while (!st1.empty()){
                    st2.push(st1.top());
                    st1.pop();
                }
            }

            int topval =st2.top();
            st2.pop();
            return topval;
        }

        bool empty(){
            if(st1.empty()==true && st2.empty()==true){
                return true;
            }
            return false;
        }
};


int32_t main(void){
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
        

    return 0;
}

/**
 * Sample Output 
 * 
 *  1
    2
    3
    4
    5
    Queue is empty!
    -1
 * 
 * 
 * */ 