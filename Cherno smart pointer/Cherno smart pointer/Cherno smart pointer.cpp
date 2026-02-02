#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Person {
private :
    string name;
public:

    Person(string n):name(n){
        cout << name << "CREATER" << endl;
    }

    void hi() {
        cout << "HELLO, IAM" << name << endl;

    }

    ~Person(){
        cout << name << "DESTROYED" << endl;
    }




};

int main()
{
    cout << "**UNIQUE PTR**" << endl;
    {
        unique_ptr<Person> p1 = make_unique<Person>("Yassen");
        p1->hi();
    }

    cout << "**SHARED PTR**" << endl;
    {
        shared_ptr<Person> p2 = make_shared<Person>("Yassen");
        {
        shared_ptr<Person> p3 = p2;
        cout << "COUNT= " << p2.use_count() << endl;
        }
        cout << "NEW COUNT= " << p2.use_count() << endl;
        p2->hi();
    }

    cout << "**WEAK PTR**" << endl;
    {
        weak_ptr<Person> p4 = make_shared<Person>("Yassen");

        weak_ptr<Person> wp = p4;
        cout << "COUNT= " << p4.use_count() << endl;
    }
    cout << "**END**" << endl;

}
