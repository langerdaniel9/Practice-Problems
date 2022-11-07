/*
Given an integer, convert it to a roman numeral.
*/

////////////////////
#include <string>
#include <iostream>

using namespace std;
////////////////////

string intToRoman(int num)
{
    string roman = "";
    while (num > 0)
    {
        if (num >= 1000)
        {
            roman += "M";
            num -= 1000;
            continue;
        }
        else if (num >= 500)
        {
            roman += "D";
            num -= 500;
            continue;
        }
        else if (num >= 100)
        {
            roman += "C";
            num -= 100;
            continue;
        }
        else if (num >= 50)
        {
            roman += "L";
            num -= 50;
            continue;
        }
        else if (num >= 10)
        {
            roman += "X";
            num -= 10;
            continue;
        }
        else if (num >= 5)
        {
            roman += "V";
            num -= 5;
            continue;
        }
        else if (num >= 1)
        {
            roman += "I";
            num -= 1;
            continue;
        }
    }
    bool simplify = true;

    while (simplify)
    {
        cout << "-" << roman << "-" << endl;
        simplify = false;

        if (roman.find("CCCC") != -1)
        {
            simplify = true;
            int i = roman.find("CCCC");
            roman = roman.substr(0, i) + "CD" + roman.substr(i + 4);
        }
        else if (roman.find("XXXX") != -1)
        {
            simplify = true;
            int i = roman.find("XXXX");
            roman = roman.substr(0, i) + "XL" + roman.substr(i + 4);
        }
        else if (roman.find("IIII") != -1)
        {
            simplify = true;
            int i = roman.find("IIII");
            roman = roman.substr(0, i) + "IV " + roman.substr(i + 4);
        }
        else if (roman.find("DCD") != -1)
        {
            simplify = true;
            int i = roman.find("DCD");
            roman = roman.substr(0, i) + "CM" + roman.substr(i + 3);
        }
        else if (roman.find("LXL") != -1)
        {
            simplify = true;
            int i = roman.find("LXL");
            roman = roman.substr(0, i) + "XC" + roman.substr(i + 3);
        }
        else if (roman.find("VIV") != -1)
        {
            simplify = true;
            int i = roman.find("VIV");
            roman = roman.substr(0, i) + "IX" + roman.substr(i + 3);
        }
    }
    if (roman.find(" ") != -1)
    {
        roman = roman.substr(0, roman.find(" "));
    }
    return roman;
}

////////////////////
int main()
{
    cout << intToRoman(1994) << endl;
}
////////////////////