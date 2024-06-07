#include<iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    Complex()
    {

    }
    
    Complex(int r,int i)
    {
        this->img=i;
        this->real=r;
    }
    void display()
    {
        cout<<real<<"*"<<img<<"i"<<endl;
    }

    Complex operator+(Complex c)
    {
        cout<<"operator Plus"<<endl;
        Complex result;
        result.real=real+c.real;
        result.img=img+c.img;
        return result;
    }
    Complex operator-(Complex m);
};
Complex Complex::operator-(Complex m)
{
    cout<<"operator Minus"<<endl;
    Complex result;
    result.real=real-m.real;
    result.img=img-m.img;
    return result;

}

int main()
{
    Complex c1(4,5);
    c1.display();
    Complex c2(5,4);
    c2.display();
    Complex c3=c1+c2;
    c3.display();
    Complex c4=c1-c2;
    c4.display();


}