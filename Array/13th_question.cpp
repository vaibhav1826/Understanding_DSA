/*
Problem Statement



Raj is writing an article and wants to know the number of words in his sentences. A word is defined as a sequence of characters separated by spaces, tabs, or newline characters.



Help Raj by writing a program that counts the number of words in a given sentence using a linear search algorithm.
*/

// You are using GCC
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    bool inword = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && !inword)
        {
            count++;
            inword = true;
        }
        else if (str[i] == ' ')
        {
            inword = false;
        }
    }

    cout << count;
};