#include <bits/stdc++.h>
using namespace std;
void highestOccurringChar(char a[]){
    int freq[256]={0};
    map<char,int>mp;
    int max=0;
    char result;
    for(int i=0;a[i]!=0;i++){
      mp[a[i]]++;
if(mp[a[i]]>max){
   max= mp[a[i]];
  
}


    }
    for(int i=0;a[i]!=0;i++)
    {
        int ind=a[i];
        freq[ind]++;
    }int ma=0;int z;
    for(int i=0;i<256;i++){
    if(freq[i]>ma)
    {
        ma=freq[i];
        z=i;
    }
    }
    char j=z;
    cout <<max<<j;
    
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
highestOccurringChar(str);
}