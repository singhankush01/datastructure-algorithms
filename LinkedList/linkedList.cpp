#include<iostream>
#include<vector>
using namespace std;

class node{
  public:
    int data;
    node* next;
    node(int d)
    {
      data =d;
      next= NULL;
    }
};
void print(node *head)
{
  while(head!=NULL)
  {
    cout<<head->data<<"-->";
    head = head->next;
  }
  cout<<endl;
}
void insertAtEnd(node* &head, node* &tail, int d)
{
  node *n = new node(d);
  if(head == NULL)
  {
    head = tail = n;
  }
  else{
    tail->next = n;
    tail = n;
  }
}

int lengthLL(node *head)
{
  int count=0;
  while (head!=NULL)
  {
    head = head->next;
    count++;
  }
  return count;
  
}

node* mid(node *head)
{
  if(head==NULL || head->next==NULL)
  {
    return head;
  }

  int count;
  node* slow = head;
  node *fast = head->next;
  while(fast!=NULL and fast->next!=NULL){
    fast=fast->next->next;
    slow = slow->next;
  }
  return slow;
}
void insertAtFront(node* &head,node* &tail,int d)
{
  node *n = new node(d);
  if(head == NULL)
  {
    head = tail = n;
  }
  else{
    n->next = head;
    head = n;
  }
}
void insertAtMid(node* &head, node*&tail, int d)
{
  int mid = lengthLL(head)/2;
  int count =1;
  while(count<mid)
  {
    head = head->next;
    count++;
  }
  
}
void deletionAtEnd(node* &head,node* &tail)
{
  if(tail==NULL)
  {
    cout<<"Nothing to delete"<<endl;
  }
  else if(head->next==NULL)
  {
    delete head;
    head=tail= NULL;
  }
  else{
    node* temp = head;
    while(temp->next!=tail){
      temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next =NULL;
  }
}
void deleteAtMid(node* &head,node* &tail, int pos)
{
  if(pos== 0)
  {
    deleteAtFront(head,tail);
  }
  else if(pos == lengthLL(head)-1)
  {
    deletionAtEnd(head,tail);
  }
  else if(pos>= lengthLL(head))
  {
    cout<<"Index out of Bound!"<<endl;
  }
  else{
    node *temp = head;
    int count=1;
    while (count < pos)
    {
      temp= temp->next;
      count++;
    }
    node* t1 = temp->next;
    temp->next = t1->next;
    delete t1;
    
  }
}

void deleteAtFront(node* &head,node* tail)
{
  if(head==NULL)
  {
    cout<<"No element to delete"<<endl;
    return;
  }
  else if(head->next==NULL)
  {
    delete head;
    head = tail = NULL;
  }
  else{
    node* temp = head;
    head = head->next;
    delete temp;

  }
}
void search(node* head,int key)
{
  while (head!=NULL)
  {
    if(head->data == key)
    {
      cout<<"Found!"<<endl;
      break;
    }
    head = head->next;
  }
  if(head==NULL)
    cout<<"Not Found!"<<endl;
  
}

void reverseLL(node* head,node* tail)
{
  node* c = head, *prev = NULL, *n;
	while (c != NULL) {
		n = c->next;
		c->next = prev;
		prev = c;
		c = n;
	}
	head = prev;
}

int main()
{
  node* head, *tail;
  head = tail = NULL;
  deleteAtFront(head,tail);
  insertAtFront(head,tail,5);
  insertAtFront(head,tail,4);
  insertAtFront(head,tail,3);
  insertAtFront(head,tail,2);  
  deleteAtFront(head,tail);
  insertAtEnd(head,tail,6);
  insertAtEnd(head,tail,7);
  print(head);
  cout<<lengthLL(head);
  //search(head,1);
  return 0;
}
