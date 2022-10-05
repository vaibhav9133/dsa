
using namespace std;
void removeAllOccurrencesOfChar(char a[],char c){
    int k=0;
for(int i=0;a[i]!='\0';i++)
{
    if(a[i]==c)
    {
        continue;
    }
    else{
        a[k]=a[i];
        k++;
    }
}
a[k]='\0';

}
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}