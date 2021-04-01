#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    int n,m,cnt(0);
    deque<int> dq;

    cin >> n >> m;
    for (int i = 1 ; i <= n; i++)
        dq.push_back(i);
    for(int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        int index;
        for (int i = 0; i < dq.size(); i++)
            if (dq[i] == num)
            {
                index = i;
                break;
            }
        if (index < dq.size() - index)
        {
            while(1)
            {
                if(dq.front() == num)
                {
                    dq.pop_front();
                    break;
                }
                cnt++;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else
        {
            while(1)
            {
                if (dq.front() == num)
                {
                    dq.pop_front();
                    break;
                }
                cnt++;
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout << cnt << '\n';
}
