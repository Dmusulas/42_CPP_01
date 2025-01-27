/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:23:01 by dmusulas          #+#    #+#             */
/*   Updated: 2025/01/27 18:05:54 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB {
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack(void);
};

#endif // !HUMANB_HPP
