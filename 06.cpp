#include<iostream>
using namespace std;
class CompleteBinaryTree{
public:
    int arr[100];
    int count;
    CompleteBinaryTree(){
        count=0;
    }
    void insert(int value){
        arr[count]=value;
        count++;
    }
    void preorder(int index){
        if(index>=count)
            return;
        cout<<arr[index]<<" ";
        preorder(2*index+1);
        preorder(2*index+2);
    }
    void inorder(int index){
        if(index>=count)
            return;
        inorder(2*index+1);
        cout<<arr[index]<<" ";
        inorder(2*index+2);
    }
    void postorder(int index){
        if(index>=count)
            return;
        postorder(2*index+1);
        postorder(2*index+2);
        cout<<arr[index]<<" ";
    }
};
int main(){
    CompleteBinaryTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert(60);
    cout<<"Preorder: ";
    tree.preorder(0);
    cout<<"\nInorder: ";
    tree.inorder(0);
    cout<<"\nPostorder: ";
    tree.postorder(0);
    return 0;
}