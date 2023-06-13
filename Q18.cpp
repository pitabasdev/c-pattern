// Hollow triangle star pattern in C++
// * * * * * 
//  *     *
//   *   *
//    * *
//     *
#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < 5 - row; col++)
        {
            if (row == 0 || row == 4 || col == 0 || col == 4 - row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;
}
