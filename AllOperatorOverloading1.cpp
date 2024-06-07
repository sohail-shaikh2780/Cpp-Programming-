#include<iostream>
using namespace std;

class Number
{
    int num,num2,res;
    public:
    Number()
    {

    }
    // Number()
    // {
    //     this->num=n;
    //     this->num2=n2;
    // }
    Number operator*(Number &n)
    {
        cout<<"Multiplication="<<endl;
        Number res;
        res.num=num*n.num;
        res.num2=num2*n.num2;
    
       return Number(res.num,res.num2);
    }
    void dispaly()
    {
        cout<<"Result ="<<res<<endl;
    }

};

int main()
{
    Number n1(5,5);
    Number n2(6,6);
    Number n3;
    n3=n1*n2;
    n3.dispaly();
    return 0;

}