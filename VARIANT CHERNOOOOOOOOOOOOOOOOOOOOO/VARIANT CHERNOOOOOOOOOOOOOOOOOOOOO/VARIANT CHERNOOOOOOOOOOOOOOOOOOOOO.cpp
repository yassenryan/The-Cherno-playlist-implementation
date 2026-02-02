#include <iostream>
//c++ 17
#include <variant>
using namespace std;

int main()
{

	std::variant<string, int> data;

	data = "lala";
	cout << std::get<std::string>(data) << endl;
	data = 9;
	cout << std::get<int>(data) << endl;
}