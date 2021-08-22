#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int hostUserNum, guestUserNum;
    cout << "HOST: ";
    cin >> hostUserNum;
    system("cls");
    cout << "Guest: ";
    cin >> guestUserNum;

    (hostUserNum == guestUserNum)? cout << "Correct!": cout << "Failed!";

    return 0;
}
