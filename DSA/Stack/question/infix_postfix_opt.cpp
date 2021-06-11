/*
 ----------------------- Day 33 ----------------------
 ----- Infix and Postfix Operations    ----------
 --- Date: 10.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class twoStack{
    int* arr;
    int size;
    int top1, top2;

    public:
        twoStack(int n){
            size=n;
            arr= new int[n];
            top1= n/2+1;
            top2=n/2;
        }

        void push1(int x){
            if(top1>0){
                top1--;
                arr[top1]=x;
            }
            else{
                cout<<"Stack Overflow!\n By element : "<< x <<endl;
            }
        }

        void push2(int x){
            if(top2<size-1){
                top2++;
                arr[top2] = x;
            }
            else{
                cout<<"Stack Overflow!\n By element : "<< x <<endl;
            }
        }

        int pop1(){
            if(top1 <= size/2){
                int x = arr[top1];
                top1++;
                return x;
            }
            else{
                cout<<"Stack Underflow"<<endl;
                exit(1);
            }
        }
        
        int pop2(){
            if(top2 >= size/2+1){
                int x = arr[top2];
                top2--;
                return x;
            }
            else{
                cout<<"Stack Underflow"<<endl;
                exit(1);
            }
        }
};



int main(void){

    twoStack st(5);

    st.push1(12);
    st.push2(10);
    st.push2(12);
    st.push1(7);
    st.push2(15);

    cout<<"Popped element from stack 1 is : "<<st.pop1()<<endl;
    cout<<"Popped element from stack 2 is : "<<st.pop2()<<endl;

    return 0;
}

/**
 * Sample Output 
 * 
 *   By element : 15
 *   Popped element from stack 1 is : 7
 *   Popped element from stack 2 is : 12
 * 
 * */ 