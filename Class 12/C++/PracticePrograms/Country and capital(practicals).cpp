#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class FILES
{
private:
	void create();
	void show();
	unsigned short int n, s;
	char co[30], cp[30];
public:
	FILES();
};
FILES::FILES()
{
	do
	{
		cout << "choose one of the following options:\n1.Enter entres\n2.Display entries\n3.Exit\n";
		cin >> s;
		system("cls");
		switch (s)
		{
		case 1:
		{
			create();
			break;
		}
		case 2:
		{
			show();
			break;
		}
		case 3:
			break;
		default:
			break;
		}
	} while (s != 3);
}
void FILES::create()
{
	ofstream ofs1, ofs2;
	ofs1.open("country.txt");
	ofs2.open("Capital.txt");
	cout << "How many entries do you wish to enter?\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Now entering entry (" << i + 1 << ")\n";
		cout << "Enter the name of the country:\t";
		cin >> co;
		ofs1 << co << endl;
		cout << "Enter the name of its capital:\t";
		cin >> cp;
		ofs2 << cp << endl;
	}
	ofs1.close();
	ofs2.close();
}
void FILES::show()
{
	char c1[30], c2[30];
	ifstream ifs1, ifs2;
	ifs1.open("country.txt");
	ifs2.open("capital.txt");
	cout << "Country\t\tCapital\n";
	cout << "_______________________\n";
	while (ifs1)
	{
		ifs1.getline(c1, 30);
		cout << c1<<"\t\t";
		ifs2.getline(c2, 30);
		cout << c2<<"\n";
	}
	ifs1.close();
	ifs2.close();
}
int main()
{
	FILES a;
}