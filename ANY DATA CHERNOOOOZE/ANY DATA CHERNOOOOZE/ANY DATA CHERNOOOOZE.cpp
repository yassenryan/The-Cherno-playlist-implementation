#include<any>
//c++ 17
#include <iostream>
#include<variant>
using namespace std;

int main()
{
	any data;

	data = 4;
	data = "LALA";
	
	string s = any_cast<string>(data);





}
