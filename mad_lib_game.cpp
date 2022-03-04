#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string color, pluralNoun, celebrity;
	cout << "enter a color: ";
	getline(cin, color);

	cout << "enter pluralNoun: ";
	getline(cin, pluralNoun);

	cout << "enter a celebrity: ";
	getline(cin, celebrity);

	cout << "rose are " << color << '\n';
	cout << pluralNoun << " are blue" << '\n';
	cout << "I love "<< celebrity << '\n';

	return 0;
}