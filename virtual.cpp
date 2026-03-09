#include <iostream>
using namespace std; 

class solution1{
    public:

    solution1(){
        cout<<"solution1 Inherit"<<endl;
    }
};
class solution2{
    public:
    solution2(){
        cout<<"solutution2 inherit"<<endl;
    }

};

class solution : public solution1,virtual solution2{
    public:

    solution(){
        cout<<"solution inherit"<<endl;
    }
};
int main(){
      solution obj;
      return 0;
}