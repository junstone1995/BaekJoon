#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int t;
string s;

bool isPalindrome(string s)
{
	string rev;
	rev = s;
	reverse(rev.begin(),rev.end());
	return s == rev;
}

bool isPalindreme2(string s)
{
	for(int i = 0; i < s.size()/2; i++)
	{
		if (s[i] != s[s.size() - 1  - i])
		{
			string s1 = s.substr(i+1,s.size() - 1 - 2 * i);
			string s2 = s.substr(i, s.size() - 1 - 2 * i);
			return isPalindrome(s1) || isPalindrome(s2);
		}
	}
}

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> s;
		cout << (isPalindrome(s) ? 0 : isPalindreme2(s) ? 1 : 2) << '\n';
	}
}
