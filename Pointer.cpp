#include <iostream>
using namespace std;

int main(){
    int x=5;
    int *ptr = &x;

    cout <<"Before changing= " <<x <<endl;

    *ptr=20;

    cout <<"After changing= " << *ptr;
}

