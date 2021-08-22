#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 执行优先级 从上到下
    // + - * / %
    cout << 1 + 1 << endl;
    cout << 5 / 2 << endl;  // 2
    cout << 5.0 / 2 << endl;  // 2.5

    // ++, --
    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 7;
    cout << counter2++ << endl;  // 7
    cout << counter2 << endl;  // 8
    cout << ++counter2 << endl;  // 9

    system("cls"); // clear console

    // <, >, <=, >=, ==, !=
    int a = 5, b = 5;
    // cout << (a > b) << endl;  // 0 for false (1 for true)

    // &&, ||, !
    int c = 8, d = 9;
    // cout << !(c == 5 && b == 9);

    // 优先级
    cout << (c == 8 && d == 4 + 5);  // 1

    // =, +=, -=, *=, /=, %=
    int x = 5;
    x += 7;  //same as: x = x + 7
    cout << x << endl;

    return 0;
}
