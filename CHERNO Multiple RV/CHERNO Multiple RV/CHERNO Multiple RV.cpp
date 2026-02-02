#include <vector>
#include <tuple>
#include <iostream>
using namespace std;

template <typename t,int N>

class ARRAY {

private:
	t arr[N];

public:

	int Getsize() const {
		return N;
	}


};



int main()
{
	ARRAY <int,13> A1;
	cout<< A1.Getsize();
	return 0;

}
