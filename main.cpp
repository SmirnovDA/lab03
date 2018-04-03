#include <iostream>
#include <sstream>
#include <cassert>

using namespace std;
char Scale[] = "CKF" ;
struct Temperature {
    double temp ;
    char scale;
};
istream & operator>>(istream& in , Temperature & Temp);
istream & operator>>(istream& in , Temperature & Temp)
{
    in >>Temp.temp;
    in >> Temp.scale;
}
void Test_Temperature_input(){
    Temperature Temp;
    string inp = "10C";
    istringstream iss(inp);
    iss>>Temp;
    assert(Temp.temp==10);
    assert(Temp.scale=='C');
    istringstream iss1("0K");
    iss1>>Temp;
    assert(Temp.temp==0);
    assert(Temp.scale=='K');
    istringstream iss2("-400F");
    iss2>>Temp;
    assert(Temp.temp==-400);
    assert(Temp.scale=='F');
}
double convert (const Temperature& Temp,char scale_to){
    double Kelvins;
    switch (Temp.scale){
    case 'C':Kelvins+=-273.15;
        break;
    case 'F':Kelvins+=((9.0/5)(Temperature-273)-32);
        break;
    }}
}
int main(){
    Test_Temperature_input();
    /*Гистограмма*/
}
