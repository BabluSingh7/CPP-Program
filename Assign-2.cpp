#include<iostream>
using namespace std;

//Q-1
void f1()
{
    cout<<"Hello Mysirg"<<endl;

}
//Q-2
void f2()
{
    cout<<"hello\nMysirg"<<endl;
}
//Q-3
void f3()
{
    int a,b;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    cout<<"Sum is = "<<a+b<<endl;
}
//Q-4
void f4()
{
    int r;
    cout<<"Enter a radius :";
    cin>>r;
    float a;
    a = 3.14*r*r;
    cout<<"Area of cicle"<<a;
}
//Q-4
void f5()
{
    int l,w,h;
    cout<<"Enter a length, width, and height. ";
    cin>>l>>w>>h;
    int a;
    a = l*w*h;
    cout<<"volume of cuboid is = "<<a<<endl;

}
int main()
{
    f5();
    return 0;
}