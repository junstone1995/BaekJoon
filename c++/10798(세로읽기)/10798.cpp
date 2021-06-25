#include <iostream>

using namespace std;

int main()
{
    string ret[5];
    for(int i = 0; i < 5;i++)
    {
        cin >> ret[i];
    }
    for(int i = 0; i < 15;i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if (i < ret[j].size())
                cout << ret[j][i];
        }
    }
}
