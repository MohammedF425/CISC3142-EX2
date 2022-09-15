#include <iostream>
int main(){ 

    int max, min;
    std::cout<< "Enter two integers" <<std::endl;
    std::cin>>max>>min;
    int temp=max;
    if(max<min){
        max = min;
        min = temp;
    }
    for(int i = max; i >=min; i=i-1){
        std::cout<<i<<std::endl;
    }
return 0;
}
