#include<iostream>
using namespace std;

class A{

    public:
    int a;
    void funcA()
    {
        cout << "Func A\n";
    }

    private:
        int b;
        void funcB()
        {
            cout << "Func B\n";
        }

    protected:
        int c;
        void funcC()
        {
                cout << "Func C\n";
        }   
}; 
    


int main()
{
    A obj; //manking an object of class A; this is execute since it is under #public 
    obj.funcA();//calling function A; this is execute since it is under #public 
    obj.a = 2;

  //  obj.funcB();//calling function B; this is not execute and throw an error since it is under #private 
  //  obj.funcC();//calling function C; this is not execute and throw an error since it is under #protected

    return 0;
}