/*
 ----------------------- Day 34 ----------------------
 ----- Queue using Array    ----------
 --- Date: 11.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define n 20

class Queue{

    int* arr;
    int front; 
    int back;

    public:
        Queue(){
            arr = new int[n];
            front =-1;
            back =-1;
        }

        void push(int x){
            if(back == n-1){
                cout<<"Queue overflow"<<endl;
                return;
            }
            back++;
            arr[back]=x;

            if(front==-1){
                front++;
            }

        }

        void pop(){
            if(front==-1 || front>back){
                cout<<"Queue is empty"<<endl;
                return;
            }

            front++;
        }

        int peek(){
                        if(front==-1 || front>back){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            return arr[front];
        }

        bool empty(){
            if(front==-1 || front>back){
                return true;
            }
            else{
                return false;
            }

        }

};



int main(void){

    Queue q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(6);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;

    return 0;
}

/**
 * Sample Output 
 * 
 *  1
    2
    4
    5
    6
    Queue is empty
    -1
 * 
 * */ 