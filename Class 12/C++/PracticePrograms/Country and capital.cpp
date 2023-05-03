#include<iostream>
#include<fstream>
using namespace std;
class co
{
private:
	int n;
	char co[30], cp[30];
public:
	void create();
};
void co::create()
{
	char s1[30], s2[30];
	cout << "How many entries do you want to enter?\n";
	cin >> n;
	ofstream op1,op2;
	op1.open("country.txt");
	op2.open("capital.txt");
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the name of the country:\n";
		cin >> co;
		op1 << co << endl;
		cout << "Enter the name of the its capital:\n";
		cin >> cp;
		op2 << cp << endl;
	}
	op1.close();
	op2.close();
	ifstream ip1, ip2;
	ip1.open("country.txt");
	ip2.open("capital.txt");
	cout << "Country" << "\t\t" << "Capital" << "\n";
	while (ip1)
	{
		ip1.getline(s1, 30);
		cout << s1<<"\t\t";
		ip2.getline(s2, 30);
		cout << s2<<"\n";
	}
}
int main()
{
	co a;
	a.create();
	return 0;
}
