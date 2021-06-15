/*
 ----------------------- Day 38 ----------------------
 ----- Binary Trees     ----------
 --- Date: 15.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};



int main(void){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left = new Node(4);
    root->right = new Node(5);

    return 0;
}

/**
 * Sample Output 
 * 
 *       1
 *      / \
 *     2  3
 *    / \
 *   4   5 
 * */ 