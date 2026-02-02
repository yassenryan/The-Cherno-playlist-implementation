#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>
int main()
{
	vector<int> val = { 4,8,1,3,7,2,5,10,9,6 };
	sort(val.begin(), val.end(), [](int a, int b) {
		if (a == 1)
			return false;
		if (b == 1)
			return true;
		return a < b;
	});
	for (int t : val) {
		cout << t << " ";
	}
}
