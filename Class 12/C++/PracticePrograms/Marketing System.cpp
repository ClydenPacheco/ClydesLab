#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class BILL
{
private:
	unsigned short int item_code;
	char item_name[30];
	float unit_price, total;
	unsigned short int quantity;
public:
	void get_data();
	void put_data();
};
void BILL::get_data()
{
	cout << "Enter the item code:\n";
	cin >> item_code;
	cout << "Enter the item name:\n";
	cin >> item_name;
	cout << "Enter the price per unit:\n";
	cin >> unit_price;
	cout << "Enter the quantity of the item:\n";
	cin >> quantity;
	total = unit_price * quantity;
}
void BILL::put_data()
{
	
	cout << item_code << "\t\t";
	cout << item_name << "\t\t";
	cout << unit_price << "\t\t";
	cout << quantity << "\t\t";
	cout << total << "\n";
}
int main()
{
	int s,n,i;
	BILL a;
	do
    {
		cout << "Choose one of the following options:\n1.Enter data.\n2.Show data.\n3.Exit\n";
		cin >> s;
		system("cls");
		switch (s)
		{
		case 1:
		{
			ofstream ofs("market.data", ios::binary);
			cout << "How manu entries do you wish to enter?\n";
			cin >> n;
			for (i = 0; i < n; i++)
			{
				cout << "\n\n\n";
				cout << "----------------------------------------------------------------------------\n";
				cout << "Entering data for item:" << i + 1<<endl;
				a.get_data();
				ofs.write((char*)&a, sizeof(a));
				cout << "----------------------------------------------------------------------------\n";
			}
			ofs.close();
			system("cls");
			continue;
		}
		case 2:
		{
			ifstream ifs("market.data", ios::binary);
			ifs.seekg(0, ios::beg);
			cout << "****************************************************************************\n";
			cout << "                             Market Database:\n";
			cout << "****************************************************************************\n";
			cout << "Item Code\tItem Name\tUnit Price\tQuantity\tTotal Price\n";
			cout << "----------------------------------------------------------------------------\n";
			while (ifs.read((char*)&a, sizeof(a)))
			{
				a.put_data();
			}
			ifs.close();
			cout << "----------------------------------------------------------------------------\n";
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