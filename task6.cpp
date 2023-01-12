#include <iostream>
using namespace std;
float lowprice(int kilo, string time);
main(){
    int km;
    string time;
    float result;
    cout << "Enter kilometers: ";
    cin >> km;
    cout << "Enter the travelling period: ";
    cin >> time;
    result= lowprice(km, time);
    cout <<"lowest price is: "<< result;

}
float lowprice(int km, string time){
    float price;
    if(time=="day" && km<20){
        price =(km*0.79)+0.7;
    }
    else if(time=="night" && km<20){
        price =(km*0.90)+0.7;
    }
    else if((time == "day" || time=="night") && (km>=20 && km<100)){
        price=km*0.09;
    }
    else if((time== "day" || time =="night")&& km>=100){
        price=km*0.06;
    }
    
    return price;


}