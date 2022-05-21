#include <iostream>
#include "Config.hpp"
using namespace std;

#ifdef USE_MYMATH
#include "MathFunctions.hpp"
#endif

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        cout << "You needed to have a double as your cmd line arg!" << endl;
        return 0;
    }
    const double d = std::stod(argv[1]);
    cout << "Number of arguments: " << argc << endl;

#ifdef USE_MYMATH
    cout << mysquare(d) << endl;
#endif
    
    for (int i = 0; i < argc; i++)
        cout << "argument is: " << argv[i] << endl;

    cout << "Version: " << HelloWorld_VERSION_MAJOR << "."
        << HelloWorld_VERSION_MINOR << endl;

    return 0;
}