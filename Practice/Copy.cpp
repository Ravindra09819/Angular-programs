#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo()
    {
        cout<<"inside default constructor\n";

        x=0;
        y=0;
    }

    Demo(int i,int j)
    {

        cout<<"inside parameterised construtor\n";
        x=i;
        y=j;

    }


    Demo(Demo &ref)
    {

        cout<<"copy constructor\n";
        
        x=ref.x;
        y=ref.y;
        cout<<"copy constructor\n"<<x<<y<<endl;
    }

    ~Demo()
    {
        cout<<"inside destructor\n";

    }
};
int main()
{
    Demo obj1(11,21);
    Demo obj2(obj1);
    return 0;
}