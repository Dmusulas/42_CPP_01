/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:22:56 by dmusulas          #+#    #+#             */
/*   Updated: 2025/01/27 18:02:07 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon {
private:
    std::string type;

public:
    const std::string &getType(void) const;
    void setType(const std::string &type);
    Weapon(std::string type);
};

#endif // !WEAPON_HPP
