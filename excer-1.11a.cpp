#include <iostream>
int main(){ 
    int max,min;
    std::cout << "Enter two integers" <<std::endl;
    std::cin >>max>>min;
    int temp=max;
    if(max<min){
        max = min;
        min = temp;
    }
    while(max>=min){
        std::cout<<max<<std::endl;
        max=max-1;
    }
    return 0;
}
