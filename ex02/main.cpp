/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:14:49 by cwolf             #+#    #+#             */
/*   Updated: 2025/09/29 10:33:14 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main (void)
{
    MutantStack<int> test;
    
    test.push(42);
    test.push(43);
    test.push(44);
    
    for (auto i = test.begin(); i < test.end(); i++)
    {
        std::cout << *i << std::endl;
    }
    
    std::cout << std::endl;
    
    for (auto i = test.end() - 1; i >= test.begin(); i--)
    {
        std::cout << *i << std::endl;
    }
}