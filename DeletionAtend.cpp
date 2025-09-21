#include <iostream>
using namespace std;

 struct Node{
    int data;
	Node* Next;
	Node* Prev;
		
 }; 
     
     //Insertion at end
 void InsertAtEnd(Node* &head ,int value){
 	Node* newnode= new Node();
 	newnode->data=value;
 	newnode->Next=NULL;
    newnode->Prev=NULL; 	
 	
 
 if (head==NULL){
 	head=newnode;
 	return;
 	
 }
 
 Node* temp=head;
 while(temp->Next!=NULL)
 {
 	temp=temp->Next;
 	
 }
 
 temp->Next=newnode;
 newnode->Prev=temp;

}

void deleteAtEnd(Node* head) 
{
 if (head == NULL)
 {
cout << "List is empty. No node to delete." << endl;
return;
 }
 if (head->Next==NULL) 
{
            delete head;
            head = NULL;
            return;
}
Node* temp = head;
while (temp->Next != NULL) 
{
 temp = temp->Next;
}
temp->Prev->Next = NULL;
 delete temp;
 }


  //display list
 void display(Node*head){
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->Next;
		
	}
	
	cout<<endl;
}

  //main function
  
	int main(){
		
		Node* head=NULL;
		
		InsertAtEnd(head,10);
		InsertAtEnd(head,20);
		InsertAtEnd(head,30);
		InsertAtEnd(head,40);
		
		display(head);
		
	deleteAtEnd(head);
	
	cout<<"After deletion"<<endl;
	display(head);
		
		return 0;
		
	}
	
	
	
	




