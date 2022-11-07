/*
Given an integer, convert it to a roman numeral.

Constraints:

1 <= num <= 3999
*/

////////////////////
#include <string>
#include <iostream>

using namespace std;
////////////////////

string intToRoman(int num)
{
    string n = to_string(num);
    if (n.length() != 4)
    {
        int m = 4 - n.length();
        for (int i = 0; i < m; i++)
        {
            n = "0" + n;
        }
    }

    string first[] = {"", "M", "MM", "MMM"};
    string second[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string third[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string fourth[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int firstDigit = (num / 1000) % 10;
    int secondDigit = (num / 100) % 10;
    int thirdDigit = (num / 10) % 10;
    int fourthDigit = (num / 1) % 10;

    string roman = first[firstDigit] + second[secondDigit] + third[thirdDigit] + fourth[fourthDigit];

    return roman;
}

////////////////////
int main()
{
    cout << intToRoman(4) << endl;
}
////////////////////