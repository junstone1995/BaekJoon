#include <iostream>

using namespace std;


int main()
{
    string str;
    cin >> str;
    for (int i = 0 ; i < str.size(); i++)
    {
        if (str[i] >= 'D' && str[i] <= 'Z')
            cout << (char)(str[i] - 3);
        else if (str[i] >= 'A' && str[i] <= 'C')
            cout << (char)(str[i] + 23);
    }
    cout << '\n';
}
