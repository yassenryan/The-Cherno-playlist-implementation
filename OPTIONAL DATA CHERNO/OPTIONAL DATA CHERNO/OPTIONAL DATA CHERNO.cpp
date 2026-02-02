#include <iostream>
#include <optional>
#include <fstream>
using namespace std;

optional<string> Readfile(const string& filepath ){
    std::ifstream stream(filepath);
    if (stream) {
        string result;
        stream.close();
  
        return result;
    }

    return {};

}


int main()
{
    optional<string> data = Readfile("data.txt");
    if(data.has_value()) {
        cout << "READ SUCCESSUFLLY";
    }
    else {
        cout << "NOT READ SUCCESSUFLLY";
    }
    cin.get();
}
