#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char incrypt[27] = "wghuvijxpqrstacdebfklmnoyz";
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int ret[27]= {0,};
        string s;
        getline(cin,s);
        for(int i = 0; i < s.length();i++)
        {
            for(int j = 0; j < 26; j++)
            {
                if (incrypt[j] == s[i])
                {
                    ret[j] += 1;
                }
            }
        }
        int tmp = 0;
        for (int i = 0; i < 26; i++)
        {
            if (ret[tmp] < ret[i])
                tmp = i;
        }
        for (int i = 0; i< 26; i++)
        {
            if (i != tmp)
            {
                if(ret[tmp] == ret[i])
                    tmp = -1;
            }
        }
        if (tmp == -1)
            cout << "?\n";
        else
            cout << incrypt[tmp] << '\n';
    }

}
