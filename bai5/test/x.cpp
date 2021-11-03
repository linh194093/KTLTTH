#include <iostream>

using namespace std;

int main()
{
   int a=5, b=6, c=7;
   if(a>b) {
        if(b<c)
            c=a;
   }
    else c=b;

        cout<<"c="<<c<<endl;
    return 0;
}