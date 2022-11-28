// This program will compute the letter grades for
// a set number of grades to be entered by the user.
#include <iostream>
#include "Grade.h"

using namespace std;

int main()  
{
    Grade *grade = new Grade();
    grade->getGrades();
    grade->computeAvg();
    cout << "Your grade is a: " << grade->getAvg() << endl;
    delete grade;
}
