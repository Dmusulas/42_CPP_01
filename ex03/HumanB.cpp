/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:23:03 by dmusulas          #+#    #+#             */
/*   Updated: 2025/01/27 18:07:37 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }

void HumanB::attack(void) {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType()
                  << std::endl;
    } else {
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
}
