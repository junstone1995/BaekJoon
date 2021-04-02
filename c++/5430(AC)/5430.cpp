#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    int T;

    cin >> T;
    while (T--)
    {
        deque<int> dq;
        string str,str2;
        int num;

        cin >> str;
        cin >> num;
        cin >> str2;
        string tmp;
        for(int i = 0 ; i < str2.length(); i++)
        {
            if (str2[i] >= '0' && str2[i] <= '9')
                tmp += str2[i];
            else if (str2[i] == ',' || str2[i] == ']')
            {
                if(!tmp.empty())
                {
                    dq.push_back(stoi(tmp));
                    tmp.clear();
                }
            }
        }
        bool flag = true,print = true;//뒤집히면 false
        for(int i = 0 ; i < str.length(); i++)
        {
            if (str[i] == 'R')
            {
                flag = !flag;
            }
            else
            {
                if(dq.empty())
                {
                    print = false;
                    cout << "error\n";
                    break;
                }
                else
                {
                    if (flag)
                        dq.pop_front();
                    else
                        dq.pop_back();
                }
            }
        }
        if(print)
        {
            if(flag)
            {
                cout << '[';
                while(!dq.empty())
                {
                    cout << dq.front();
                    dq.pop_front();
                    if(!dq.empty())
                        cout << ',';
                }
                cout << "]\n";
            }
            else
            {
                cout << '[';
                while(!dq.empty())
                {
                    cout << dq.back();
                    dq.pop_back();
                    if(!dq.empty())
                        cout << ',';
                }
                cout << "]\n";
            }
        }
    }
}
