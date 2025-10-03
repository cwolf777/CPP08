/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:14:49 by cwolf             #+#    #+#             */
/*   Updated: 2025/09/30 11:01:33 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main (void)
{
    MutantStack<int> test;
    
    test.push(42);
    test.push(43);
    test.push(44);
    
    for (auto it = test.begin(); it != test.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    
    std::cout << std::endl;
    
    for (auto it = test.end() - 1; it >= test.begin(); it--)
    {
        std::cout << *it << std::endl;
    }
}