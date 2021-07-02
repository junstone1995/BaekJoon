#include <iostream>
#include <vector>

using namespace std;

vector<int> makeTable(string pattern)
{
    int len = pattern.size();
    vector<int> table(len);
    int j = 0;
    for(int i = 1; i < len ; i++)
    {
        while(j > 0 && pattern[i] != pattern[j])
        {
            j = table[j-1];
        }
        if (pattern[i] == pattern[j])
        {
            table[i] = ++j;
        }
    }
    return table;
}

bool kmp(string parent,string pattern)
{
     vector<int> table = makeTable(pattern);
     int parentSize = parent.size();
     int patternSize = pattern.size();
     int j = 0;
     for(int i = 0 ; i < parentSize; i++)
     {
        while(j > 0 && parent[i] != pattern[j])
        {
            j = table[j-1];
        }
        if (parent[i] == pattern[j])
        {
            if ( j == patternSize -1)
            {
                return true;
            }
            else
                j++;
        }
     }
     return false;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string parent,pattern;
    cin >> parent >> pattern;

    cout << kmp(parent,pattern);
}
