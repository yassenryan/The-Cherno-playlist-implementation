#include <iostream>
using namespace std;


namespace apple  {

    void print(string n) {
        cout << "Name : " << n << endl;
    }

}


namespace orange {

    void print(const char* n) {

        string temp = n;
        reverse(temp.begin(), temp.end());
        cout << "Name : " << temp << endl;

    }

}

int main()
{
    namespace a = apple;
    using namespace orange;

    a::print("lala");
    print("lala");

}
