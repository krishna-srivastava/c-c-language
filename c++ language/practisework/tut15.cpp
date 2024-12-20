// multilevel inheritence.........................................................
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int r)
    {
        roll_number = r;
    }
    void get_rollnumber(void)
    {
        cout << "the student roll number is " << roll_number << endl;
    }
};

class marks : public student
{
protected:
    int math, computer;
public:
    void set_marks(int m1, int m2)
    {
        math = m1;
        computer = m2;
    }
    void get_marks(void)
    {
        cout << "marks of math is " << math << endl;
        cout << "marks of computer is " << computer << endl;
    }
};

class result : public marks
{
    float percentage;

public:
    void get_percentage()
    {
        percentage = (math + computer) / 2;
    }
    void display()
    {
        get_rollnumber();
        get_marks();
        get_percentage();
        cout << "the percentage is " << percentage << "%" << endl;
    }
};

int main()
{
    result krishna, chotu;
    krishna.set_rollnumber(69);
    krishna.set_marks(99, 77);
    krishna.display();
    cout << endl;
    chotu.set_rollnumber(96);
    chotu.set_marks(77, 77);
    chotu.display();
    return 0;
};