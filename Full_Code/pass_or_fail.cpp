#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;
    if (mark >= 90)
        cout << "Grade A" << endl;
    else if (mark >= 80)
        cout << "Grade B" << endl;
    else if (mark >= 70)
        cout << "Grade C" << endl;
    else if (mark >= 60)
        cout << "Grade D" << endl;
    else if (mark >= 50)
        cout << "Grade E" << endl;
    else if (mark >=40)
        cout << "Grade F" << endl;
    else
        cout << "Fail" << endl;

return 0;
}