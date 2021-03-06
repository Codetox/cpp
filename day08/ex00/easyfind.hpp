/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:02:27 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 13:08:52 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <iterator>
# include <exception>
# include <vector>

template<typename T>
void    easyfind(T& cont, int nb)
{
    if (find(cont.begin(), cont.end(), nb) == cont.end())
        throw(std::string("Value doesn't exist in the container !"));
}

#endif
