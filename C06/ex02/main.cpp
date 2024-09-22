/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:40:41 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/22 11:46:34 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#define GREEN  		"\033[32m"
#define RESET		"\033[0m"

class Base {public: virtual ~Base(void){};};
class A : public Base{public: ~A(){}};
class B : public Base{public: ~B(){}};
class C : public Base{public: ~C(){}};

Base*	generate(void)
{
	Base	*p;
    
	std::srand(std::time(0));
    int dice_roll = (std::rand() % 3) + 1;
	switch (dice_roll)
	{
		case 1: p = new A();
			std::cout << GREEN << "Generated A" << RESET << std::endl;
			break;
		case 2: p = new B();
			std::cout << GREEN << "Generated B" << RESET << std::endl;
			break;
		case 3: p = new C();
			std::cout << GREEN << "Generated C" << RESET << std::endl;
			break;
	}
	return (p);
}

void	identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	
	if (a != NULL)
		std::cout << "Ptr is type A" << std::endl;
	else if (b != NULL)
		std::cout << "Ptr is type B" << std::endl;
	else if (c != NULL)
		std::cout << "Ptr is type C" << std::endl;
}

void	identify(Base& p)
{
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "Ref is type A" << std::endl;
		(void)a;
	}
	catch (std::exception& e){
		try{
			B &b = dynamic_cast<B &>(p);
			std::cout << "Ref is type B" << std::endl;
			(void)b;
		}
		catch(std::exception& e){
			C &c = dynamic_cast<C &>(p);
			std::cout << "Ref is type C" << std::endl;
			(void)c;
		}
	}	
}


int main()
{
	Base *ptr = generate();
 	Base &ref = *ptr;

	identify(ptr);
	identify(ref);
	
	delete ptr;
}