/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:34:35 by cwolf             #+#    #+#             */
/*   Updated: 2025/09/30 10:58:01 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(0)
{
    
}

Span::Span(unsigned int max) : _max(max) 
{
    
}

Span::Span(const Span& other) : _max(other._max), _storage(other._storage)
{

}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        _max = other._max;
        _storage = other._storage;
    }
    return *this;
}

Span::~Span()
{

}

void Span::addNumber(unsigned int num)
{
    if(_storage.size() < _max)
    {
        _storage.push_back(num);
        // std::cout << "Added number: " << num << std::endl;
    }
    else
        throw std::runtime_error("No space left inside storage");
}

unsigned int Span::shortestSpan()
{
    if (_storage.size() < 2)
        throw std::runtime_error("Not enough numbers stored in storage");
    std::sort(_storage.begin(), _storage.end());
    unsigned int diff;
    unsigned int min = UINT_MAX;
    for (unsigned int i = 0; i < _storage.size() - 1; i++)
    {
        diff = _storage[i+1] - _storage[i];
        if (diff < min)
            min = diff;
    }
    return min;
    
}

unsigned int Span::longestSpan()
{
    if (_storage.size() >= 2)
    {
        int min = *std::min_element(_storage.begin(), _storage.end());
        int max = *std::max_element(_storage.begin(), _storage.end());
        
        return (max - min);
    }
    else
        throw std::runtime_error("Not enough numbers stored in storage");
}

void Span::addNumbers(unsigned int n, unsigned int range) //pass in 2 iterators
{
    for (unsigned int i = 0; i < n; i++)
    {
        unsigned int randomNum = std::rand() % range + 1;
        if (std::find(_storage.begin(), _storage.end(), randomNum) == _storage.end())
        {
            addNumber(randomNum);
        }
    }
}

void Span::printSpan()
{
    for (unsigned int i = 0; i < _storage.size(); i++)
    {
        std::cout << _storage[i] << std::endl;
    }
}