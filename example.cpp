#include "output"
#include "input"
int main()
{
    output::putchar("hello world");//to print a const char only
    output::putint(1);//to print a number int
    output::putfloat(3.14);//to print a floatnumber
    output::returnline();//return to next line
    output::putend();//the end what to get
    input::putchar();//input char
    //use input::Char to look what char is input
    input::putint();
    //use input::Int to look what int is input
    input::putfloat();
    //use input::Float to look what float is input
    input::returnline();//return to next line

}