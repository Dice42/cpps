/*Function Overriding 
• Redefining a function of base class in derived class
 • Function overriding is used for achieving runtime polymorphism
 • Prototype of a overrides function must be exactly same as base class function*/
 
#include <iostream>

class Base
{
    public:
         virtual void fun(){std::cout<<"fun of Base"<<std::endl;} // we introduce virtual function to allow the calling of another derived overiding object
        //  void fun(){std::cout<<"fun of Base"<<std::endl;}
};

class Derived: public Base
{
    public:
        void fun(){std::cout<<"fun of Derived"<<std::endl;}
}; 






int main()
{
    // Derived d;
    Base *p = new Derived;
    p->fun();
    // d.fun( );
}