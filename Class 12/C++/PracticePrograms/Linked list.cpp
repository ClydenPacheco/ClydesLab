//using linklists
#include<iostream>
using namespace std;
class link_list
{
private:
	struct node
	{
		int data;
		node* link;
	}*p;
public:
	link_list();
	void addfirst(int);
	void addlast(int);
	void addloc(int, int);
	void del_ele(int);
	void display();
};
link_list::link_list()
{
	p = NULL;
}
void link_list::addfirst(int num)
{
	node* temp;
	temp = new node;
	temp->data = num;
	temp->link = p;
	p = temp;
}
void link_list::addlast(int num)
{
	node* temp, * r;
	if (p == NULL)
	{
		temp = new node;
		temp->data = num;
		temp->link = NULL;
	}
	else
	{
		temp = p;
		while (temp->link != NULL)
		{
			temp = temp->link;
		}
		r = new node;
		r->data = num;
		r->link = NULL;
		temp->link = r;
	}
}
void link_list::addloc(int loc, int num)
{
	node* temp, * r;
	temp = p;
	{
		for (int i = 0; i < loc; i++)
		{
			temp = temp->link;
			if (temp == NULL)
			{
				cout << "The list is empty!" << "\n";
				return;
			}
		}
		r = new node;
		r->data = num;
		r->link = temp->link;
		temp->link = r;
	}
}
void link_list::del_ele(int num)
{
	node* temp, * r, * old;
	temp = p;
	while (temp->link != NULL)
	{
		if (temp->data == num)
		{
			r = temp;
			old->link = temp->link;
			temp = temp->link;
			delete r;
			break;
		}
		else
		{
			cout << "Element not found" << "\n";
		}
		temp = temp->link;

	}
}
void link_list::display()
{
	node* temp;
	temp = p;
	cout << "\n";
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->link;
	}
}
int main()
{
	link_list xyz;
	int opt;
	do
	{

		cout << "Enter the number corresponiding to the followiong options:" << "\n";
		cout << "1. Enter data first" << "\n";
		cout << "2. Enter data last" << "\n";
		cout << "3. Enter in particular location" << "\n";
		cout << "4. Delete element" << "\n";
		cout << "5. Display" << "\n";
		cout << "6. Exit" << "\n";
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			int x, cc;
			cout << "How many values you wish to eneter" << "\n";
			cin >> x;
			cout << "Enter the values" << "\n";
			for (int i = 0; i < x; i++)
			{
				cin >> cc;
				xyz.addfirst(cc);
			}
			break;
		}
		case 2:
		{
			int y, ss;
			cout << "How many values you wish to eneter" << "\n";
			cin >> y;
			cout << "Enter the values" << "\n";
			for (int i = 0; i < y; i++)
			{
				cin >> ss;
				xyz.addlast(ss);
			}
			break;
		}
		case 3:
		{
			int z, w;
			cout << "Enter the location" << "\n";
			cin >> z;
			z = z - 2;
			cout << "Enter the number" << "\n";
			cin >> w;
			xyz.addloc(z, w);
			break;
		}
		case 4:
		{
			int de;
			cout << "Enter the element you wiah to delete" << "\n";
			cin >> de;
			xyz.del_ele(de);
			break;
		}
		case 5:
		{
			xyz.display();
			break;
		}
		case 6:
			break;
		default:
			break;
		}
	} while (opt != 6);
}