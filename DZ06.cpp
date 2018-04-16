#include<stack>
#include<iostream>
#include<sstream>
#include<string>
#include<Windows.h>

using namespace std;

int main()
{
	string kod;

	cout << "Unesite kod: " << endl;
	getline(cin, kod);
	stack<char> s;
	stringstream sstr(kod);
	string lajn;
	while (getline(sstr, lajn))
	{
		for (unsigned i = 0; i < lajn.length(); i++)
		{
			if (lajn[i] == '(')
			{
				s.push(lajn[i]);
			}
			else if(lajn[i] == ')')
			{
				if (s.empty() || s.top() != '(')
				{
					system("pause");
					return 2;
				}
				s.pop();
			}
		}
	}
	
	if (s.empty())
	{
		cout << "Ispravan" << endl;

	}
	else
	{
		cout << "Nije ispravan" << endl;
	}



	system("pause");
	return 0;
}
