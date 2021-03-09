#include<iostream>
void fun();

int main()
{
    std::cout<<"Hello World!"<<std::endl;
    fun();
    return 0;
}

void fun()
{
    std::cout<<"new Function.";
}