#include <iostream>
#include <vector>
using namespace std;
struct vertex {
    float x, y, z;
};

int main()
{
    vector <vertex> v1;
    v1.push_back({1, 2, 3});
    v1.push_back({ 4,5,6 });

    for (vertex v : v1) 
        cout << v.x << " " << v.y << " " << v.z << endl;
    


}