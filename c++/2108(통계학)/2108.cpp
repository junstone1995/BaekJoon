#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int N,mean = 0,tmp,mode = 0 ,min = 0 , max = 0;
	bool isSecond = false;
	cin >> N;
	vector<int> ret(N);
	vector<int> ret2(8001,0);
	for(int i = 0;i < N; i++)
	{
		cin >> ret[i];
		mean += ret[i];
		tmp = (ret[i] <= 0) ? abs(ret[i]) : ret[i] + 4000;
		ret2[tmp]++;
		if(ret2[tmp] > max)
			max = ret2[tmp];
	}
	sort (ret.begin(),ret.end());
	for (int i = -4000; i < 4001 ; i++)
	{
		tmp = i <= 0 ? abs(i) : i +4000;
		if(ret2[tmp] == max)
		{
			mode = i;
			if(isSecond)
				break;
			isSecond = true;
		}
	}
	cout << round(mean/(double)N) << '\n';
	cout << ret[round(N/2)] << '\n';
	cout << mode << '\n';
	min = ret[0];
	max = ret[ret.size()-1];
	cout << max - min << '\n';
}
