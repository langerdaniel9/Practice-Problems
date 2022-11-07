///////////
#include <iostream>
#include <string>

using namespace std;
//////

int numTilePossibilities(string tiles)
{
    int differentLetters = 0;
    int seenLetters[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < tiles.length(); i++)
    {
        seenLetters[tiles[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (seenLetters[i] > 0)
        {
            differentLetters++;
        }
    }

    int toReturn = 0;

    for (int i = 1; i <= tiles.length(); i++)
    {
        toReturn += differentLetters * i;
    }

    return toReturn;
}

////////
int main()
{
    cout << numTilePossibilities("AAABBC");
}
//////////