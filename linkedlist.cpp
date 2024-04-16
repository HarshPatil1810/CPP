#include<iostream>
using namespace std;
class Node
{   public:
	int data;
    Node* ptr;
};
class list
{
	private:Node* head;
	public:List()
	{
		head=NULL;
	
	}
	void insert(int d)
	{
		Node*newNode=new Node;
		newNode->data=d;
		newNode->ptr=head;
		head=newNode;
	}
	void delet(int a)
	{
		Node* previous=NULL;
		Node* current=head;
		if(current->data=a)
		{
			previous=current;
			current=current->a;
		}
	} 
	void search(int f)
	{ 
	Node* c=head;
	int i=1;
	while(c->data!=f)
	{
		i++;
		c=c->ptr;
	}
	if(c==NULL)
	{
		cout<<"element  not found";
	}
	else
	{
		cout<<"element is found at"<<i<<" state";
	
	}
    
   }
		
	
	void display()
	{
		Node* current=head;
		while(current!=NULL)
		{
			cout<<current->data<<endl;
			current=current->ptr;
			
		}
	}
};
int main()
{
	list l;

	l.insert(4);
	l.insert(8);
		l.insert(57);
			l.insert(9);
				l.insert(5);
					l.insert(9);
//	l.delet(8);
	l.search(4);
	l.display();
	return 0;
}
	
