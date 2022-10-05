bool isPermutation(char a[],char b[])
{
    int freq[256]={0};
    for(int i=0;a[i]!='\0';i++)
    {
      int ind=a[i];
      freq[ind]++;
    }
     for(int i=0;b[i]!='\0';i++)
    {
      int ind= b[i];
      freq[ind]--;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        return false;
    }
    return true;
}

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}