#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    cout << "Number of arguments: " << argc << endl;
    
    for (int i = 0; i < argc; i++)
        cout << "argument is: " << argv[i] << endl;

    return 0;
}