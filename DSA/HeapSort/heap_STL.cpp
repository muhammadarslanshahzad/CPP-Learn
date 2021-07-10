 /*
 ----------------------- Day 63 ----------------------
 ----- Heap Sort in STL      ----------
 --- Date: 09.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;


int main(void){

    priority_queue<int, vector<int>> pq;

    pq.push(2);
    pq.push(3);
    pq.push(1);

    cout<<"its max heap top element:"<<pq.top()<<endl;
    pq.pop();
    cout<<"its max heap top element:"<<pq.top()<<endl;

    priority_queue<int, vector<int>, greater<int>> pqm;
    
    pqm.push(2);
    pqm.push(3);
    pqm.push(1);

    cout<<"its min heap top element:"<<pqm.top()<<endl;
    pqm.pop();
    cout<<"its min heap top element:"<<pqm.top()<<endl;
    

 
    return 0;
}

/**
 * Sample Output 
 * 
 *  its max heap top element:3
 *  its max heap top element:2
 *  its max heap top element:1
 *  its max heap top element:2
 * 
 * */ 