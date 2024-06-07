#include<iostream>
using namespace std;

class number
{
    int i,n;
    public:
    void Even(int n)
    {
        cout<<"THe Even Number:"<<endl;
        for(i=0;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<i;
            }
            cout<<endl;
        }
    }

    void odd(int n)
    {
        cout<<"The Odd number are:"<<endl;
        for(i=0;i<=n;i++)
        {
            if(i%2==1)
            {
                cout<<i;
            }
            cout<<endl;
        }
    }

};

int main()
{
    number n1;
    n1.Even(10);
    n1.odd(10);

}