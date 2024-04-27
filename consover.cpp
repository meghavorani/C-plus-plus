#include<iostream>
using namespace std;
class student
{
private:
    int rno;
    int marks;
public:
    student() // Defualt Constructor
    {
        rno=1;
        marks=60;
    }
    student(int r,int m) // Parametraized Constructor
    {
        rno=r;
        marks=m;
    }
    student(student &x) // Copy Constructor
    {
        rno=x.rno;
        marks=x.marks;
    }
    void disp()
    {
        cout<<"Roll No="<<rno<<endl;
        cout<<"Marks="<<marks<<endl;
    }
};
int main()
{
    student s,s1(2,78),s2(s1);
    s.disp();
    s1.disp();
    s2.disp();

    return 0;
}
