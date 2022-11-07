///////////
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//////

vector<int> gardenNoAdj(int n, vector<vector<int>> &paths)
{
    vector<int> toReturn = {1};
    for (int i = 1; i < n; i++)
    {
        toReturn.push_back(0);
    }

    vector<vector<int>> possibilities;
    for (int i = 0; i < n; i++)
    {
        vector<int> perGarden;
        for (int i = 0; i < n; i++)
        {
        }
    }
}

////////
int main()
{
    int n = 3;
    vector<vector<int>> paths = {{1, 2}, {2, 3}, {3, 1}};

    vector<int> result = gardenNoAdj(n, paths);

    for (int i = 0; i < n; i++)
    {
        cout << result.at(i);
    }
}
//////////