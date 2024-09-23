#include <iostream>
#include <string>
#include <cctype>

using namespace std

;string strcmp_case_insensitive(string str1, string str2)
{
    
    for (int i = 0; i < 5; i++)
    {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);

        if (ch1 != ch2)
        {
            int i1 = ch1;
            int i2 = ch2;
            if (i1 - i2 > 0)
            {
                return "greater than 0";
            }
            return "less than 0";
        }

    }

    return "equal to 0";

}

int main()
{
    string strA = "What";
    string strB = "what";
    string strC = "That";

    cout << strcmp_case_insensitive(strA, strB) << "\n";
    cout << strcmp_case_insensitive(strA, strC) << "\n";
    cout << strcmp_case_insensitive(strC, strB) << "\n";

    string strH = "Hi";
    string strh = "hi";

    cout << strcmp_case_insensitive(strH, strh) << "\n";
    cout << strcmp_case_insensitive(strh, strH) << "\n";

    return 0;

}