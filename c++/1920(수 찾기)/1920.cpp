#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int bsearch(int low, int high, int target)
{
        if (low > high)
            return (0);
        else
        {
            int mid = (low + high) / 2;
            if(v[mid] == target)
                return 1;
            else if (v[mid] > target)
                return bsearch(low,mid - 1,target);
            else
                return bsearch(mid + 1, high, target);
        }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n,m;
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());

    cin >> m;
    for(int i = 0; i< m; i++)
    {
        int num;
        cin >> num;
        cout << bsearch(0,n -1 ,num) << "\n";
    }
}
