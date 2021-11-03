#include <stdio.h>
void hoanvi(int  px, int  py){
int z;
z =  px;
 px = py;
py = z;
}
int main()
{
    int a=15, b=21;
    hoanvi(a,b);
    printf("%d %d",a,b);
return 0;
};