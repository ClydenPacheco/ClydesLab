#include<iostream>
using namespace std;
class TEXT
{
private:
	char LINE[80];
	int c, v, s;
public:
	TEXT();
};
TEXT::TEXT()
{
	c = v = s = 0;
	cout << "Enter a sentence:\n";
	cin.getline(LINE, 80);
	for (int i = 0; LINE[i] != '\0'; i++)
	{
		if (LINE[i] == 'a' || LINE[i] == 'e' || LINE[i] == 'i' || LINE[i] == 'o' || LINE[i] == 'u' || LINE[i] == 'A' || LINE[i] == 'E' || LINE[i] == 'I' || LINE[i] == 'O' || LINE[i] == 'U')
			v++;
		else if (LINE[i] == ' ')
			s++;
		else
			c++;
	}
	cout << "The number of consonants are:" << c << endl;
}
int main()
{
	TEXT a;
	return 0;
}