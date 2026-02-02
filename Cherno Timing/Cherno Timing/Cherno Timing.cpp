#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

struct timer
{
    chrono::time_point<chrono::steady_clock>start, end;
    chrono::duration<float>dur;
    timer() {
         start = chrono::high_resolution_clock::now();

    }
    ~timer() {

        auto end = chrono::high_resolution_clock::now();
        dur = end - start;
        float ms = dur.count() * 1000.0f;
        cout << "Program took about " << ms << "s" << endl;
    }

        
};

void func() {
    timer t;
    for (size_t i = 0; i < 100; i++)
    {
        cout << "h" << endl;
    }
}

int main(){     
    auto z=func;
    z();


}

