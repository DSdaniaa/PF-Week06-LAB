#include <iostream>
using namespace std;
int isgreater(int, int, int);
main(){
    int num1, num2, num3, result;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a second number: ";
    cin >> num2;
    cout << "Enter a third number: ";
    cin >> num3;
    result = isgreater( num1,num2, num3);
    cout << result;

}
int isgreater(int num1, int num2, int num3){
    if(num1>num2 && num1>num3)
    {
            return num1;
    }
        
        else if(num2>num3 && num2 > num1){
        return num2;
        }
        else if(num3>num2 && num3>num1){
            return num3;
        }
        else 
        return 0;

}
