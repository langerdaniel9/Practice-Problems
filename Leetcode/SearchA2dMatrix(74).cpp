/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

- Integers in each row are sorted from left to right.
- The first integer of each row is greater than the last integer of the previous row.
*/

//////////
#include <iostream>
#include <vector>

using namespace std;
//////////

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int height = matrix.size();
    int width = matrix[0].size();

    int row = 0;

    for (int i = 0; i < height; i++)
    {
        if (matrix[i][width - 1] >= target)
        {
            row = i;
            break;
        }
    }

    int left = 0, right = matrix[row].size() - 1;
    int middle;

    while (right - left > 1)
    {
        int middle = (left + right) / 2;
        if (matrix[row][middle] < target)
        {
            left = middle++;
        }
        else
        {
            right = middle;
        }
    }
    if (matrix[row][left] == target || matrix[row][right] == target)
    {
        return true;
    }
    return false;
}

//////////
void printMatrix(vector<vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int element : matrix[i])
        {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    cout << "Matrix is:" << endl;
    printMatrix(matrix);

    cout << "Enter a search term: ";
    int term = 4;
    cin >> term;
    if (cin.fail())
    {
        cerr << "Invalid input" << endl;
        exit(1);
    }

    cout << "The value " << term << (searchMatrix(matrix, term) ? " was found in the matrix" : " was not found in the matrix") << endl;
}
//////////