#include<stdio.h>
#pragma pack(1)
namespace NEmp
{
    class emp
    {
        private: //(by default it is public)
        // variable or data member or field
        int empno;
        char name[10];
        float sal;

    public:
    // member function or method
    void acceptEmpInfo(void);  // member fun decl
    
    void printEmpInfo(void) ;
    
};
   // member fun defination
    //return_type class/structName::memberfunname(parameters)
    void emp::acceptEmpInfo(void)
    {
        printf("\n enter empno =");
        scanf("%d", &empno);

        printf("\n emp name =");
        scanf("%s", name);

        printf("\n sal=");
        scanf("%f", &sal);
        return;
    }
    void emp::printEmpInfo(void)  
    {
        // e->sal=-10000; error as e is const
        printf("\n empno=%d", empno);
        printf("\n emp name= %s", name);
        printf("\n sal=%.2f", sal);

        
        return ;
    }
} // end of namespace NEmp
using  namespace NEmp;
int main()
{
    // struct emp is user defined data type
    //cpp         c 
    NEmp::emp e1; //struct emp e1; // e1 is variable /object of user define d data type struct emp

   // e1.sal=-10000;  /error as sal is private
   // printf("\n size of e1=%d", sizeof(e1));
    printf("\n size of struct emp=%d", sizeof(struct emp));
    printf("\n enter emp info::\n");
    //cpp                       //c
    e1.acceptEmpInfo();//acceptEmpInfo(&e1); // e1 actual argument    


    printf("\n emp info::\n");
    e1.printEmpInfo();//printEmpInfo(&e1);
    
    return 0;
}