#include <iostream>
using namespace std;
template <class T>
T maximum(T a, T b){
    if (a > b)
        return a;
    else
        return b;
}
int main(){
    cout << "Maximum Integer: "
         << maximum(10, 20) << endl;
    cout << "Maximum Float: "
         << maximum(5.5, 8.7) << endl;
    return 0;
}

