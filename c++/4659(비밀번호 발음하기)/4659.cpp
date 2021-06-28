#include <iostream>
#include <string>

using namespace std;

int main()
{
    string aeiou="aeiou";
    string password;
    bool threealpha;
    bool checkAeiou;
    bool samealpha;
    bool beforecheck;
    bool curcheck;
    int cnt;
    while(1)
    {
        threealpha = false;
        checkAeiou = false;
        samealpha = false;
        beforecheck = false;
        cnt = 0;
        cin >> password;
        if (password == "end")
            break;
        for(int i = 0 ; i < password.size();i++)
        {
            curcheck = false;
            if ( i != 0 && password[i] == password[i-1] && password[i] != 'e' && password[i] != 'o')
            {
                samealpha = true;
                break;
            }
            for(int j = 0 ; j < aeiou.size(); j++)
            {
                if (password[i] == aeiou[j])
                {
                    if (!beforecheck)
                        cnt = 0;
                    checkAeiou = true;
                    curcheck = true;
                    beforecheck = true;
                    cnt++;
                }
            }
            if (!curcheck)
            {
                if (beforecheck)
                    cnt = 0;
                beforecheck = false;
                cnt++;
            }
            if (cnt == 3)
            {
                threealpha = true;
                break;
            }
        }
        if (threealpha || samealpha || !checkAeiou)
        {
            cout << "<" << password << "> is not acceptable.\n";
        }
        else
            cout << "<" << password << "> is acceptable.\n";
    }
}

