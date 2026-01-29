#include <iostream>
using namespace std;

int main(){
    float p,r,t;
    cin >> p >> r >> t;

    float SI = (p*r*t)/100;
    bool total= (SI > (50.0/100)*p);
    cout << total;

    if (total ){
        cout<<"have to pay the tax";
    } else {
        cout << "do not have to pay the tax";
    }
}

