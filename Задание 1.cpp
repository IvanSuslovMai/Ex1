#include <iostream>
//������� 2
using namespace std;

unsigned int var(unsigned char c, unsigned int a)
{
	return ((c-0) % a + 1);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned char c;
	cout << "������� ������ ����� ������ �����: ";
	cin >> c;
	cout << "������� ���������� ���������: ";
	unsigned int a;
	cin >> a;
	cout << "��� �������: " << var(c, a);
	return 0;
}
