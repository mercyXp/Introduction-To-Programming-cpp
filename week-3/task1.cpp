#include <iostream>

int main(){
    int a,b;
    std::cin>>a>>b;

    if(a%2 != 0){
        std::cout<<a;
    }
    else if(b%2 !=0){
        std::cout<<b;
    }
    
    return 0;
}