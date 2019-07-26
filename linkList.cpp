#include<iostream>
using namespace std;

struct node{
   int data ;
   struct node* link;
};

 struct node* head =NULL;

struct node* createNewNode(int value){
      struct node *p =(struct node*)malloc(sizeof(struct node));
      p->link =NULL;
      p->data =value;
     return p;
}

void insert(int value){
 struct node* newNode = createNewNode(value);
 if(head == NULL){
  head = newNode;
  return;
 }
 newNode -> link = head;
 head = newNode;
 cout <<"Data inserted" << endl;
}

void printData(){
  struct node* ptr =head;
  while(ptr->link){
    cout << ptr -> data << "   ";
    ptr = ptr -> link;
  }
}

int main(){
 insert(10);
 insert(20);
 insert(30);
 insert(40);
 printData();
return 0;
}
