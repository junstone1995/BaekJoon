#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n,num,cnt = 1;
    stack<int> s;
    string ret = "";

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if (num >= cnt)
        {
            while (num + 1 != cnt)
            {
                s.push(cnt++);
                ret += "+\n";
            }
            s.pop();
            ret += "-\n";
        }
        else
        {
            if(s.top() == num)
            {
                s.pop();
                ret += "-\n";
            }
            else
            {
                ret = "NO";
                break;
            }
        }
    }
    cout << ret ;
}
