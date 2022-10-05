#include <iostream>
using namespace std;
void conse(string s){
    int k=1;
    char last=s[0];
       int n=s.length();
for(int i=0;i<n;i++)
{
    if(s[i]==last){
      continue;
    }
    else{
    last=s[i];
    s[k]=s[i];
    k++;

    }

}

s.erase(s.begin()+k,s.end());
cout<<s;
}


int main ()
{
  string s="aabbccd";
  conse(s);
return 0;
}