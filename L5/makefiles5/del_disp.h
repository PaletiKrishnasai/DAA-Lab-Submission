#include<iostream>
void del_disp(int ct)
{
    std::cout<<"running";
        for(int i=0;i<ct;i=i+10)
            std::cout<<'*';
        std::cout<<'\n';
}