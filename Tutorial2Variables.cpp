#include <iostream>
using namespace std;

int main()
{
    float annualSalary;
    cout << "Please enter your annual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10;

    char character = 'a';

    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 786788793774;

    char character0 = 'a', 'b';

    cout << "character0 is " << character0 << endl;

    // 4 bytes
    cout << "Size of int is " << sizeof(int) << " bytes\n";

    // -1,-2,-3, ..., -2147483648
    cout << "Int min value is " << INT_MIN << endl;
    // 0,1,2,3, ..., 2147483647
    cout << "Int max value is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";


    system("pause>0");
}