#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	cout<< "������� ����� ";
	cin >> n;
	n = n % 2 + 1;
	cout << "��� ������� " << n;
}
