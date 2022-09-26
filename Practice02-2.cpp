#include <iostream>

int main()
{
	using namespace std;
	double w;
	double h;
	double t;

	cout << "Please input your weight:(kg)";
	cin >> w;

	cout << "Please input your height:(m)";
	cin >> h;

	t = w / (h * h);
	cout << "Your \"tizhishu\" is " << t << "\n";

	if (t < 18)
	{
		cout << "You are low weight.";
	}
	else if (t < 25)
	{
		cout << "Your are normal weight.";
	}
	else if (t < 27)
	{
		cout << "You are high weight.";
	}
	else
	{
		cout << "You are fat.";
	}
}