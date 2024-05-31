#include <iostream>
using namespace std;
int main()
{
    typedef enum {End,Add,Sub,Mul,Div}choice_t;
    while(true)
    {
        cout<<"Enter 1st operand and 2nd operand: ";
        float op1,op2;
        cin>>op1>>op2;
        cout <<
            "Choices:\n"
            "Enter "<<Add<<" to Add\n"
            "Enter "<<Sub<<" to Subtract\n"
            "Enter "<<Mul<<" to Multiply\n"
            "Enter "<<Div<<" to Divide\n"
            "Enter "<<End<<" to Exit\n"
            "Enter your choice: ";
        choice_t choice=(choice_t)({int ch;std::cin>>ch;ch;});
        float res = 0;
        switch(choice){
            case Add:res=op1+op2;
             break;
            case Sub:res=op1-op2; 
             break;
            case Mul:res=op1*op2;
             break;
            case Div:res=op1/op2;
             break;
            case End:exit(0);
            default:
                cout<<"Invalid input, try again\n";
        }
        std::cout<<"Result = "<<res<<endl;
    }
    return 0;
}
