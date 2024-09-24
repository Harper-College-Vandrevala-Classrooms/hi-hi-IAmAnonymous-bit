#include <iostream>
#include <string>
#include <cctype>
#include <assert.h>

using namespace std;

int strcmp_case_insensitive(string str1, string str2)
{

    int ascii1 = 0;
    int ascii2 = 0;
    
    for (int i = 0; i < str1.length(); i++)
    {
        char ch1 = tolower(str1[i]);
        if (ch1 != ' ')
        {

            ascii1 += ch1;
        }
    }

    for (int i = 0; i < str2.length(); i++)
    {
        char ch2 = tolower(str2[i]);
        if (ch2 != ' ')
        {
            ascii2 += ch2;
        }
        
    }

    return ascii1 - ascii2;

}

int strcmp_case_insensitive(string str1, string str2, int stop)
{

    int ascii1 = 0;
    int ascii2 = 0;

    
    for (int i = 0; i < stop; i++)
    {
        char ch1 = tolower(str1[i]);

        if (ch1 != ' ')
        {
            ascii1 += ch1;
        }
    }

    for (int i = 0; i < stop; i++)
    {
        char ch2 = tolower(str2[i]);
        if (ch2 != ' ')
        {
            ascii2 += ch2;
        }
        
    }

    return ascii1 - ascii2;

}

int main()
{
    assert(strcmp_case_insensitive("hi", "hi") == 0);
    assert(strcmp_case_insensitive("hi", "HI") == 0);
    assert(strcmp_case_insensitive("hi", "ha") > 0);
    assert(strcmp_case_insensitive("ha", "hi") < 0 );
    assert(strcmp_case_insensitive("", "hi" ) < 0);
    assert(strcmp_case_insensitive("hil", "hi") > 0);
    assert(strcmp_case_insensitive("h i", "hi") == 0);

    assert(strcmp_case_insensitive("Stars", "Start", 4) == 0);
    assert(strcmp_case_insensitive("Starch", "Starts", 5) < 0);
    assert(strcmp_case_insensitive("Starts", "Starch", 5) > 0);

    cout << "All code works well!" << "\n";

    return 0;

}