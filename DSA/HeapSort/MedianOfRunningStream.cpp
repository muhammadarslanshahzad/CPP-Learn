 /*
 ----------------------- Day 64 ----------------------
 ----- Heap Median of Stream      ----------
 --- Date: 11.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

priority_queue<int, vi, greater<int>>pqmin;
priority_queue<int, vi>pqmax;

void insert(int x){
    if(pqmin.size() == pqmin.size()){
        if(pqmax.size() ==0){
            pqmax.push(x);
            return;
        }

        if(x<pqmax.top()){
            pqmax.push(x);
        }else{
            pqmin.push(x);
        }
    }else{
        if(pqmax.size() > pqmin.size()){
            if(x >= pqmax.top()){
                pqmin.push(x);
            }else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }else{
            if(x <= pqmin.top()){
                pqmax.push(x);
            }else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double findMedian(){
    if(pqmin.size() == pqmax.size()){
        return (pqmin.top() + pqmax.top())/2.0;
    }else if( pqmax.size() > pqmin.size()){
        return pqmax.top();
    }else{
        return pqmin.top();
    }

}

int main(void){

    insert(10);
    cout<< findMedian() << endl;
    insert(15);
    cout<< findMedian() << endl;
    insert(21);
    cout<< findMedian() << endl;
    insert(30);
    cout<< findMedian() << endl;
    insert(18);
    cout<< findMedian() << endl;
    insert(19);
    cout<< findMedian() << endl;
    
    return 0;
}

/**
 * Sample Output 
 * 
 *  10
 *  12.5
 *  15
 *  15
 *  15
 *  15
 * 
 * 
 * */ 