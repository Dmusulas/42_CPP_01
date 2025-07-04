/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:52:48 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/13 20:10:04 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
    int zombieCount = HORDE_SIZE;

    if (argc == 2) {
        zombieCount = std::atoi(argv[1]);
        if (zombieCount <= 0) {
            zombieCount = HORDE_SIZE;
        }
    }

    Zombie *horde = zombieHorde(zombieCount, "GenericZombieName");

    for (int i = 0; i < zombieCount; i++) {
        horde[i].announce();
    }

    delete[] horde;

    return 0;
}
