#include<bits/stdc++.h>
using namespace std;
class listnode{
	public:
		int val;
		listnode* next;
		
		listnode(int x){
			val = x;
			next = NULL;
		}	
};
listnode* FindMid(listnode* head){
	listnode* slow= head;
	listnode* fast = head;
	while(fast != NULL && fast->next != NULL){
		slow =slow->next;
		fast = fast->next->next;
	}
	return slow;
}

int main(){
	listnode* head =new listnode(20) ;
	listnode* first = new listnode(30);
	listnode* second = new listnode(80);
	listnode* third = new listnode(90);
	listnode* fourth = new listnode(10);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    
	listnode* m = FindMid(head);
	cout<<m->val;
	return 0;
}