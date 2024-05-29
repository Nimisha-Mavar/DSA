#include<bits/stdc++.h>
using namespace std;

//check if number is palindrome or not

bool chackPalindrome(string str,int start , int end)
{
    if(start>=end)
    return 1;

    if(str[start]!=str[end])
    return 0;

    else
    return chackPalindrome(str,start+1,end-1);
}

int main()
{
    string str="naman";
    cout<<chackPalindrome(str,0,4);
}