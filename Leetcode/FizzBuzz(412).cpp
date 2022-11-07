/////////
#include <string>
#include <vector>
#include <iostream>

using namespace std;
//////////

vector<string> fizzBuzz(int n)
{
    vector<string> toReturn;
    for (int i = 1; i <= n; i++)
    {
        string answer = "";
        bool div = false;
        if (i % 3 == 0)
        {
            div = true;
            answer += "Fizz";
        }
        if (i % 5 == 0)
        {
            div = true;
            answer += "Buzz";
        }
        if (!div)
        {
            answer += to_string(i);
        }
        toReturn.push_back(answer);
    }
    return toReturn;
}

//////////
int main()
{
    vector<string> results = fizzBuzz(15);

    for (int i = 0; i < 15; i++)
    {
        cout << results[i] << endl;
    }
}
////////