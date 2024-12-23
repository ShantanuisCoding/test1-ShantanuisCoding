#include <iostream>
#include <vector>
using namespace std;

class Tree {
public:
    int a;
    Tree* left;
    Tree* right;
    
    Tree(int x) {
        a = x;
        left = nullptr;
        right = nullptr;
    }
};

class search{
    public:
    Tree* sorte(vector<int>& num, int start, int end){
        if (start > end) {
            return NULL;
        }
        int mid = start + (end - start) / 2;
        Tree* node = new Tree(num[mid]);
        node->left = sorte(num, start, mid - 1);
        node->right = sorte(num, mid + 1, end);
        return node;
    }

    void order(Tree* node){
        if (node == NULL){
            return;
        }
        cout<<node->a<<" ";
        order(node->left);
        order(node->right);
    }
};

int main(){
    int n;
    cout << "Enter the number of ELement: ";
    cin >> n;
    vector<int> num(n);
    cout<<"Enter the elements in sorted order: ";
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    search s;
    Tree* root = s.sorte(num, 0 , n-1);
    cout<<"PreOrder Traversal of constructed BST: ";
    s.order(root);
    return 0;
}
