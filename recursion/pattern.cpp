#include <iostream>
using namespace std;
void patternOne(int row, int col)
{
    if (row == 0)
        return;
    if (col < row)
    {
        cout << "* ";
        patternOne(row, ++col);
    }
    else
    {
        cout << endl;
        col = 0;
        patternOne(--row, col);
    }
}
void patternTwo(int row, int col)
{
    if (row == 4)
        return;
    if (col <= row)
    {
        cout << "* ";
        patternTwo(row, ++col);
    }
    else
    {
        col = 0;
        cout << endl;
        patternTwo(++row, col);
    }
}
void patternThree(int row, int col, int count)
{
    if (row == 10)
        return;
    if ((col < 10))
    {
        if (row < 5)
        {
            if ((col == row || col == 0))
                cout << "*";
            else if ((col == 9 - row || col == 9))
                cout << "*";
            else
                cout << " ";
            patternThree(row, ++col, count);
        }
        else
        {
            if (col == 4 - count || col == 0)
                cout << "*";
            else if (col == 5 + count || col == 9)
                cout << "*";
            else
                cout << " ";
            patternThree(row, ++col, count);
        }
    }
    else
    {
        col = 0;
        cout << endl;
        row >= 5 ? patternThree(++row, col, ++count) : patternThree(++row, col, count);
    }
}
int main()
{
    // patternOne(4, 0);
    // patternTwo(0, 0);
    patternThree(0, 0, 0);
    return 0;
}
// Pattern 3
//    *        *
//    **      **
//    * *    * *
//    *  *  *  *
//    *   **   *
//    *   **   *
//    *  *  *  *
//    * *    * *
//    **      **
//    *        *
