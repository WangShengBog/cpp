#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //User enters integer number
    //Program write out if that number is even or odd
    cout << "Please enter an integer: ";
    int number;
    char resp;
    cin >> number;
    if (number % 2 != 0)
    {
       cout << "You have enterd odd number.";
    }
    else
    {
       cout << "You have enterd even number.";
    }

    return 0;
}
