#include<iostream>
using namespace std;
class employee
{
private:
	struct node
	{
		int emp_code;
		char empname[20];
		float basicc_pay;
		float allowance;
		node* link;
	}*p;
	float total;
	int i;
public:
	void create();
	void display();
	employee();
};
employee::employee()
{
	p = NULL;
}
void employee::create()
{
	node* temp;
	temp = new node;
	temp = p;
	cout << "Enter employee code:\t";
	cin >> temp->emp_code;
	cout << "Enter employee name:\t";
	cin >> temp->empname;
	cout << "Enter basic pay:\t";
	cin >> temp->basicc_pay;
	cout << "Enter allowence:\n";
	cin >> temp->allowance;
	if (p == NULL)
	{
		p = temp;
		temp->link = NULL;
		p->link = NULL;
	}
	else
	{
		temp->link = p;
		p = temp;
	}
}
void employee::display()
{
	node* temp;
	temp = p;
	if (p == NULL)
	{
		cout << "No entries have been entered as yet!\n";
	}
	else
	{
		i = 1;
		cout << "Sr.No\tEmp Code\tEmp Name\tBasic Pay\tAllowence\tTotal\n";
		while (temp != NULL)
		{
			cout << i << "\t";
			cout << temp->emp_code << "\t";
			cout << temp->empname << "\t";
			cout << temp->basicc_pay << "\t";
			cout << temp->allowance << "\t";
			total = temp->basicc_pay + temp->allowance;
			cout << total << "\n";
			i++;
			temp = temp->link;
		}
	}
}
int main()
{
	int s;
	employee a;
	do
	{
		cout << "Choose one of the following options:\n1.Enter entry\n2.Display entries\n3.Exit\n";
		cin >> s;
		switch (s)
		{
		case 1:
		{
			a.create();
			break;
		}
		case 2:
		{
			a.display();
			break;
		}
		case 3:
			break;
		default:
			break;
		}
	} while (s != 3);
	return 0;
}