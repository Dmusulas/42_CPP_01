/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:45:29 by dmusulas          #+#    #+#             */
/*   Updated: 2025/01/27 15:50:31 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie(void) { std::cout << name << ": I am dead!" << std::endl; }

void Zombie::announce(void) {
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
