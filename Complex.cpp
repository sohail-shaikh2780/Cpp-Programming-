#include<iostream>
using namespace std;

class Number
{
    int real,img;
    public:
    void set(int r,int i);
    int getByvalue();
    void Display();

};
void Number::set(int r,int i)

{
    real=r;
    img=i;
}
int Number::getByvalue()
{
    return real;
    return img;

}
void Number :: Display()
{
    int real,img;
    cout<<real<<"+"<<img<<"i";
}



int main()
{
    Number N1;
    N1.set(2,5);
    N1.getByvalue();
    N1.Display();

    return 0;


}