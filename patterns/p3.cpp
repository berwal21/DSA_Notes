#include <iostream>;
using namespace std;

int main()
{

    int row, col;

    for (row = 1; row <= 5; row++)
    {
        char ch = 'a' + (row - 1);
        for (col = 1; col <= 5; col++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*
aaaaa
bbbbb
ccccc
ddddd
eeeee
*/