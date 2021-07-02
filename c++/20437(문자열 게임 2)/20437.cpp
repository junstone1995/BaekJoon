#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t,k;
string s;
vector<int> alpha[26],ret;
int main()
{
    cin >> t;
    while(t--)
    {
    cin >> s >> k;
    ret.clear();
    for(int i = 0; i < 26; i++)
        alpha[i].clear();
    for(int i = 0 ; i < s.size(); i++)
        alpha[s[i]-'a'].push_back(i);

    for(int i = 0; i< 26; i++)
    {
        if(alpha[i].size() < k ) continue;
        for(int j = 0; j + k - 1 < alpha[i].size();j++)
        {
            ret.push_back(alpha[i][j+k-1] - alpha[i][j]+1);
        }
    }
    if (ret.size() == 0)
        cout << -1 << '\n';
    else
        cout << *min_element(ret.begin(), ret.end()) << " " << *max_element(ret.begin(),ret.end()) << '\n';
    }
}
