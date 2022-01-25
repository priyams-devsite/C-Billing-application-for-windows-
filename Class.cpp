// A simple example program about classes and objects
#include<iostream>
using namespace std;
class student
{
    char name[30];
    int age;
    int grade;
    char stream[10];
    
    public:
    void fetchdata(void);
    void cmpdata(void);
    void display(void);
};
void student :: fetchdata(void)
{
    cout << "Enter name";
    cin >> name;
    cout << "Enter age";
    cin >> age;
    cout <<"Enter grade";
    cin >> grade;
    cout << "Enter stream";
    cin >> stream;
}
void student :: cmpdata(void)
{
    if (age<20)
    {
        cout << "Candidate not eligble";
    }
    else
    {
        cout << "Candidate is eligible";
    }
} 
void student :: display(void)
{
    cout << "\nName :   " << name;
    cout << "\nAge :    " << age;
    cout << "\nGrade :  " << grade;
    cout << "\nStream : " << stream << "\n\n";
}

int main()
{
    student y;
    y.fetchdata();
    y.display();
    y.cmpdata();

    return 0;
}
