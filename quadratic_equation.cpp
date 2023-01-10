#include <iostream>
#include <cmath>
using namespace std;

double a;
double b;
double c;

double sol1;
double sol2;

int main() {
    cout<<"Please enter a value of a: "<<endl;
    cin>>a;
    cout<<"Please enter a value of b: "<<endl;
    cin>>b;
    cout<<"Please enter a value of c: "<<endl;
    cin>>c;

    sol1 = (-b + (sqrt(b*b - 4*a*c))) / (2*a);
    sol2 = (-b - (sqrt(b*b - 4*a*c))) / (2*a);

    if (a == 0){
        cout<<"This equation has no solution."<<endl;
    } else if ((b*b - 4*a*c) == 0){
        cout<<"This equation has one real solution: x="<<sol1<<endl;
    } else if ((b*b - 4*a*c) < 0){
        cout<<"This equation has no real solution."<<endl;
    } else if ((b*b - 4*a*c) > 0){
        cout<<"This equation has two real solutions: x="<<sol1<<" and x="<<sol2<<endl;
    }
    return 0;
}