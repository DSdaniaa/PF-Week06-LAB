#include <iostream>
using namespace std;
char grade(int num);
main(){
    int num;
    char result;
    cout << "Enter your number: ";
    cin >> num;
    result= grade(num);
    cout << "your Grade is "<< result;

}
char grade(int num)
{
    char result;
    if(num<50){
        result='F';
    }
    else if(num>=50 && num<=60){
        result='E';
    }
    else if (num>=61 && num<=70){
        result ='D';
    }
    else if(num>=71 && num <=80){
        result='C';
    }
    else if(num>=81 && num<=85){
        result='B';
    }
    else if(num>85 && num<100){
        result ='A';
    }

    return result;
    
}