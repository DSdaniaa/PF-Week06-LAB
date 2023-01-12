#include <iostream>
using namespace std;
float total(string, string, float);
main(){
    float num, result;
    string day, month;
    cout << "Enter the Amount: ";
    cin >> num;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the Month: ";
    cin >> month;
    result = total(day, month,num);
    cout << "The Final Amount is :" << result;

}
float total(string day, string month, float num){
    float result;
    if(day=="sunday" && (month=="october"|| month=="march" || month=="august")){
        result=num-((10*num)/100);
    }
    if(day=="monday" && (month=="november"|| month=="december")){
        result=num-((5*num)/100);
    }
    else {
        result=num;
    }
    return result;
}