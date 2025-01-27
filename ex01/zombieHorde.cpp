/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:02:17 by dmusulas          #+#    #+#             */
/*   Updated: 2025/01/27 16:44:35 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name) {
    if (N <= 0) {
        return nullptr;
    }

    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        std::string newName = name + std::to_string(i);
        horde[i].setName(newName);
    }

    return horde;
}
