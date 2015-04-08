/*---------------------------------------------------
C++ primul progran cu clase
-----------------------------------------------------*/
#include<iostream>

using namespace std;

class Messagge{
    public:
    void display(){
        cout << "hello world!";

    }
};
int main(){
    Messagge c;
    c.display();
    return 0;
}
