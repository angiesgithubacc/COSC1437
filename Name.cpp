#include <iostream>

using namespace std;

int main()
{

    //Setting Variables
    string FirstName;
    string LastName;
    int Firstl;
    int Lastl;
    int FirstIn;
    int LastIn;

    //asking for first name
    cout <<  "What is your name?\n";
    cin >> FirstName;
    Firstl = FirstName.length()/2;
    
    cout << "What is your last name?\n";
    cin >> LastName;
    Lastl = LastName.length()/2;

    cout << "So your first name nickname is " + FirstName.substr(0, Firstl) + LastName.substr(0, Lastl) << endl;
    cout << "And your last name nickname is " + LastName.substr(0, Lastl) + FirstName.substr(0, Firstl) << endl;


    return 0;

}
