//
// Created by pooas on 5/11/2024.
//
#include <iostream>
#include <string>


int countingVowels(char s[])
{
    int vcount;

    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i]== 'a' || s[i]== 'e' ||s[i]== 'o' || s[i]== 'u' || s[i]== 'i' || s[i]== 'A' || s[i]== 'E'|| s[i]== 'O'|| s[i]== 'U'|| s[i]== 'I')
            vcount++;
    }
    return  vcount;
}


int main()
{
    char s[] = "WelCoMe";

    for (int i = 0; s[i] != '\0' ; ++i)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else if(s[i] >= 'a' && s[i] <= 122)
            s[i] -= 32;
    }

    std::cout << s << std::endl;
    std::cout << countingVowels(s) << std::endl;

    return 0;
}