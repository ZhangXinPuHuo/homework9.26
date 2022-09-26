#include <iostream>

int main()
{
	using namespace std;

	double data1;
	double data2;
	double ret;

	char op;
	char again;

	do
	{
		cout << "Please input the expression:(such as 1+1)\n";
		cin >> data1
			>> op
			>> data2;
		switch (op)
		{
		case'+':
			ret = data1 + data2;
			cout << ret;
			cout << "\nDo you want again?(Y/N)\n";
			cin >> again;
			break;

		case'-':
			ret = data1 - data2;
			cout << ret;
			cout << "\nDo you want again?(Y/N)\n";
			cin >> again;
			break;

		case'*':
			ret = data1 * data2;
			cout << ret;
			cout << "\nDo you want again?(Y/N)\n";
			cin >> again;
			break;

		case'/':
			if (data2 <= 1e-7)
			{
				cout << "Division by zero!";
			}
			else
			{
				ret = data1 / data2;
				cout << ret;
			};
			cout << "\nDo you want again?(Y/N)\n";
			cin >> again;
			break;

		default:
			cout << "Your op is wrong!";
			cout << "\nDo you want again?(Y/N)\n";
			cin >> again;
			break;
		}

	} while (again == 'Y' ||again == 'y');
}