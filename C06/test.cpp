#include <iostream>
/* static cast */
// class parent					{};
// class child1 : public parent	{};
// class child2 : public parent	{};

// class unrelated					{};

// int main()
// {
// 	child1	a;

// 	parent * b;
// 	child1 * c;
// 	child2 * d;

// 	b = &a;

// 	// c = b;
// 	d = static_cast<child2 *>(b);
// }


/*dynamic cast*/
//it only happens during run time 
// it means during executions all other cast will made during the compilation, what it means the complier tell the cast that it sometimes it works and sometimes it doesnt
// it only done in run time 
// itll only works with polymorphics instances
using namespace std;

class parent					{public: virtual ~parent(void){}};
class child1 : public parent	{};
class child2 : public parent	{};

int main()
{
	// child1		a;
	parent	*b =  new child1() ; //implicit upcast

	child2 	*c;
	c = dynamic_cast<child2 *>(b);
	if (c == NULL)
	{
		cout << "comparison is not ok\n";
	}
	else
		cout << "comparison is ok\n";
}
// try
// {
// 	//in reference the 
// 	child2	& d = dynamic_cast<child2& >(*b);
	
// }catch(exception& e){
// 	cout << e.what() << endl;
// }

// 	cout << &a << endl;
// 	cout << b << endl;
// 	cout << c << endl;
// }

/* reinterpretation */
// u need to know what your casting to because the complier will not give any issues
// biascally the complier trust you

// int main()
// {
// 	float	  a = 420.042f;

// 	void	* b = &a;
// 	string 	* c = reinterpret_cast<string *>(b);
// 	int		& d = reinterpret_cast<int &>(b);

// 	cout <<"a :"<< a << endl;
// 	cout <<"b :"<< b << endl;
// 	cout <<"c :"<< *c << endl;
// 	cout <<"d :"<< d << endl;
	

// 	return (0);
// }

/* const cast */

// int main()
// {
// 	int	  a = 42;

// 	int const	* b = &a;
// 	// int 	* c = b;
// 	/*we need to avoid it as much as possible*/
// 	int		* d = const_cast<int *>(b);


// 	cout <<"a :"<< a << endl;
// 	cout <<"b :"<< *b << endl;
// 	// cout <<"c :"<< *c << endl;
// 	cout <<"d :"<< *d << endl;
// }


/* cast operator */

// class Foo{
// 	private:
// 		float	_v;
// 	public:
// 		Foo(float const v) : _v(v){}

// 		float	getV() {return this->_v;}
// 		operator float(){return this->_v;} //this are called cast operators
// 		operator int(){return static_cast<int>(this->_v);} //this are called cast operators
// };

// int main()
// {
// 	Foo		a(420.024f);
// 	float	b = a;
// 	int		c = a;

// 	cout << a.getV() << endl;
// 	cout << b << endl;
// 	cout << c << endl;

// }

/* Explicit Keyword*/

// class A {};
// class B {};

// class C {

// 	public:
// 							C( A const & _){return;}
// 			explicit		C( B const & _){return;}
// };

// void	f( C const & _){
// 	return;
// }

// int main()
// {
// 	f ( A() );
// 	f ( B() ); // this will not work becasue explicity we want to use that implicit constructor
// }