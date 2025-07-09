#include <iostream>
using namespace std;

int main()
{

    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }
}

/*
1
12
123
1234
12345
*/