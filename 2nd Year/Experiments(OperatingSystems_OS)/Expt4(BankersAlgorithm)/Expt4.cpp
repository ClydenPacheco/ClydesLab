//Banker's Algorithm program
#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	cout << "Enter the number of processes: ";
	int n;
	cin >> n;
	cout << "Enter the allocation:\n";
	int a[20], b[20], c[20];
	cout << "P A B C\n";
	for (int i = 1;i <= n;i++) {
		cout << i << " ";
		cin >> a[i] >> b[i] >> c[i];
	}
	int check[20] = { 0 };
	cout << "Enter max resources:\n";
	int na[20], nb[20], nc[20];
	cout << "P A B C\n";
	for (int i = 1;i <= n;i++) {
		cout << i << " ";
		cin >> na[i] >> nb[i] >> nc[i];
	}
	cout << "Enter the available resoueces:\n";
	int coma, comb, comc;
	cout << "A B C\n";
	cin >> coma >> comb >> comc;
	cout << "The need matrix is:\n";
	int needa[20], needb[20], needc[20];
	cout << "P  A  B  C\n";
	for (int i = 1;i <= n;i++) {
		cout << i << " ";
		needa[i] = na[i] - a[i];
		needb[i] = nb[i] - b[i];
		needc[i] = nc[i] - c[i];
		printf("%2d %2d %2d\n", needa[i], needb[i], needc[i]);
	}
	cout << "The safe sequence is:\n";
	z: for (int i = 1;i <= n;i++) {
		if (coma >= needa[i] && comb > needb[i] && comc >= needc[i] && check[i] != -1) {
			cout << "P[" << i << "]\n";
			check[i] = -1;
			coma += a[i];
			comb += b[i];
			comc += c[i];
		}
	}
	for (int i = 1;i <= n;i++) {
		if (check[i] != -1)
			goto z;
	}
	_getch();
	return 0;
	system("pause");
	return 0;
}
