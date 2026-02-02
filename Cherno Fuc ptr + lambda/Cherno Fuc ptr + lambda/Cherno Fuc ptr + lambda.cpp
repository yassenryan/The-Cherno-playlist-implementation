#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


void forEach(const vector<int>& v1, const function<void(int)> &func  ) {
    for (int v : v1)
        func(v);
}


int main() {


    vector<int> v1 = { 1,5,4,2,3 };
    int a = 0;

    auto it = find_if(v1.begin(), v1.end(), [](int value) {return value > 3; });
    cout << *it << endl;

    auto lambda = [&a](int val) {cout << "Val : " << a++ + 1 << endl; };
    //forEach(v1, lambda);


}


//
//void forEach(const vector<int>& v1, void(*func)(int)) {
//    for (int v : v1)
//        func(v);
//}
//
//
//int main() {
//
//
//    vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
//    auto lambda =[](int val){cout << val << endl; };
//    forEach(v1, lambda);
//        
//
//}
//
//

/*void print(int val) {
    cout << "VALUE = " << val << endl;
}

void forEach(const vector<int>& v1, void(*func)(int)) {
    for (int v : v1)
    func(v);
}




int main() {

    vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

    forEach(v1, [](int val) {cout << val << endl; });


}*/

/*void hw(int a) {
    cout << "HELLO WORLD ,Value = " << a << endl;
}






int main()
{
    typedef void(*func)(int);
    func  f1 = hw;
    f1(13);

    void(*kak)(int);
    kak = hw;
    kak(22);

    auto l = hw;
    l(44);




}
*/