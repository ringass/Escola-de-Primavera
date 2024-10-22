#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkVowel(char p){
    string vowels = "aeiou";


    for(int i = 0; i < vowels.size(); i++){
        if(vowels[i] == p){
            return true;
        }
    }

    return false;
}


int main()
{
    string str, rts, resp;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (checkVowel(str[i]))
        {
            resp += str[i];
        }
    }

    for (int i = resp.size() - 1; i >= 0; i--)
    {
        rts += resp[i];
    }

    if (resp == rts)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
