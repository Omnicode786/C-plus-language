#include <iostream>

using namespace std;
int main()
{

    string name;
    cout << "Enter you name:";
    getline(cin, name);
    if (name.length() > 12)
    {
        cout << "Your name can't be 12 characters long" << '\n';
    }
    else if (name.empty())
    {
        cout << "You dint enter any name" << '\n';
    }

    else
    {
        cout << "Welcome " << name << '\n';
    }
    name.clear();

    cout << "Welcome " << name << '\n';
}
