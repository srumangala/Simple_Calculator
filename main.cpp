#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    cout << a << b << endl;
    c=a;
    a=b;
    b=c;
    cout << "The reversed numbers are " << endl << a << b <<endl;
    return 0;
}