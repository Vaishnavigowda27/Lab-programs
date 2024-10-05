/*Write a c++ pgm to create a class called LIST (Linked List) with member functions to insert an element at the 
front as well as delete an element from the list. Demonstrate all the functions after creating a list object */

#include<iostream>
using namespace std;
struct list {
  int info;
  struct list* next;
};
typedef struct list NODE;
class linkedlist {
  NODE *head;
  public:
         linkedlist(void) 
         {
          head=NULL;
         }
         void insertnode(int);
         void delnode();
         void display();
};
void linkedlist::insertnode(int ele) {
                  NODE *newnode= new NODE;
                  newnode->info=ele;
                  newnode->next=head;
                  head=newnode;
                }

void linkedlist::delnode() {
                 NODE *temp=head;
                 if(head==NULL)
                 cout<<"The list is Empty!";
                 else {
                  cout<<"the element deleted is:"<<head->info;
                  head=head->next;
                  delete temp;
                  cout<<"deletion successful";
                 }
              }

void linkedlist::display() {
                 NODE *temp=head;
                 if(head==NULL)
                 cout<<"The list is Empty!";
                 else {
                  cout<<"the element in the linked list are:";
                  while(temp!=NULL){
                  cout<<temp->info<<" ";
                  temp=temp->next;
                  }
                 }
               }
           int main(){
              int ele,choice;
              do{
              linkedlist obj;
                cout<<"MENU:";
                cout<<"\t1.INSERTION\n\t2.DELETION\n\t3.DISPLAY\n\t4.EXIT\n";
                cout<<"Enter your choice";
                cin>>choice;
                switch(choice){
                  case 1:cout<<"Enter the element to be inserted";
                  cin>>ele;
                  obj.insertnode(ele);
                  break;
                  case 2:obj.delnode();
                  break;
                  case 3:obj.display();
                  break;
                  case 4:cout<<"Thank you!";
                  break;
                  default:cout<<"Invalid choice";
                }
           }
           while(choice!=4);
           }