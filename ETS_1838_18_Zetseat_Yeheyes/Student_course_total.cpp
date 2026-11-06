#include <iostream>
#include <iomanip>


using namespace std;
int main() {
    float mid_term,assignment,final_term;

    cout<<"Enter your assignment result: ";
    cin >> assignment ;
    assignment*=0.2;
    cout<<"Enter your mid term result: ";
    cin>>mid_term ;
    mid_term *= 0.3;
    cout<<"Enter your final exam result: ";
    cin>> final_term;
    final_term *= 0.5;
    
    float total=assignment + mid_term + final_term;
    cout<< fixed << setprecision(1);
    cout<<"Your total reslut is: "<<total<<" and you have " << ((total >=50)?" PASSED ":" FAILED ")<<endl;
   
    return 0; 



}
