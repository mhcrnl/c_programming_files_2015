/*----------------------------
cpp adunare clasa
-------------------------------*/

#include<iostream>

using namespace std;

class Matematica{
    int x, y;
    public:
    void input(){
        cout << "introduce-ti doua numere: ";
        cin >> x >> y;
    }
    void add(){
        cout << "Rezultat: "<< x+y ;
    }
};

int main(){
    Matematica m;

    m.input();
    m.add();
    return 0;
}
