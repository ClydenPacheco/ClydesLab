/*Define a class NUMBER_LIST  
having the following specifications : Private data member : num_list - an array of integers capable of storing maximum 10 numbers.
Public member functions : 
read_list() - to read N(N <= 10) numbers in the  array num_list.calc_product() - to compute the product of the numbers in the  array and display the numbers and their product. */
#include<iostream>
using namespace std;
class NUMBER_LIST
{
private:
	int num_list[10];
public:
	int N;
	void read_list();
	void calc_product();
};
void NUMBER_LIST::read_list()
{
	cout << "How many numbers do you want to multiply?\n";
	cin >> N;
	cout << "Enter the numbers into the array:\n";
	for (int i = 0; i < N;i++)
	{
		cin >> num_list[i];
	}
}
void NUMBER_LIST::calc_product()
{
	int p = 1;
	for (int i = 0; i < N; i++)
	{
		p = p * num_list[i];
	}
	cout << "The product is:" << p << "\n";
}
int main()
{
	NUMBER_LIST a;
	a.read_list();
	a.calc_product();
	return 0;
}
