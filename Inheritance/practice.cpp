#include<iostream>
using namespace std;
class Student {
    public:

        int marks1;
        int marks2;

        Student(int m1, int m2) {
            marks1 = m1;
            marks2 = m2;
        }
};

int total_marks(Student obj) {
    int total = obj.marks1 + obj.marks2;
    return total;
}
int main()
{
	Student s1(10,20);
	cout<<"Total marks="<<total_marks(s1)<<endl;
	return 0;
}
