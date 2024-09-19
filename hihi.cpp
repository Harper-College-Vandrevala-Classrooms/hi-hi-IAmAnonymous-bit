#include <iostream>
#include <string>
#include <cctype>

using namespace std


;int strcmp_case_insensitive(string str1, string str2)
{
    

    for (int i = 0; i < 5; i++)
    {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);
        if (ch1 != ch2)
        {
            int i1 = ch1;
            int i2 = ch2;
            if (i1 > i2)
            {
                return 1;
            }
            return -1;
        }

    }

    return 0;

}

int main()
{
    string strA = "What";
    string strB = "what";
    string strC = "That";

    cout << strcmp_case_insensitive(strA, strB) << "\n";
    cout << strcmp_case_insensitive(strA, strC) << "\n";
    cout << strcmp_case_insensitive(strC, strB) << "\n";

    return 0;

}