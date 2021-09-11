#include <iostream>
//¬ариант 2
using namespace std;

unsigned int var(unsigned char c, unsigned int a)
{
	return ((c-0) % a + 1);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned char c;
	cout << "¬ведите первую букву своего имени: ";
	cin >> c;
	cout << "¬ведите количество вариантов: ";
	unsigned int a;
	cin >> a;
	cout << "¬аш вариант: " << var(c, a);
	return 0;
}
