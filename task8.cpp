#include <iostream>
using namespace std;
main(){
    float result, amount, transport;
    string type;
    int num;
    cout<< "Enter your budget: ";
    cin >> amount;
    cout << "Enter the category: ";
    cin >> type;
    cout << "Enter the number of people: ";
    cin >> num;
    if(num>=1 && num<=4){
        transport=(75*amount)/100;
    }
    else if(num>=5 && num<=9){
      transport=(60*amount)/100;

    }
    else if(num>=10 && num<=24){
      transport=(50*amount)/100;

    }
    else if(num>=25 && num<=49){
      transport=(40*amount)/100;

    }
    else if(num>=50){
      transport=(25*amount)/100;

    }
    if(type=="VIP"){
        result=499.99*num;
    }
    else if(type=="Normal"){
        result=249.99*num;
    }
    result=result+transport;
    if(result>amount){
        result= result-amount;
        cout << "Not enough money! You need "<< result << " QR.";
    }
    else if(result<amount){
        result= amount-result;
        cout << "Yes! You have "<< result << " QR left.";
    }
}