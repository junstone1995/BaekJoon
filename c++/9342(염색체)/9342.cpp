#include <iostream>
#include <regex>

using namespace std;

int main()
{
	int t;
	cin >> t;
	string s;

	regex r("(^[A-F]?A+F+C+[A-F]?$)");
	while (t--)
	{
		cin >> s;
		regex_match(s,r) ? cout << "Infected!\n" : cout << "Good\n";
	}
}
