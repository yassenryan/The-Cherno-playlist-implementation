#include <iostream>
using namespace std;


class QuickFindUF {

private:

	int* id;
	int length;
public:
	QuickFindUF(int n) {
		id = new int[n];
		length = n;

		for (int i = 0; i < length; i++)
		{
			id[i] = i;
		}
	}


	bool isconnected(int p,int q) {
		return id[p] == id[q];
	}

	void unionpq(int p, int q) {

		int pid = id[p];
		int qid = id[q];

		for (int i = 0; i < length; i++) {
			if (id[i] == pid) id[i] = id[q];
		}



	}




	~QuickFindUF() {
		delete[] id;
	}

};



int main()
{
	
}
