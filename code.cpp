// beecrowd 1051 Taxes
#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    float salary;
    cin >> salary;
    if(salary >=0 && salary <=2000){
        cout<<"Isento"<<endl;
    }else if(salary >=2000.01 && salary <=3000){
        cout<<fixed<<setprecision(2)<<"R$ "<<(salary-2000)*0.08<<endl;
    }else if(salary >=3000.01 && salary <=4500){
        cout<<fixed<<setprecision(2)<<"R$ "<<(salary-3000)*0.18+(1000*0.08)<<endl;
    }else if(salary >4500){
        cout<<fixed<<setprecision(2)<<"R$ "<<(salary-4500)*0.28+(1500*0.18)+(1000*0.08)<<endl;
    }else{
        cout<<"Please check the salary you have entered once again."<<endl;
    }
   
    system("pause");
    return 0;
}