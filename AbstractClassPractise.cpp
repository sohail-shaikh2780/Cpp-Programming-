#include<iostream>
using namespace std;

class idea{
    virtual void func()=0;

    void norm()
    {
        cout<<"Abstrct class"<<endl;
    }
};
class think:public idea{
    public:
    void func()
    {
        cout<<"Derived class Func"<<endl;
    }
};





int main()
{
    think obj;
    obj.func();
    return 0;
}
    