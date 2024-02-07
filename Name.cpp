#include <iostream>

using namespace std;

int main()
{
    string testString;
    testString = "Hwang Hyunjin";
    cout << testString.length() << endl << endl;
    cout << testString.find(" ") << endl;
    cout << testString.substr(1, 4) << endl;
    cout << testString.substr(6, 10) << endl;
    cout << testString[0] << endl;

    return 0;
}