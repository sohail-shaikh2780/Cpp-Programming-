#include<iostream>
using namespace std;

template<class C>
class Parent
{
    protected:
    C name;
    public:
    void func(C name)
    {
        cout<<"Hello "<<name<<endl;
    }
};



int main()
{
    Parent <string> obj;
    Parent<int> obj1;
    cout<<"answer="<<endl;
    obj.func("Saud");
    obj1.func(55);

}