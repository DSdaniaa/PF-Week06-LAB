#include <iostream>
using namespace std;
main(){
    int price;
    string brand;
    cout << "Enter the brand name: ";
    cin >> brand;
    cout << "Enter a price of shirt";
    cin >> price;
    if( price <= 1500 && brand == "outfitters"){
        cout << "buy it"<< endl;
    }
    else
    {
        cout << "don't buy";
    }
}
