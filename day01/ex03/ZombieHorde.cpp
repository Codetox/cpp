/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 09:57:31 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 14:26:23 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    _zombies = new Zombie[n];
    _count = n;
    for (int i = 0; i < n; i++)
    {
        _zombies[i].set_name(this->randomChump());
        _zombies[i].set_type(this->randomType());
    }
}

ZombieHorde::~ZombieHorde(void)
{
    delete[] _zombies;
}

std::string  ZombieHorde::randomChump(void)
{
    std::string names[] = {"Franck",  "Jack", "Freddy", "Harry", "Esther"};
    std::string name;

    name = names[rand() % 5];
    return (name);
}

std::string  ZombieHorde::randomType(void)
{
    std::string types[] = {"walker",  "runner", "Crawler", "Screamer", "Exploder"};
    std::string type;

    type = types[rand() % 5];
    return (type);
}

void        ZombieHorde::announce(void)
{
    int i;

    i = 0;
    for (int i = 0; i < _count; i++)
    {
        _zombies[i].announce();
    }
}
