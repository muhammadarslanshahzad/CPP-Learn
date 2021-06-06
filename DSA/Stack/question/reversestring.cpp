/*
 ----------------------- Day 29 ----------------------
 ----- Reverse a Strings     ----------
 --- Date: 06.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

void insertBottom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
  
    int topelement=st.top();
    st.pop();
    insertBottom(st,ele);
    st.push(topelement);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return ;
    }
    int element= st.top();
    st.pop();
    reverse(st);
    insertBottom(st, element);
}


int main(void){

    stack<int> st;
    st.push(1);
    st.push(11);
    st.push(100);
    st.push(190);

    reverse(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
    return 0;
}

/**
 * Sample Output:
 *  
 *  1 11 100 190 
 *  
 * 
 * 
 * */ 