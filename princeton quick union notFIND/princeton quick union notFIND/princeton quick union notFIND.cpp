#include <iostream>
using namespace std;
class QuickUnion {
private:

	int* id;
	int length;


	int root(int i) {
		while (i != id[i])i = id[i];
		return i;
	}
public:
	QuickUnion(int n) {
		id = new int[n];
		length = n;

		for (int i = 0; i < length; i++)
		{
			id[i] = i;
		}
	}

	bool isconnected(int p, int q) {
		return root(p) == root(q);
	}

	void unionpq(int p, int q) {

		int i = root(p);
		int	j = root(q);
		id[i] = j;
		
	}




	~QuickUnion() {
		delete[] id;
	}

};



int main()
{

}
