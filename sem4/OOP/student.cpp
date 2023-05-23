#include <iostream>
using namespace std;

class student
{
    long long int id;
    float marks;

public:
    string name;
    student()
    {
        id = 201001001000;
        marks = 0.0;
    }
    void set(long long int id1, float marks1)
    {
        id += id1;
        marks = marks1;
    }
    void get()
    {
        cout << "\nName: " << name;
        cout << "\nID: " << id;
        cout << "\nMarks: " << marks;
    }
};
int main()
{
    student a;
    long long int id;
    float marks;
    cout << "Enter student details: Name, id, marks";
    cin >> a.name >> id >> marks;
    a.set(id, marks);
    a.get();
    return 0;
}