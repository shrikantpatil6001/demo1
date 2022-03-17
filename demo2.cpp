#include<stdio.h>
namespace N1
{
    int no1=500;  //N1::no1
    int no2=600;  //no2 
}
int no1=100;   // ::no1
using namespace N1;
int main()
{
    int no1=10; // local  // no1
    printf("\n local variable no1=%d [%u]", no1 , &no1);
    printf("\n global variable ::no1=%d [%u]", ::no1 , &::no1);
    // namespacename::variablename  N1::no1
    printf("\n namespace N1 variable N1::no1=%d [%u]", N1::no1,&N1::no1 );
    printf("\n namespace N1 variable N1::no2=%d [%u]", N1::no2,&N1::no2 );
   //using namespace N1;
    printf("\n namespace N1 variable no2=%d [%u]",no2 , &no2);
    printf("\n local variable no1=%d [%u]", no1 , &no1);


    return 0;
}