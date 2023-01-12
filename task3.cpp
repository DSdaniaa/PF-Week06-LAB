#include <iostream>
using namespace std;
string checkTitle(int num, char gender);
main(){
    int num;
    string result;
    char gender;
    cout << "Enter your age: ";
    cin >> num;
    cout << "Enter M or F for gender: ";
    cin >> gender;
    result=checkTitle(num, gender);
    cout << "you are: "<< result;


}
string checkTitle(int age, char gender){
    string result;
    if(gender=='M'&& age >=16){
      result= "Mr.";
    }
    if(gender=='M' && age<16){
        result= "Master";
    }
    if(gender=='F' && age>=16){
        result="Ms.";
    }
    if(gender=='F'&& age <16){
        result="Miss";
    }
    return result;
}