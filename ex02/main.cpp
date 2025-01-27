/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:07:21 by dmusulas          #+#    #+#             */
/*   Updated: 2025/01/27 17:17:08 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "The memory address of string variable is: " << &string
              << std::endl;
    std::cout << "The memory address of stringPTR variable is: " << stringPTR
              << std::endl;
    std::cout << "The memory address of stringREF variable is: " << &stringREF
              << std::endl;

    std::cout << "The value of string variable is: " << string << std::endl;
    std::cout << "The value pointed to by stringPTR variable is: " << *stringPTR
              << std::endl;
    std::cout << "The value pointed to by stringREF variable is: " << stringREF
              << std::endl;

    return 0;
}
