#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

        if (grade > 100)
        cout << "Impossible.\n";
        else if (grade >= 86)
        cout << "You got an A!\n";
        else if (grade >= 72)
        cout << "You got a B!\n";
        else if (grade >= 60)
        cout << "You got a C.\n";
        else if (grade >= 50)
        cout << "You got a D.\n";
        else if (grade < 50)
        cout << "You got an F.\n";     

    
    
     return 0;
}