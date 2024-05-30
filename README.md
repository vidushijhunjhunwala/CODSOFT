#include <iostream>
int main()
{
    typedef enum {END,ADD,SUB,MUL,DIV} choice;
    while(true)
    {
        std::cout<<"Enter 1st operand:";
        float op1;std::cin>>op1;
        std::cout<<"Enter 2nd operand:";
        float op2;std::cin>>op2;
        std::cout <<"Choices:\n"
            "Enter"<<ADD<<"to ADD\n"
            "Enter"<<SUB<<"to SUBTRACT\n"
            "Enter"<<MUL<<"to MULTIPLY\n"
            "Enter"<<DIV<<"to DIVIDE\n"
            "Enter"<<END<<"to EXIT\n"
            "Enter your choice: ";
        choice c=(choice)({int ch;std::cin>>ch;ch;});
        float rest = 0;
        switch (c) 
        {
            case ADD: res=op1+op2;
                break;
            case SUB: res=op1-op2; 
                break;
            case MUL: res=op1*op2;
                break;
            case DIV: res=op1/op2;
                break;
            case END: exit(0);
            default:
                std::cout<<"Invalid!";
        }
        std::cout<<"Result="<<res<<std::endl;
    }
    return 0;
}
