#include<iostream>
using namespace std;

class Details{
    public:
    int a;
    virtual void func()=0;

    void f1()
    {
        cout<<"Abstract class"<<endl;
    }
};
class Info:public Details
{
    public:
    void func()
    {
        cout<<"inherit class "<<endl;
    }
};
int main()
{
    Info obj;
    obj.func();
    obj.f1();
    return 0;
}