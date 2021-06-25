#include <iostream>

using namespace std;

int main()
{
	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int ret[27] = {3,2,1,2,3,3,3,3,1,1,3,1,3,3,1,2,2,2,1,2,1,1,2,2,2,1};
	string tmp;
	int result=0;
	cin >> tmp;
	for(int i = 0 ; i < tmp.size();i++)
	{
		for(int j = 0; j < str.size(); j++)
		{
			if(tmp[i] == str[j])
				result += ret[j];
		}
	}
	result % 2 == 0 ? cout << "You're the winner?" : cout << "I'm a winner!";
}
