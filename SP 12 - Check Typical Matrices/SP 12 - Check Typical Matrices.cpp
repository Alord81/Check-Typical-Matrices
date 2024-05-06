#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int RandomeNumber(short From, short To)
{
    return rand() % (To - From + 1) + From;
}

void FullArrayWithOrderdNumber(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            arr[i][j] = RandomeNumber(1, 10);
        }
    }
}

void PrintArrayInMatrix(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d\t", 2, arr[i][j]);
        }
        cout << endl;
    }
}


bool AreTypicalMatrices(short arr1[3][3], short arr2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols;j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                return false;
            }
        }
    }


    return true;
}

int main()
{

    srand((unsigned)time(NULL));
    short arr1[3][3], arr2[3][3];
    short cols = 3, rows = 3;

    FullArrayWithOrderdNumber(arr1, rows, cols);
    FullArrayWithOrderdNumber(arr2, rows, cols);

    cout << "Matrix1:\n";
    PrintArrayInMatrix(arr1, rows, cols);

    cout << "Matrix2:\n";
    PrintArrayInMatrix(arr2, rows, cols);

    if (AreTypicalMatrices(arr1, arr2, rows, cols))
    {
        cout << "\nYes: Both martrices are typical\n";
    }
    else
    {
        cout << "\nNo: matrices are Not typical\n";
    }

    return 0;
}