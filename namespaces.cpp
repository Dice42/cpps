/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:16:32 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/17 16:25:04 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace Foo
{
	void bar(void)
	{
		std::cout << "Foo::bar(void)" << std::endl;
		return ;
	}
}


namespace Foo
{
	void bar(int n)
	{
		std::cout << "Foo::bar(int n)" << std::endl;
		std::cout << "n = " << n << std::endl;
		std::cout << "n = " << n + 1 << std::endl;
		return ;
	}
}

namespace Foo
{
	void bar(void *str)
	{
		std::cout << "Foo::bar(char *str)" << std::endl;
		std::cout << "str = " << (char *)str << std::endl;
		return ;
	}
}

int main	(void)
{

	/*function overload*/
	Foo::bar();
	Foo::bar(42);
	Foo::bar((void *)"hello world");
	return (0);
}