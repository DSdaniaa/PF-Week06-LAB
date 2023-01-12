#include <iostream>
using namespace std;
float cost(string city, string product, float num);
main(){
    string city, product;
    float num, result;
    cout << "enter the city: ";
    cin >> city;
    cout << "enter the product name: ";
    cin >> product;
    cout << "enter the quantity: ";
    cin >> num;
    result= cost(city, product, num);
    cout << result;
}
float cost(string city, string product, float num){
    float total;
    if(city=="sofia"){
        if(product=="coffee"){
            total=num*0.5;
        }
        else if(product=="water"){
            total=num*0.8;
        }
        else if(product=="beer"){
            total=num*1.2;
        }
        else if(product=="sweets"){
            total=num*1.45;
        }
        else if(product=="peanuts"){
            total=num*1.60;
        }
    }
    if(city=="plovdiv"){
        if(product=="coffee"){
            total=num*0.4;
        }
        else if(product=="water"){
            total=num*0.7;
        }
        else if(product=="beer"){
            total=num*1.15;
        }
        else if(product=="sweets"){
            total=num*1.30;
        }
        else if(product=="peanuts"){
            total=num*1.5;
        }
    }
    if(city=="varna"){
        if(product=="coffee"){
            total=num*0.45;
        }
        else if(product=="water"){
            total=num*0.7;
        }
        else if(product=="beer"){
            total=num*1.1;
        }
        else if(product=="sweets"){
            total=num*1.35;
        }
        else if(product=="peanuts"){
            total=num*1.55;
        }
    }
    return total;
}
