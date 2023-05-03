#include<iostream>
#include<string>
using namespace std;
class cv
{
private:
	char a[30];
	int c,s;
public:
	void fcv();
};
void cv::fcv()
{
	c =s= 0;
	cout << "Enter the string:\n";
	cin.getline(a, 30);
	for (int i = 0; a[i] != '\0'; ++i)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
			c++;
	}
	cout << c;

}
int main()
{
	cv a;
	a.fcv();
	return 0;
}