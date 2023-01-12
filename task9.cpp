#include <iostream>
#include <cmath>
using namespace std;
float calculate(int days, int weekends);
main(){
    string year;
    int days,weekends;
    float result;
    cout << "Enter normal or leap: ";
    cin >> year;
    cout << "Enter holidays in the year excluding Saturday or Sunday: ";
    cin >> days;
    cout << "Enter number of weekends, in which Vladimir travels to his hometown: ";
    cin >> weekends;
    result=calculate(days, weekends);
    
    if(year=="Normal"){
        cout<< result;
    }
    if(year=="leap"){
        result= result + ((result*15)/100);
        cout <<ceil(result);
    }
    
}
float calculate(int days, int weekends){
    int weekend;
    float plays, playsofia, final;
    weekend=48-weekends;
    plays=days*2/3;
    playsofia=plays+(weekend*3/4);
    final=playsofia+weekends;
    return final;




}