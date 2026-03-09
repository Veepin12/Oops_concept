#include <iostream>
using namespace std;

class A1{
    public:
        A1(){
            cout<<"A1 constructor called!"<<endl;
        }
};
class A2{
    public:
        A2(){
            cout<<"A2 constructor called!"<<endl;
        }
};

class A3{
    public:

    A3(){
        cout<<"A3 constructor called!"<<endl;
    }
};
class B : public A1, public A2, virtual A3{
    public:
        B(){
            cout<<"B constructor called!"<<endl;
        }
};

int main(){
    class B b;
    
    
    return 0;
}