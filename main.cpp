#include <iostream>
#include "Config.hpp"
using namespace std;

int main(int argc, char** argv)
{
    const double d = std::stod(argv[1]);
    cout << "Number of arguments: " << argc << endl;
    
    for (int i = 0; i < argc; i++)
        cout << "argument is: " << argv[i] << endl;

    cout << "Version: " << HelloWorld_VERSION_MAJOR << "."
        << HelloWorld_VERSION_MINOR << endl;

    return 0;
}