#include<iostream>
using namespace std;

template<typename T>

T Fibanoci(T c)
{
    int i,n1=0;n2=1,n3;
    for(i=2;i<=c;i++)
    {
        n3=n1+n2;
        cout<<n3;
        n1=n2;
        n2=n3;


    }
    return 0;

};



int main()
{
    int n;
    cout<<"Enter the number="<<endl;
    cin>>n;
    cout<<Fibanoci(n);

}