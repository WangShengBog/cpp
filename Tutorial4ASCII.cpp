#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 两种写法
    cout << (int)'a' << endl; // 97
    cout << int('a') << endl; // 97

    cout << int('A') << endl; // 65
    cout << char(65) << endl; // A

    char c1, c2, c3, c4, c5;
    cout << "Please enter 5 letters ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " 
        << int(c3) << " " << int(c4) << " " << int(c5);

    return 0;
}
