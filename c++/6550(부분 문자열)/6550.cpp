#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string input,char delimiter)
{
    vector<string> ans;
    stringstream ss(input);
    string tmp;

    while(getline(ss, tmp, delimiter))
    {
        ans.push_back(tmp);
    }
    return ans;
}

int main()
{
    while(1)
    {
        string s;
        getline(cin,s);
        vector<string> ret = split(s, ' ');
        string ans = "Yes";
        if (ret.size() == 0)
            return (0);
        int x = 0;
        for(int i = 0; i < ret[0].size(); i++)
        {
            bool run = false;
            for(int j = x; j < ret[1].size(); j++)
            {
                if (ret[0][i] == ret[1][j])
                {
                    x = j+1;
                    run = true;
                    break;
                }
            }
            if (!run)
            {
                ans = "No";
                break;
            }
        }
        cout << ans << '\n';
    }
}
