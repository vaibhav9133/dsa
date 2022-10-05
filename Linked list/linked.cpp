#include <iostream>
using namespace std;
#include "Node.cpp"
   void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> Next;
	}
    Node*takeInput(){
            int data;
            cin>>data;
            while(data!=1){
                Node*newNode= new Node(data);
                if(head==NULL)
                {
                    head=newNode;
                }
                else{
                    Node *temp=head;
                    while(temp->Next !=NULL)
                    {
                        temp=temp->Next;
                    }
                    temp->next = newNode;
                }
                cin>>data;
            }

    }
}
    }

int main ()
{
    Node n1(10);
    Node*head=&n1;
    Node n2(20);
    n1.Next=&n2;
    print(&n1);
return 0;
}