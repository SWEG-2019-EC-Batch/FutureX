#include <iostream>
#include<iomanip>


using namespace std;

int main (){
    float assignment,midterm,final,total,pass,fail;
    cout<< "enter the assignment mark ";
    cin>>assignment;
    cout<< "enter the midterm mark ";
    cin>>midterm;
    cout<< "enter the final mark ";
    cin>>final;
    
    total=(assignment*0.2)+(midterm*0.3)+(final*0.5);
    cout << fixed << setprecision(1);
    cout << "Total = " << total << endl; 
    cout<<(total>=50 ?"pass" : "fail")<<endl;
return 0;
}
