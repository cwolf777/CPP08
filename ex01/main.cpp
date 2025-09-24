/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:35:41 by cwolf             #+#    #+#             */
/*   Updated: 2025/09/24 11:07:18 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    std::srand(std::time(nullptr));
    try
    {
        Span basic(4);
        
        basic.addNumber(5);
        basic.addNumber(20);
        basic.addNumber(7);
        basic.addNumber(30);
        std::cout << "Longest Span: " << basic.longestSpan() << std::endl;
        std::cout << "Shortest Span: " << basic.shortestSpan() << std::endl;

        Span complex(50);
        complex.addNumbers(50, 200);
        // complex.printSpan();
        std::cout << "Longest Span: " << complex.longestSpan() << std::endl;
        std::cout << "Shortes Span: " << complex.shortestSpan() << std::endl;

        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}