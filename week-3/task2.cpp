/*
The median of a set of numbers is defined as the value that separates the higher half from the lower half of the data set. It is often considered the "middle" value when the numbers are arranged in either ascending or descending order.
*/
#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

       //ascending order     descending order
    if((a > b && a < c ) || (a < b && a > c)) {
        cout<<a; //a is median
    }
            //ascending   
    else if((b > a && b < c) || (b < a && b > c)){
        cout<<b;
    }
    else{
        cout<<c;
    }
    
    return 0;
}