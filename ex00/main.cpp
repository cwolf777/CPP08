/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:42:59 by cwolf             #+#    #+#             */
/*   Updated: 2025/09/25 13:34:02 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v = {1, 2, 3, 4};
    std::list<int> l = {5,6,7};

    try
    {
        auto i = easyfind(v, 3);
        std::cout << "Found: " << *i << std::endl;
        auto x = easyfind(l, 7);
        std::cout << "Found: " << *x << std::endl;
        auto m = easyfind(l, 42);
        std::cout << "Found: " << *m << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}