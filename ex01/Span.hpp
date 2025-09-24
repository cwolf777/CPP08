/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:34:17 by cwolf             #+#    #+#             */
/*   Updated: 2025/09/24 11:06:21 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <climits>
#include <random>
#include <cstdlib>
#include <ctime>

class Span 
{
    private:
        unsigned int _max;
        std::vector<unsigned int> _storage;

    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        
        void addNumber(unsigned int num);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        void addNumbers(unsigned int n, unsigned int range);
        void printSpan();
};