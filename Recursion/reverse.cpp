#include <bits/stdc++.h>

using namespace std;
void rev(int a[],int n,int i)

{if(i>=n/2){
    return ;}
    swap(a[i],a[n-i-1]);
    rev(a,n,i+1);

}

int main ()
{int n;
cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  rev(a,n,0);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  
return 0;
}