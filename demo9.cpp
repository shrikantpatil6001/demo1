#include<iostream>
using namespace std;
int sum(int n1=0, int n2=0, int n3=0, int n4=0) ;
int main(void)
{
    int res=0;
    res= sum(10,20,50, 40);//        n1=10   n2=20   n3=30   n4=40
    cout<<"res="<<res<<endl;
    
    res= sum(10,20,30);  //sum(,10,20,30);
    cout<<"res="<<res<<endl;       // n1=10   n2=20   n3=30   n4=0
    
    res= sum(10,20);  //        n1=10   n2=20   n3=0   n4=0
    cout<<"res="<<res<<endl;

    res= sum(10);         // n1=10   n2=0   n3=0   n4=0
    cout<<"res="<<res<<endl;

    res= sum();  //        n1=0   n2=0   n3=0   n4=0
    cout<<"res="<<res<<endl;
    return 0;
}
int sum(int n1, int n2, int n3, int n4) 
{
    cout<<"\tn1="<<n1<<"\tn2="<<n2<<"\tn3="<<n3<<"\tn4="<<n4<<endl;
    return n1+n2+n3+n4;
}
