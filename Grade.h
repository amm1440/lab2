#ifndef GRADE_H
#define GRADE_H

class Grade
{
    private:
        int count;
        double sum;
        double avg;
    public:
        void getGrades();
        void computeAvg();
        double getAvg();
};

#endif
