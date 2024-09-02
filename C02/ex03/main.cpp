/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:56:59 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/02 14:18:38 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Fixed x1(1.0f), y1(1.0f);
    Fixed x2(5.0f), y2(1.0f);
    Fixed x3(3.0f), y3(5.0f);

    Point a(x1, y1);
    Point b(x2, y2);
    Point c(x3, y3);

    Fixed px(3.0f), py(3.0f);
    Point p(px, py);

    std::cout << "Point p is " << (bsp(a, b, c, p) ? "inside" : "outside") << " the triangle" << std::endl;

    return 0;
}
