//prepared by @Mahin
#include <algorithm>
#include <iostream>

int main()
{
    int a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<std::min(a,std::min(b,c));
    std::cout<<" "<<std::max(a,std::max(b,c));

    

}
