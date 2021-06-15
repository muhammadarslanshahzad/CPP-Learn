/*
 ----------------------- Day 37 ----------------------
 ----- Finding max height in histrogram    ----------
 --- Date: 14.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int get_max_graph(vector<int> v){
    int size= v.size(), ans =0, i=0;
    stack<int> st;
    v.push_back(0);
    while (i<size)
    {
        while (!st.empty() && v[st.top()] > v[i])
        {
           int top= st.top();
           int height= v[top];
           st.pop();
           if(st.empty()){
               ans = max(ans, height*i);
           }
           else{
               int len = i-st.top()-1;
               ans= max(ans, height*len);
           }
        }
        st.push(i);
        i++;
    }
    
}


int main(void){

    vector<int> a ={ 2,1,5,6,2,3};
    cout<<get_max_graph(a);

    return 0;
}

/**
 * Sample Output 
 * 
 * 6422092
 * 
 * 
 * */ 