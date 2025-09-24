/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:01:07 by cwolf             #+#    #+#             */
/*   Updated: 2025/09/23 16:05:16 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

template <typename T>

auto easyfind(T &container, int val) -> decltype(container.begin())
{
    auto i = std::find(container.begin(), container.end(), val);

    if (i == container.end())
    {
        throw std::runtime_error("Value not found inside of container");
    }
    return i;
}