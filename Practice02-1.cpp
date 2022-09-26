#include <iostream>

int main() {
	using namespace std;
	char sex;
	char sports;
	char diet;
	double myHeight;
	double faHeight;
	double maHeight;

	cout << "Are you a boy(M) or a girl(F)?";
	cin >> sex;

	cout << "Please input your father`s height(cm):";
	cin >> faHeight;

	cout << "Please input your mather`s height(cm):";
	cin >> maHeight;

	cout << "Do you like sports?(Y/N)";
	cin >> sports;

	cout << "Do you have a good habit of diet?(Y/N)";
	cin >> diet;

	if (sex == 'M' || sex == 'm')
	{
		myHeight = (faHeight + maHeight) * 0.54;
	}
	else if (sex == 'F' || sex == 'f')
	{
		myHeight = (faHeight * 0.92 + maHeight) / 2;
	};
	if (sports == 'Y' || sports == 'y')
	{
		myHeight = myHeight * 1.02;
	};
	if (diet == 'Y' || diet == 'y')
	{
		myHeight = myHeight * 1.015;
	};
	cout << "Your future height is" << myHeight << "cm";
}