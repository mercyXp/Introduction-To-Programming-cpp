#include <iostream>

//solving equation: ax + b = 0 
int main(){
    int a,b;
    std::cin>>a>>b;
    if(a!=0){  //x = -b/a , a must not be equal to zero
        std::cout<< -b/a;
    }
    else if (b == 0){
        std::cout<<"R";
    }
    else{
        std::cout<<"NO SOLUTION";
    }
    
    return 0;
}