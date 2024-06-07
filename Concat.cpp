#include<iostream>
using namespace std;
void str_concat(char *a,char *b);

int main()
{
    char a[10],b[10];
    cout<<"Enter the string"<<endl;
    cin>>a;
    cout<<"Enter the second string"<<endl;
    cin>>b;
    str_concat(a,b);
    cout<<"Concateed string is="<<a<<endl;
}
void str_concat(char *a,char *b)
{
    while(*a!='\0')
    {
        a++;
    }
    while(*b!='\0')
    {
        *a=*b;
        a++;
        b++;
    }
    *a='\0';
}