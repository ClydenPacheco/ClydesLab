#include<iostream>
using namespace std;
unsigned int i = 0;
struct node
{
	int data;
	struct node *link;
};
node *head = NULL;
void insatbeg(int n)
{
	if (head == NULL)
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data = n;
		cout<<temp->data<<" has been added to the linked list\n";
		temp->link = NULL;
		head = temp;
		i++;
	}
	else
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data = n;
		cout<<temp->data<<" has been added to the linked list\n";
		temp->link = head;
		head = temp;
		i++;
	}
}
void insatloc(int n, int loc)
{
	if (head == NULL)
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data = n;
		cout<<temp->data<<" has been added to the linked list\n";
		temp->link = NULL;
		head = temp;
		i++;
	}
	else
	{
		if (loc > i)
		{
			node *p;
			p = head;
			while (p->link != NULL)
			{
				p = p->link;
			}
			struct node *temp = (struct node*)malloc(sizeof(struct node));
			temp->data = n;
			cout<<temp->data<<" has been added to the linked list\n";
			temp->link = NULL;
			p->link = temp;
			i++;
		}
		else if (loc <= 1)
		{
			struct node *temp = (struct node*)malloc(sizeof(struct node));
			temp->data = n;
			cout<<temp->data<<" has been added to the linked list\n";
			temp->link = head;
			head = temp;
			i++;
		}
		else
		{
			int j = 1;
			node *p;
			p = head;
			while (j < loc-1)
			{
				p = p->link;
				j++;
			}
			struct node *temp = (struct node*)malloc(sizeof(struct node));
			temp->data = n;
			cout<<temp->data<<" has been added to the linked list\n";
			temp->link = p->link;
			p->link = temp;
		}
	}
}
void insatend(int n)
{
	if (head == NULL)
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data = n;
		cout<<temp->data<<" has been added to the linked list\n";
		temp->link = NULL;
		head = temp;
		i++;
	}
	else
	{
		node *p;
		p = head;
		while (p->link != NULL)
		{
			p = p->link;
		}
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data = n;
		cout<<temp->data<<" has been added to the linked list\n";
		temp->link = NULL;
		p->link = temp;
		i++;
	}
}
void delfrombeg()
{
	if (head == NULL)
		cout << "The linked list is empty!\n";
	else
	{
		struct node *temp=head;
		cout << head->data << " has been deleted\n";
		head = head->link;
		free(temp);
		i--;
	}
}
void delfromloc(int loc)
{
	if (head == NULL)
		cout << "The linked list is empty!\n";
	else
	{
		if (loc <= 1)
		{
			struct node *temp = head;
			cout << head->data << " has been deleted\n";
			head = head->link;
			free(temp);
			i--;
		}
		else if (loc >= i)
		{
			if (head->link == NULL)
			{
				struct node *temp = head;
				cout << head->data << " has benn deleted\n";
				head = NULL;
				free(temp);
				i--;
			}
			else
			{
				struct node *p;
				p = head;
				while (p->link->link != NULL)
				{
					p = p->link;
				}
				node *temp = p->link;
				cout << temp->data << " has been deleted\n";
				p->link = NULL;
				free(temp);
				i--;
			}
		}
		else
		{
			struct node *p = head;
			int j = 1;
			while (j < loc - 1)
			{
				p = p->link;
				j++;
			}
			struct node *temp = p->link;
			cout << temp->data << " has been deleted\n";
			p->link = temp->link;
			free(temp);
		}
	}
}
void delfromend()
{
	if (head == NULL)
		cout << "The linked list is empty\n";
	else if (head->link == NULL)
	{
		struct node *temp = head;
		cout << head->data << " has benn deleted\n";
		head = NULL;
		free(temp);
		i--;
	}
	else
	{
		struct node *p;
		p = head;
		while (p->link->link != NULL)
		{
			p = p->link;
		}
		node *temp = p->link;
		cout << temp->data << " has been deleted\n";
		p->link = NULL;
		free(temp);
		i--;
	}
}
void delparticular(int n)
{
	if(head->link == NULL)
	{
		if(head->data == n)
		{
			cout << head->data << " has been deleted\n";
			head = NULL;
		}
		else
		{
			cout << "Element not found\n";
		}
	}
	else
	{
		if(head->data == n)
		{
			struct node *temp = head;
			cout << head->data << " has been deleted\n";
			head = head->link;
			free(temp);
		}
		else
		{
			struct node *temp = head;
			while(temp->data != n)
			{
				temp = temp->link;
				if(temp == NULL)
				{
					break;
				}
			}
			if(temp == NULL)
			{
				cout << "Elmement does not exist!\n";
			}
			else
			{
				struct node *p = head;
				while(p->link!=temp)
                {
                    p=p->link;
                }
		        cout << temp->data << " has been deleted\n";
		        p->link = temp->link;
		        free(temp);
			}
		}
	}
}
void disp()
{
	if(head == NULL)
	    cout<<"The linked list is empty!\n";
	else
	{
		node *p = head;
	    cout << "The elements in the linked list are:\n";
	    while (p)
	    {
		    cout << p->data << endl;
		    p = p->link;
	    }
	}
}
int main()
{
	int ch, ch1, ch2, n, loc;
	do
	{
		cout << "\n         *****Main Menu*****\n\n";
	    cout << "Select one of the available options:\n";
		cout << "1. To insert an element\n";
		cout << "2. To delete an element\n";
		cout << "3. To display the linked list\n";
		cout << "4. To exit\n";
		cout << "Choice: ";
		cin >> ch;
		switch (ch)
		{
		    case 1:
		    {
			    cout<<"Insertion...\n";
			    cout << "1. To insert at beginning\n";
		        cout << "2. To insert at particular location\n";
		        cout << "3. To insert at end\n";
				cout << "4. Return to previous menu\n";
			    cout << "Choice: ";
			    cin>>ch1;
			    switch(ch1)
			    {
				    case 1:
		            {
			            cout<<"Enter the element: ";
			            cin >> n;
			            insatbeg(n);
			            break;
		            }
		            case 2:
		            {
			            cout << "Enter the element: ";
			            cin >> n;
			            cout << "Enter the location: ";
			            cin >> loc;
			            insatloc(n,loc);
			            break;
		            }
		            case 3:
		            {
			            cout << "Enter the element: ";
			            cin >> n;
			            insatend(n);
			            break;
		            }
					case 4:
					{
						cout<<"Returning to previous menu...\n";
						break;
					}
				    default:
				    {
					    cout << "Invalid input!\n";
			            break;
				    }
			    }
			    break;
		    }
		    case 2:
		    {
			    cout << "Deletion...\n";
			    cout << "1. To delete at beginning\n";
		        cout << "2. To delete at particular location\n";
		        cout << "3. To delete at end\n";
				cout << "4. To delete particular element\n";
				cout << "5. Return to previous menu\n";
			    cout << "Choice: ";
			    cin>>ch2;
			    switch(ch2)
			    {
				    case 1:
		            {
			            delfrombeg();
			            break;
		            }
		            case 2:
		            {
			            if(head == NULL)
			            {
				            cout<<"The linked list is empty!\n";
				            break;
			            }
			            cout<<"Enter the location of the element you wish to delete: ";
			            cin>>loc;
		                delfromloc(loc);
			            break;
		            }
		            case 3:
		            {
			            delfromend();
			            break;
		            }
					case 4:
					{
						if(head == NULL)
						{
							cout<<"The linked list is empty!\n";
				            break;
						}
						cout << "Enter the element you wish to delete: ";
						cin >> n;
						delparticular(n);
						break;
					}
					case 5:
					{
						cout << "Returning to previous menu...\n";
						break;
					}
				    default:
				    {
					    cout << "Invalid input!\n";
			            break;
				    }
				    break;
			    }
				break;
		    }
		    case 3:
		    {
			    cout << "Displaying...\n ";
			    disp();
			    break;
		    }
		    case 4:
		    {
			    cout << "Exiting...\n";
			    break;
		    }
		    default:
		    {
			    cout << "Invalid input!\n";
			    break;
		    }
		}
	} while (ch != 8);
	return 0;
}