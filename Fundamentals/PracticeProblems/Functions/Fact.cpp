/*
 ----------------------- Day 4 ----------------------
 -----  Dactorial Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;
using ll =long long int;

void fact(int n ){
  ll factorial=1;
  for(int i=2; i<=n; i++){
      factorial *= i;
  }
  cout<<factorial<<endl;
}

int main(void){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    fact(n);
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter number : 5
 *  120
 * 
 *  Enter number : 7    
 *  5040
 * 
*/