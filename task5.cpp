#include <iostream>
using namespace std;
float income(string screen, int row, int col);
main(){
    string screen;
    int row, col;
    float result;
    cout << "Enter screen type: ";
    cin >> screen;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    result = income(screen, row, col);
    cout << result;
}
float income(string screen, int row,int col){
    float price;
    if(screen=="Premiere"){
        price=row*col*12.0;
    }
    else if(screen=="Normal"){
        price=row*col*7.50;
    }
    else if(screen=="Discount"){
        price=row*col*5.0;
    }
    return price;
}