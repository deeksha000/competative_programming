#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
#include<queue>
int max=0;
priority_queue<int>pq;
    int height(Node* root) {
        // Write your code here.
        Node* next_l = root;
        Node* prev = next_l;
        while(next_l)
        {
            prev = next_l;
            next_l=root->left;
            max+=1;
        }
        pq.push(max);
        if(!next_l)
            max-=1;
        Node* next_r = prev->right;
            if(next_r){
                max+=1;
                height(next_r);
            }      
    return pq.top();    
    }
    
 //End of Solution
};
int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
  	std::cout << height;

    return 0;
}

