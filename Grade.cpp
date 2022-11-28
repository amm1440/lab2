#include <iostream>
#include "Grade.h"
#include <fstream>

using namespace std;

void Grade::getGrades()
{
    ifstream file;

    int the_grade;


    string fname = "Grades.txt";
    file.open(fname.c_str());

   file >> count;

    cout << "Enter number of grades: " << count << "\n";

    for (int i=1; i<count+1; i++)
    {
        file >> the_grade;
        cout << "Enter grade #" << i << ": " << the_grade << "\n";
        sum = sum + the_grade;
    }

}

void Grade::computeAvg()
{
    avg = sum / count;
}

double Grade::getAvg()
{
    return avg;
}
