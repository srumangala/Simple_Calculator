#include <iostream>

using namespace std;

float calculate(int num1, int num2, char operatorSymbol) {
    float result = 0;
    switch (operatorSymbol)
    {
    case '+':
        result = num1 + num2 ;
        break;

    case '-':
        result = num1 - num2 ;
        break;

    case '*':
        result = num1 * num2 ;
        break;

    case '/':
        result = num1 / num2 ;
        break;
    
    default:
        result = 0;
        break;
    }

    return result;
}

int main(){
    char operation;
    int num1;
    int num2;
    float finalResult = 0;

    cout << "Enter the operation you wish to perform." << endl 
         << "Options include addition (+) subtraction (-) multiplication (*) and division (/)" << endl;
    cin >> operation;

    cout << "Enter the two numbers you wish to operate : " << endl;
    cin >> num1 >> num2 ;

    finalResult = calculate(num1, num2, operation);

    cout << num1 << " " << operation << " " << num2 << " = " << finalResult ;


    return 0;
}