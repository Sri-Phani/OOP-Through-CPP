#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int val)
		{
			data=val;
			next=NULL;
		}
};
template <typename T>
class LinkedList{
	public:
		Node *head,*temp;
		void addat_front(T val)
		{
			Node *NN=new Node(val);
			if(head==NULL)
			{
				head=NN;
			}
			else
			{
				NN->next=head;   // adding at front
				head=NN;
			}
		}
		void addat_end(T val)
		{
			Node *NN=new Node(val);
			if(head==NULL)
			{
				head=NN;
			}
			else
			{
				temp=head;
				while(temp->next)
				{
					temp=temp->next;
				}
				temp->next=NN;     // adding newnode at end
			}
			
		}
		void display()
		{
			temp=head;
			if(temp==NULL)
			{
				cout<<"No Nodes"<<endl;
			}
			else
			{
				while(temp)
				{
					cout<<temp->data<<" ";
					temp=temp->next;
				}
				cout<<endl;
			}
		}
};
int main()
{
	LinkedList<int> L;
	int ch;
	while(1)
	{
		cout<<"1.Add at Front  2.Add at End  3.Display  4.Exit\n"<<endl;
		cin>>ch;
		if(ch==1)
		{
			int val;
			cin>>val;
			L.addat_front(val);
		}
		else if(ch==2)
		{
			int val;
			cin>>val;
			L.addat_end(val);
		}
		else if(ch==3)
		{
			L.display();
		}
		else
		{
			break;
		}
	}
}