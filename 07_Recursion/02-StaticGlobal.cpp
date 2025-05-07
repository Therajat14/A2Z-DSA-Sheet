#include <iostream>
using namespace std;

int fun1(int n)

{
    static int x = 0;

    if (n > 0)
    {
        x++;
        return fun1(n - 1) + x;
    }
    return 0;
}

int main()
{
    // ANSI escape code to clear screen and move cursor to top-left
    cout << "\033[2J\033[1;1H";
    cout << fun1(5) << endl;
    return 0;
}
