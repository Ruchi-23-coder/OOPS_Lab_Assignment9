#include <iostream>
#include <string>
using namespace std;
template <class T, class U>
class Pair{
    T first;
    U second;
public:
    Pair(T a, U b){
        first = a;
        second = b;
    }
    void display(){
        cout << "First value: " << first << endl;
        cout << "Second value: " << second << endl;
    }
};
int main(){
    Pair<int, string> p(101, "Rahul");
    p.display();
    return 0;
}

