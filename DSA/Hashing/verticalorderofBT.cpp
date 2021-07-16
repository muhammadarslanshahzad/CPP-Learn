 /*
 ----------------------- Day 69 ----------------------
 ----- Vertical order of BT      ----------
 --- Date: 16.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a, i<b, i++)

struct Node{
    int data;
    Node* left;
    Node* right;
};
 
Node* newNode(int data){
    Node* node= new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void getVerticalOrder(Node* root, int n, map<int, vi> &m){
    if(root == NULL){
        return;
    }

    m[n].push_back(root->data);
    getVerticalOrder(root->left, n-1, m);
    getVerticalOrder(root->left, n+1, m);
}   

int main(void){

    Node* root = newNode(10);
    root->left = newNode(7);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
    root->right->right = newNode(6);

    map<int, vi> m;
    int n =0;

    getVerticalOrder(root, n, m);
 
    map<int, vi>:: iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        for(int i=0; i<(it->second).size(); i++ ){
            cout<<(it->second)[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/**
 * Sample Output 
 * 
 *  3 
    7 
    10 3 3 
    7 
    3 
 * 
 * */ 