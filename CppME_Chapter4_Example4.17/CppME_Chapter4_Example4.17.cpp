#include <iostream>
#include <string>
using namespace std;

int main()
{
    string studentName = "Emily";
    int studentAge = 21;
    char studentGrade = 'B';
    double examScore = 84.5;
    bool isRegistered = true;

    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name         : " << studentName << endl;
    cout << "Age          : " << studentAge << endl;
    cout << "Grade        : " << studentGrade << endl;
    cout << "Exam Score   : " << examScore << endl;
    cout << "Registered   : " << isRegistered << endl;

    return 0;
}
