/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:16:50 by cwolf             #+#    #+#             */
/*   Updated: 2025/09/29 10:25:39 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() = default;
        MutantStack(const MutantStack &other) = default;
        MutantStack &operator=(const MutantStack &other) = default;
        ~MutantStack() = default;
        
        using iterator = typename std::stack<T>::container_type::iterator; //erstellt alias mit using containertype ist deque  ::iterator nimmt iterator des container types(deque)
        
        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }
    
};