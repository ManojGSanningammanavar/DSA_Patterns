#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int val;
    node* next;
    node(int data){
        val = data;
        next = NULL;
    }
};

bool detectCycle(node* head){
    node* slow = head;
    node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) return true;
        
    }
    return false;
}

int main(){
    node* head = new node(20);
    node* one = new node(40);
    node* two = new node(2);
    node* three = new node(50);
    node* four = new node(29);
    node* five = new node(16);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = two;
    //five->next = NULL;
    bool m = detectCycle(head);
    cout<<m;
}

