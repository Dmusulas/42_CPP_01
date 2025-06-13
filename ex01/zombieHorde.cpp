/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:02:17 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/13 20:06:59 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <string>

Zombie *zombieHorde(int N, std::string name) {
    if (N <= 0) {
        return NULL;
    }

    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        std::ostringstream oss;
        oss << name << i;
        std::string newName = oss.str();
        horde[i].setName(newName);
        horde[i].setName(newName);
    }

    return horde;
}
