/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:22:21 by alidy             #+#    #+#             */
/*   Updated: 2021/06/14 11:11:51 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
		ScalarConversion conv(argv[1]);
		std::cout << "char: ";
		try{
			conv.printChar();
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "int: ";
		try{
			conv.printInt();
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "float: ";
		try{
			conv.printFloat();
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "double: ";
		try{
			conv.printDouble();
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}	
	}
    else
        std::cout << "Bad arguments !" << std::endl;
    return (0);
}