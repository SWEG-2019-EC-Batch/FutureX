#include <iostream>
#include<iomanip>

using namespace std;

int main (){
    int energy;
    float total,energy_charge;
    cout << "Enter the amount you have used: ";
    cin >>energy;

    total=(energy>50)? (50 * 1.5) + (energy-50)*2 +10:(energy*1.5) +10;
    energy_charge=total-10;

    cout <<fixed<<setprecision(2);

    cout <<"Energy_charge is " << energy_charge <<endl;
    cout <<"service charge is " << 10.00 <<endl;
    cout <<"Your total is  "<< total <<endl;

    return 0;

}
