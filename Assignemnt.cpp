#include<iostream>
using namespace std;

class Number
{
    int num,n1,n2;
    public:
    void method(int num)
    {
        n1=num%10;    //123%10=3
        num=num/10;   //120/10=12
        n2=num%10;    //12%10=2
        num=num/10;   //12/10=1
    
        cout<<num*100<<"+"<<n2*10<<"+"<<n1<<endl;
    }

};

int main()
{
    Number n,b,c;
    n.method(101);
    b.method(123);
    c.method(323);

    
    return 0;

}